/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239628
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
    var_16 += ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)116))) != (((int) (signed char)-103)))) ? (min((((((/* implicit */_Bool) -5605220254538679722LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)5] [(signed char)6]))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-117)) - (((/* implicit */int) (signed char)46))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)52429)) : (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) ((_Bool) arr_2 [i_0 + 2] [i_0 + 3] [i_0]))))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((~(min((((/* implicit */unsigned long long int) 2798977777U)), (var_14))))) + (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0] [i_1]))))))));
                arr_5 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_1])))))));
                arr_6 [(signed char)1] [i_1] [i_1] = ((/* implicit */short) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (-(((arr_12 [i_0 + 2] [i_1]) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_7 [i_0 + 2] [8ULL] [i_2])))))))));
                            var_19 += ((/* implicit */signed char) var_11);
                            arr_13 [i_3] [4ULL] [i_1] [4ULL] = ((/* implicit */unsigned long long int) max(((short)8371), (((/* implicit */short) (signed char)95))));
                        }
                    } 
                } 
            }
        } 
    } 
}
