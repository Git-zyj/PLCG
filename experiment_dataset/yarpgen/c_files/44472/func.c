/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44472
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
    var_20 = var_19;
    var_21 = ((/* implicit */short) min((var_15), (((/* implicit */unsigned int) var_18))));
    var_22 = max(((short)-8621), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))) < (var_15)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((arr_1 [i_0 - 1] [i_0 - 1]) << (((var_16) - (10856679114389225307ULL))))) == (arr_1 [i_0 - 1] [i_0 + 1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_3])) || (((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1]))));
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10276159726316285910ULL)) ? (((/* implicit */unsigned long long int) var_15)) : (10276159726316285910ULL))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 20; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_17))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_19)))) ? (((/* implicit */int) (unsigned short)14785)) : ((+(((/* implicit */int) (unsigned short)13947)))))))));
                                var_25 = ((/* implicit */short) (unsigned char)255);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
