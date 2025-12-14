/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231996
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */signed char) max((((/* implicit */int) arr_5 [0] [0] [i_2])), (min((((var_16) & (((/* implicit */int) var_1)))), (((/* implicit */int) arr_2 [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [(unsigned short)7] [(signed char)2] [i_2] = min((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_3 [i_0] [i_2]))))))), (((((/* implicit */_Bool) arr_1 [i_1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32743))) : (91396921U))));
                        var_19 = ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_6)) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) << (((((/* implicit */int) var_12)) - (10718))))) << (((/* implicit */int) var_15)));
                        var_20 = ((signed char) min((((/* implicit */unsigned short) ((signed char) var_14))), (((unsigned short) var_6))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) var_2)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) 4203570353U);
                arr_19 [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_16 [i_4] [i_4] [i_4])))), (((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))));
                arr_20 [i_4] |= ((/* implicit */_Bool) (short)-32740);
                arr_21 [i_4] [i_5] = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (signed char)5))));
}
