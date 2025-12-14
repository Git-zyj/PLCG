/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49184
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((max((((/* implicit */long long int) var_9)), (var_11))), (((/* implicit */long long int) var_12)))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1252388736417941669LL)) - (10423919002388490733ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */signed char) min((min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)0)), (var_7)))), (min((arr_0 [13ULL]), (((/* implicit */long long int) (signed char)124)))))), (min((1252388736417941668LL), (arr_0 [i_1 + 3])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) || (((/* implicit */_Bool) var_4))))), (min((var_9), (var_3))))))));
                            arr_10 [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_5 [i_3 - 1] [(unsigned char)21] [i_1])), (var_11))), (((/* implicit */long long int) min(((short)-27959), (arr_1 [i_1 + 3]))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */long long int) min((((/* implicit */int) max((var_0), (var_0)))), (min((((/* implicit */int) var_12)), (1378648125)))));
            }
        } 
    } 
}
