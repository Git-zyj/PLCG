/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27669
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
    var_17 = ((/* implicit */int) var_9);
    var_18 = ((/* implicit */signed char) (_Bool)1);
    var_19 = ((/* implicit */short) (!(var_12)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_0 + 1] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2] [i_0 - 1])))), ((!(((((/* implicit */_Bool) (unsigned short)1984)) || (((/* implicit */_Bool) (short)31448))))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_14))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_11 [i_2] [i_0 - 1] = (!(((/* implicit */_Bool) arr_0 [i_2])));
            arr_12 [i_0 - 2] = ((/* implicit */signed char) var_13);
            var_21 = ((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2]);
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23680))) * (314721345681166137ULL))))));
            var_23 ^= ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
        }
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_10))));
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_28 [i_7 + 1] [i_5] [i_5] [i_4] [i_3 + 1] = arr_23 [i_3 + 1] [i_4] [i_5];
                                arr_29 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16405)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) ((18132022728028385481ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))))), (arr_16 [i_3 - 1] [i_3 - 1])))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) max((var_25), (max((var_5), ((unsigned short)63547)))));
                    var_26 = ((/* implicit */unsigned long long int) var_3);
                    var_27 = ((/* implicit */signed char) arr_14 [i_3]);
                }
            } 
        } 
    } 
}
