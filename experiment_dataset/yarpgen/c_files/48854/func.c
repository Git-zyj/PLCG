/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48854
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(10246530403024786309ULL)))) ? (((/* implicit */int) ((var_17) != (((/* implicit */long long int) 2548975666U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) <= (((/* implicit */int) var_4))))) : (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_17)))) ? (3057205537U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2126492655)) <= ((~(var_3)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) != (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (206513161U)))));
                                var_22 = ((/* implicit */unsigned int) ((var_9) | (((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((unsigned long long int) var_15)) : (max((8200213670684765292ULL), (((/* implicit */unsigned long long int) 2126492661))))))));
                                arr_15 [i_2] [i_1] = ((9868342307454652537ULL) * (((/* implicit */unsigned long long int) ((long long int) 2524145689U))));
                                var_23 = ((signed char) (-(var_14)));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4611686017890516992ULL)) ? (4294967295U) : (((/* implicit */unsigned int) -464565622))))) : (min((2026584148070995784ULL), (((/* implicit */unsigned long long int) (unsigned char)4))))))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_2 + 1] [i_1 - 3]) : (((/* implicit */unsigned int) 1241417483))))) == (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1])) ? (2026584148070995764ULL) : (arr_13 [i_2] [1U]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-24627)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((4611686017890517000ULL), (((/* implicit */unsigned long long int) var_15)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43266)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) (-2147483647 - 1)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_23 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) ((short) 18446744073709551602ULL))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4802)) || (((/* implicit */_Bool) var_9)))))))) || (((/* implicit */_Bool) (unsigned short)756))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((min((((/* implicit */unsigned int) -2126492682)), (arr_9 [i_7] [i_7] [i_6] [i_7] [i_7]))), (((/* implicit */unsigned int) (+(2147483645)))))))));
                    var_27 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (2458706677359831607ULL)))));
                }
            } 
        } 
    } 
}
