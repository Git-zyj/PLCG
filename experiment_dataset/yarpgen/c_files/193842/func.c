/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193842
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
    var_11 *= ((/* implicit */int) var_7);
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */long long int) max(((~(((((/* implicit */int) var_0)) & (-1119359917))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))))))));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 6799259286593069888LL)) ? (((/* implicit */unsigned long long int) -1119359911)) : (10787002403315497709ULL)));
                                arr_15 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) (-(1119359916)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((int) var_3))))) : (((((var_7) ? (-184305546633246206LL) : (((/* implicit */long long int) var_10)))) / (((var_4) ? (184305546633246221LL) : (((/* implicit */long long int) -1119359941)))))));
                                var_13 = ((/* implicit */signed char) ((var_7) ? (arr_3 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7659741670394053925ULL))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)165)), (var_8))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? ((~(((/* implicit */int) arr_1 [i_0 + 3])))) : (((/* implicit */int) var_5))));
                var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_0 - 1])) ? (arr_9 [i_0] [i_0] [i_1] [i_0 - 1]) : (arr_9 [i_0] [i_0] [i_1] [i_0 + 2]))), ((~(arr_9 [i_0] [i_0] [i_1] [i_0 + 3])))));
                arr_17 [i_1] = ((/* implicit */unsigned long long int) (short)-14280);
            }
        } 
    } 
}
