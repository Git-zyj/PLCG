/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33207
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_2 [i_1 + 2] [i_0] [i_0]))) << (((2451199136U) - (2451199122U)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((1309258724), (((/* implicit */int) (unsigned char)213))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((1843768159U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-9644))))))));
                            var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2451199137U)) || (((/* implicit */_Bool) 1843768160U))))), (min((((/* implicit */unsigned int) (short)9644)), (3775107862U)))));
                            arr_14 [i_3] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)11796), (((/* implicit */unsigned short) (short)-9645)))))) : (arr_7 [i_3 + 4] [i_2 + 2])))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) (short)-9644);
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1843768176U))));
    var_20 = ((/* implicit */signed char) var_0);
}
