/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5297
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
    var_18 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((1125899906318336ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1536))))) ^ (((/* implicit */unsigned long long int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))));
                arr_6 [i_0 - 2] [i_1] [i_1] = ((/* implicit */short) ((((long long int) var_16)) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_2 [i_1] [3LL])) ? (-3138434742372688177LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)106)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 - 1])) <= (((/* implicit */int) arr_1 [i_2 - 1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_3 - 1]))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (short i_5 = 3; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_2] [i_4] [i_2])))))));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3932160ULL))));
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)-80))))) ? (-8242900) : (arr_18 [i_3 + 1] [i_4] [i_3 + 1])));
                    }
                } 
            } 
        }
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_0)) >= (min((((/* implicit */long long int) (~(((/* implicit */int) var_11))))), (((long long int) var_2))))));
}
