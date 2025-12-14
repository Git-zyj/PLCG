/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223218
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63159)) < (-1375185942)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) var_9);
                            var_18 = arr_3 [10] [i_1] [3];
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned short) (signed char)28)), ((unsigned short)8191)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) var_8);
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_1 - 3] [i_0] [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((long long int) (short)28642))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)28642), (((/* implicit */short) var_1)))))) : (((unsigned long long int) var_1)))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((min((((/* implicit */unsigned int) arr_12 [i_4 + 3] [i_4 + 3])), (2929893011U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28643)) ? (((/* implicit */int) arr_2 [8ULL] [i_0])) : (201186013)))))))));
                            arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)2377)) ? (((/* implicit */unsigned long long int) arr_14 [(signed char)0] [i_5 - 1] [i_0] [i_5])) : (var_7))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [0])), (2147483647))))))) ? (((/* implicit */int) ((short) (-(arr_10 [(signed char)6] [i_4 + 3] [i_1]))))) : (((/* implicit */int) ((unsigned short) ((long long int) var_14))))));
                            var_22 = (-((-(min((((/* implicit */int) var_15)), (-201186014))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
