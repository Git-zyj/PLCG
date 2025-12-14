/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192772
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
    var_20 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned char) var_2);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_21 = ((/* implicit */short) min(((((-(3653935214U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned int) var_4))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((min((var_18), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) <= (3810152024003984538LL)))))), (((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_2] [i_0])))))));
                    arr_12 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_11 [i_2] [i_1] [i_0])))), (((int) (unsigned short)44557))))) ? (((/* implicit */long long int) 4294967295U)) : (((((/* implicit */_Bool) 4294967295U)) ? (var_19) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)0)))))))));
                    arr_13 [i_0] [i_0] [i_2] [(short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44557)) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)44557)))) : (((/* implicit */int) (unsigned short)44557))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((_Bool) ((unsigned long long int) (short)27522))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((int) min((((((/* implicit */_Bool) -3810152024003984539LL)) ? (((/* implicit */int) (unsigned short)44557)) : (((/* implicit */int) arr_1 [i_3] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_15 [i_0] [i_1] [i_0]))))))))));
                    arr_17 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_0]))));
                    var_25 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((-3810152024003984524LL) ^ (3458764513820540928LL)))) ? (-3458764513820540928LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_18)))))))));
                }
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (min((((((/* implicit */_Bool) (unsigned char)230)) ? (3443495685U) : (851471611U))), (1030801367U))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) min((var_7), (((/* implicit */unsigned long long int) var_3))));
    var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_11)));
    var_29 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384)))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_19)))))));
}
