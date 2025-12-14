/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229893
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 127LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (((((/* implicit */_Bool) -127LL)) ? ((-(2689553967U))) : (1605413328U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) (~(min(((-(((/* implicit */int) (signed char)119)))), (((/* implicit */int) (unsigned short)1536))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) 125LL)), (arr_9 [i_0] [i_2] [i_2] [i_3] [i_4 - 3] [i_2]))) : (((/* implicit */unsigned long long int) ((int) (signed char)103))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_3 - 1])))))));
                                var_21 = ((/* implicit */signed char) (+(max((var_17), (((/* implicit */unsigned long long int) var_11))))));
                                var_22 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (signed char)114)), (-126LL))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_1] [i_3])) : (((/* implicit */int) (unsigned short)40548)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)1530)), (0)))) - (var_12)))));
                                arr_17 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) arr_16 [i_6] [i_5] [i_5] [i_1 + 1] [i_0])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_12 [i_5]))))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (short)-31324)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (short)-16384))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (unsigned short)59259);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            {
                var_24 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -131LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-24076))))), ((-(1605413328U))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_8] [i_7])))))));
                var_25 |= ((/* implicit */short) 131LL);
                arr_26 [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7])))))) <= (((((var_7) + (9223372036854775807LL))) >> (((var_11) - (2452518710U))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_7))));
    var_27 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_3)), (max((((/* implicit */unsigned int) var_9)), (var_0))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)7734)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (var_8))))))));
}
