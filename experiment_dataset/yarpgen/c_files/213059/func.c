/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213059
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((6274214883161723939LL) > (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))))) > (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -6274214883161723940LL)) >= (var_10)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(6274214883161723937LL)))) * (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 - 1])))));
                                arr_17 [(signed char)5] [i_2] [9] [i_2] &= ((/* implicit */unsigned int) arr_6 [i_2]);
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */signed char) (~(((unsigned long long int) arr_3 [i_0]))));
                    arr_18 [i_2] [i_1] |= ((/* implicit */long long int) arr_4 [i_0] [i_1 + 1] [i_2]);
                    arr_19 [i_1 - 1] [i_2] = ((/* implicit */unsigned short) max((((((4294967295U) >= (0U))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (12543538581417345868ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_2])) / (arr_5 [(unsigned short)13] [4LL] [i_2 + 1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 2]))) % (var_1))))))));
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 6274214883161723944LL)) ? (-6274214883161723934LL) : (6274214883161723946LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8086))) != (6274214883161723946LL))))))) != (((/* implicit */long long int) ((int) ((unsigned short) 222498819))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_8), (((/* implicit */long long int) ((unsigned char) ((_Bool) 0ULL))))));
    var_16 &= ((/* implicit */unsigned int) ((18446744073709551609ULL) * (17536194526358287197ULL)));
}
