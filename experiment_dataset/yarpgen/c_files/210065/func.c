/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210065
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (var_11)));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        var_14 |= ((/* implicit */short) arr_0 [i_0] [i_0 - 4]);
        var_15 ^= ((/* implicit */unsigned int) ((short) ((unsigned short) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)43659))))));
        var_16 = (+(max((min((7445372197845230835ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))));
        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)46))))) <= (min((((/* implicit */unsigned long long int) (signed char)-117)), (11001371875864320791ULL)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_18 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_19 = (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_6 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned char)255);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 &= ((/* implicit */short) (+(262786593145511632ULL)));
                            var_21 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [i_3])))) ^ (15ULL)));
                            var_22 -= ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
            } 
        }
    }
}
