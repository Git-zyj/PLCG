/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25600
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
    var_12 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    var_13 = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) (unsigned short)56751)) / (((/* implicit */int) (signed char)56)))), (((/* implicit */int) ((signed char) var_6)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) (!((_Bool)1)));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 + 2]))))) : (((/* implicit */int) var_7)))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) ((long long int) max((((/* implicit */short) arr_9 [i_3 - 1] [i_2 - 1] [i_2 - 1])), (arr_6 [i_3 - 1] [i_3 + 2] [i_2 + 1]))));
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 - 1] [i_0 - 2] [i_3 + 1]);
                            arr_15 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) >> (((/* implicit */int) (unsigned char)31)))))) < (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)83)) || (var_9)))))));
                            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 4ULL))) << (((((/* implicit */int) arr_12 [i_0] [i_4 + 1] [i_2 - 1] [i_3 - 1])) >> (((((2780857899170217403LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)18]))))) - (2780857899170217400LL)))))));
                            var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_2 [i_1])), (arr_1 [i_2])))))), (((((unsigned int) var_6)) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_3 + 2] [10ULL])) << (((arr_1 [i_0 + 1]) - (1352373563))))))))));
                        }
                    }
                    for (unsigned short i_5 = 4; i_5 < 18; i_5 += 4) 
                    {
                        var_19 -= ((/* implicit */long long int) ((int) var_3));
                        var_20 ^= ((/* implicit */long long int) min((((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_5 - 2])) < (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_5 - 1])))), ((!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))))));
                        arr_18 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) var_7);
                    }
                    for (int i_6 = 3; i_6 < 18; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */int) ((short) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_3)))))), (min((((/* implicit */int) arr_17 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2])), (((arr_13 [14ULL] [15ULL] [14ULL] [i_1] [14ULL] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)118))))))));
                        arr_21 [i_2] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_2])))));
                    }
                    var_22 = ((/* implicit */unsigned char) var_4);
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_6))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_5))));
                }
                arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */signed char) arr_2 [i_0])))))))), ((~(arr_16 [i_0] [i_0 - 3] [i_1] [i_1])))));
            }
        } 
    } 
}
