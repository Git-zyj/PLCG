/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243638
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
    var_20 = max((max((((/* implicit */long long int) ((5116625775074048681LL) > (var_2)))), (min((-5116625775074048682LL), (((/* implicit */long long int) var_19)))))), (((/* implicit */long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_10))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-15155))) / (5116625775074048681LL))) : (min((arr_2 [i_2]), (var_9))))) | (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [(short)0] [i_2]))))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((4294967270U) | (((/* implicit */unsigned int) 690501230))))))) ? (((((/* implicit */int) max(((signed char)-115), (((/* implicit */signed char) (_Bool)1))))) >> (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_12 [i_0] [i_1] [(short)10] [i_1] [i_4])))))) : (var_18)));
                                var_22 -= ((/* implicit */unsigned long long int) (short)326);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */long long int) (unsigned char)254))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (arr_6 [i_0] [i_0] [i_0])))) & (max((min((var_2), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) ((signed char) 7970829316397214500LL)))))));
    }
    var_24 = ((/* implicit */unsigned long long int) (-(min((max((((/* implicit */long long int) -31)), (5116625775074048681LL))), (((/* implicit */long long int) min((var_4), (var_6))))))));
}
