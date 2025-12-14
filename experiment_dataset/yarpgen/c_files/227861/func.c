/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227861
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1 + 1] [(unsigned short)10] [i_3] |= ((/* implicit */unsigned int) (~(140737471578112ULL)));
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_2] &= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((140737471578092ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0]))))))))));
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))))) ? ((-(((/* implicit */int) (short)-3266)))) : ((~(var_11))))))));
                            var_16 = ((/* implicit */_Bool) arr_7 [i_0]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */int) arr_3 [i_2]);
                                var_18 = ((/* implicit */unsigned long long int) arr_2 [i_3]);
                                var_19 = ((/* implicit */long long int) arr_7 [i_1 + 1]);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                            {
                                var_20 = (+(var_0));
                                arr_18 [i_0] [i_1 + 1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1354)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (signed char)6))));
                                var_21 = ((/* implicit */long long int) (-(-1621090774)));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_10 [i_0]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (short)-3266)))) : (((int) arr_6 [i_2]))));
                                var_23 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) (short)-3266))))));
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (((((-(var_5))) % (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21))) : (67108856ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
