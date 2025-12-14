/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239103
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_0])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [i_0])), (var_10)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_3 + 1] [i_3 + 2] [i_3])) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_3 - 1] [i_3])))) * (((/* implicit */int) var_8))));
                                arr_17 [i_0] [(unsigned char)4] [i_2] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)6)))) - (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) == (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_2 [i_0] [i_2] [i_2])))))))));
                                var_20 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_4])) << (((arr_10 [i_0] [i_1] [9ULL] [i_0] [i_4]) - (3106636886024374814LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_4])) << (((((arr_10 [i_0] [i_1] [9ULL] [i_0] [i_4]) - (3106636886024374814LL))) - (4783295734390877213LL))))));
                                arr_18 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3394181201U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19681))) : (2273589303U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_5);
    var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)12401)) / (((/* implicit */int) (short)19680))));
}
