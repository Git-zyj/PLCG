/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205568
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0 - 1] [i_2 - 1]))) || (((/* implicit */_Bool) (short)-10611))));
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_4] [i_3 - 1] = ((/* implicit */unsigned int) min((((arr_9 [i_0 + 1] [i_2] [i_3] [i_3 + 2] [i_3]) ? (min((arr_7 [i_1] [i_3 + 1] [i_4]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (unsigned short)25898)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) max((arr_7 [i_0] [i_2 - 2] [i_1]), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) max(((unsigned char)112), ((unsigned char)112)))) : (((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_19 = ((unsigned int) arr_2 [i_0 + 2] [i_6 + 1]);
                                var_20 = ((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_5))))) >= (min((arr_10 [i_5] [i_1]), (((/* implicit */unsigned int) (unsigned char)112)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0 + 1] [i_1] [i_2 - 2] [i_2] |= ((/* implicit */unsigned short) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned char) min((arr_16 [i_0 + 1] [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) var_3))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_22 [i_7] [i_7]);
        var_23 = ((/* implicit */long long int) ((arr_22 [i_7] [i_7]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))));
    }
}
