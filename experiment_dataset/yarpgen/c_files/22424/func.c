/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22424
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (1644583829) : ((+(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_3 [i_0])))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_12 |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)30157))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            var_13 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                            arr_12 [i_0] [i_4] = ((/* implicit */unsigned char) (unsigned short)59428);
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_15 [i_5] [i_2] = ((((((/* implicit */int) var_4)) + (((/* implicit */int) (short)22290)))) <= (((/* implicit */int) (unsigned short)6105)));
                            var_14 = ((/* implicit */_Bool) min((var_14), ((!(arr_5 [i_1 - 1] [i_2] [(short)14] [i_5])))));
                        }
                    }
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_15 = (+(-6337179598572332548LL));
                                arr_23 [i_0] [i_8] = ((/* implicit */short) var_6);
                                var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2047))))) ? (((/* implicit */int) arr_0 [(signed char)20])) : (((/* implicit */int) (unsigned short)6108))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)43)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-50))) : ((-(var_9))))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)23145)) >= (((/* implicit */int) arr_7 [i_0] [i_6])))))));
                }
                arr_25 [(signed char)11] [i_1] = (short)-1;
                arr_26 [i_0] [(unsigned char)8] |= ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_18 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)5288)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (6208128208075248538ULL)));
}
