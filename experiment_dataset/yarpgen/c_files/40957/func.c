/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40957
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2395326670U)))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_11))))) : (((((/* implicit */_Bool) var_6)) ? (min((1771965204059470804ULL), (((/* implicit */unsigned long long int) (unsigned short)25845)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(556091234U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (1185663562U) : (8U))))));
                                var_15 ^= ((/* implicit */unsigned short) ((var_7) <= (((/* implicit */unsigned long long int) min((((915212926U) << (((6186369487813108382ULL) - (6186369487813108364ULL))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9572))) * (var_10))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(3961865697U)))), ((~(18446744073709551615ULL)))));
                    arr_13 [i_0] [i_1] [7U] [5U] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 4996432873513080185ULL))) << (((/* implicit */int) ((arr_12 [(unsigned short)1] [i_1 - 1] [(unsigned short)8]) > (((/* implicit */unsigned long long int) 31457280U)))))));
                    var_17 = ((/* implicit */unsigned int) 11225542358836653869ULL);
                }
            } 
        } 
    } 
}
