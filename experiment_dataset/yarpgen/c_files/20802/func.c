/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20802
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((17390625969042446009ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 2596344099308835343LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1 + 4] [i_1]))) : (-2596344099308835344LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned short)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) min((arr_3 [i_1]), (((/* implicit */long long int) 4204234598U))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 2] [(short)14] [i_0 + 1])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))))));
                    arr_7 [i_2] [i_1 - 2] [(unsigned char)4] [i_0] = ((/* implicit */long long int) arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((long long int) (unsigned char)245)) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)34476))))))))));
                                var_21 &= ((/* implicit */unsigned int) (signed char)(-127 - 1));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */int) (signed char)76)), (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (unsigned char)55)))))))));
                                var_23 = (short)-32766;
                            }
                        } 
                    } 
                    var_24 = 90732698U;
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_5);
    var_26 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (min((90732684U), (((/* implicit */unsigned int) (unsigned short)53248))))))));
}
