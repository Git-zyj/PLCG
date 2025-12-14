/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48606
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
    var_20 = ((/* implicit */long long int) max(((signed char)-68), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned long long int) max((-1419485750579897971LL), (((/* implicit */long long int) -2004709299))))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((arr_2 [i_1]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_3]))) >= (((var_19) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [(unsigned short)0] [i_3])))))))))))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_18)));
                            arr_10 [i_3] [i_1] [i_2] [i_3 + 1] = ((/* implicit */long long int) arr_5 [i_2] [i_2] [i_2]);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))), ((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)62744), ((unsigned short)45716))))) & ((~(arr_9 [i_0] [i_0] [i_1] [i_1] [i_0])))))) : (var_18)));
                var_24 = min((max((var_6), (var_17))), (((/* implicit */signed char) ((((/* implicit */int) ((var_19) <= (((/* implicit */long long int) ((/* implicit */int) (short)-30845)))))) <= (((((/* implicit */int) arr_3 [3LL] [i_1] [(signed char)19])) >> (((var_4) + (5071468658393475299LL)))))))));
                arr_12 [5LL] = ((/* implicit */long long int) (short)8101);
            }
        } 
    } 
}
