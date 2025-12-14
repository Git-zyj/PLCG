/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216859
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
    var_13 -= ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) (signed char)15)) ? (var_9) : (((/* implicit */unsigned long long int) var_7))))))));
                            arr_11 [i_0] [i_1 - 2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_7 [i_2] [i_1] [i_1]) + (2147483647))) << (((((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [8])) : (((/* implicit */int) var_3)))) - (4969)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)42619)), (((((/* implicit */int) arr_0 [i_1 - 1])) << (((((/* implicit */int) arr_5 [i_0] [i_1])) - (123)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)0] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)42619)) : (((/* implicit */int) (unsigned char)101))))), (arr_6 [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 - 1])))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((arr_7 [i_2] [i_1] [i_1]) - (2147483647))) + (2147483647))) << (((((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [8])) : (((/* implicit */int) var_3)))) - (4969)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)42619)), (((((/* implicit */int) arr_0 [i_1 - 1])) << (((((/* implicit */int) arr_5 [i_0] [i_1])) - (123)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(_Bool)0] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)42619)) : (((/* implicit */int) (unsigned char)101))))), (arr_6 [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 - 1]))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (signed char)-47);
                var_15 *= ((/* implicit */unsigned char) ((max((((/* implicit */long long int) -494003167)), (9167196791244872804LL))) & (((/* implicit */long long int) min((((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_1 + 1])), ((~(arr_7 [(unsigned char)0] [i_0] [(unsigned char)0]))))))));
                arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5126)) & (-494003167)))) ? (((((/* implicit */_Bool) 7154708799984882436LL)) ? ((~(arr_4 [(short)0] [i_1 + 1] [(short)0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0])) : (((/* implicit */int) var_4)))))));
            }
        } 
    } 
}
