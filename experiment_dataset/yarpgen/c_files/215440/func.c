/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215440
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
    var_17 = ((/* implicit */long long int) min((var_17), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-16840))))) : (((((/* implicit */long long int) 1252503880)) + (var_14))))), (((/* implicit */long long int) var_16))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) min((var_6), (((/* implicit */int) (short)-2127))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) ((var_11) > (((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)3))))) || (((((/* implicit */int) (unsigned char)13)) >= (1252503896))))))));
                            var_19 = ((/* implicit */int) min((((/* implicit */long long int) ((signed char) max((var_5), (var_8))))), (var_14)));
                            var_20 += ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (var_14) : (-361123734651299752LL))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) -361123734651299750LL))))))) : (((/* implicit */int) max((arr_1 [i_3 + 2]), (((/* implicit */unsigned short) (signed char)123))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
