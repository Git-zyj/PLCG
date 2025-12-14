/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24729
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
    var_17 = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) ((min((var_8), (var_8))) <= (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */int) arr_11 [4U] [i_1] [i_1] [(short)1]);
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                                var_19 = ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_20 -= ((/* implicit */_Bool) (~(arr_8 [i_0] [(_Bool)0] [(unsigned short)0])));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                        var_22 -= ((/* implicit */unsigned int) ((long long int) ((long long int) var_14)));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 + 2]);
                            arr_23 [i_0 - 3] [i_0] [i_1] [i_0 - 3] [i_0 + 1] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_7))) - (((/* implicit */int) arr_15 [i_1] [i_6] [i_2] [i_1] [i_6] [i_6 - 2] [i_1 - 1]))));
                            var_24 -= ((/* implicit */unsigned int) ((signed char) arr_7 [i_0 + 1]));
                            var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6] [i_2 + 1] [(signed char)12] [i_1] [i_1] [i_1 + 2] [i_6])) ? (((/* implicit */int) arr_11 [i_2 - 3] [i_2 - 1] [i_6] [i_2 - 1])) : (((/* implicit */int) (unsigned short)64022))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((unsigned short) min((arr_7 [i_0 + 2]), ((unsigned short)64022))))));
                    var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((var_12), (((/* implicit */int) arr_22 [i_1])))), (((/* implicit */int) arr_18 [i_0 - 3] [i_1] [i_2])))))));
                    var_28 = (unsigned short)1485;
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1499))) : (1681549398U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_8))))))));
    var_30 = ((/* implicit */long long int) ((((long long int) ((_Bool) var_15))) < (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
