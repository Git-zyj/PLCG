/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196738
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0]))));
                    var_15 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((13246253351701419235ULL) << (((11732796023205634414ULL) - (11732796023205634406ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6713948050503917224ULL))))) : (((/* implicit */int) (short)10146)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 += ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_1 [i_1 - 1])), (arr_9 [i_0 - 2] [i_3] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_1 [(signed char)1]))))) << (((arr_10 [13]) - (1073864137))))))));
                        var_17 ^= ((/* implicit */short) arr_2 [i_1 + 1]);
                        var_18 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0]) : (((/* implicit */int) arr_13 [i_0])))) | (((((/* implicit */int) (short)10147)) % (((/* implicit */int) var_2))))))) ? (arr_10 [i_1]) : ((((!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])))) ? (((/* implicit */int) arr_7 [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-10146)) || (((/* implicit */_Bool) var_13))))))));
                        var_19 ^= ((/* implicit */signed char) ((unsigned short) arr_2 [i_0 - 1]));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_20 ^= ((/* implicit */unsigned short) (-(-3955272466967028142LL)));
                            var_21 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) 1716933878U)) / (6713948050503917202ULL))));
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) arr_10 [i_0]);
                            var_23 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 1])), (arr_9 [i_1 - 1] [i_1 + 1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) - (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])))))));
                            arr_18 [i_5] [i_3] [i_3 + 1] [i_2] [8LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(short)8])) ? (((/* implicit */long long int) ((/* implicit */int) (short)10162))) : (arr_6 [3ULL] [i_2] [i_1])))) ? (((/* implicit */int) arr_14 [i_5] [(unsigned short)3] [i_0])) : (((/* implicit */int) arr_14 [(_Bool)1] [i_1] [12]))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) min((((_Bool) var_12)), (((arr_2 [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_4 [i_2] [i_6])))), (((int) (short)-10156))));
                        var_25 = max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -1937280168)) ? (((/* implicit */int) (unsigned short)44125)) : (((/* implicit */int) (short)10162)))))), (13368362552370149043ULL));
                    }
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))));
    }
    var_26 = ((/* implicit */unsigned int) ((long long int) (~(var_6))));
}
