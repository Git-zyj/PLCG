/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3474
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
    var_20 = ((/* implicit */signed char) max((min((var_0), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned char) var_6))))))), (var_0)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) max((arr_0 [i_0 + 1] [i_0]), (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1])))));
                var_22 &= ((/* implicit */int) ((short) ((signed char) arr_3 [i_0 + 1])));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((min((((long long int) var_8)), (((/* implicit */long long int) var_8)))), (max((min((((/* implicit */long long int) var_7)), (var_19))), (max((var_17), (var_19)))))));
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_5] [i_5 - 1] [i_6] [i_6] [i_6 + 1] [i_6 + 1])) ? (arr_12 [i_2 - 1] [(short)6] [i_6 - 2] [i_6 + 1] [i_6 + 1]) : (arr_12 [i_2 + 2] [(short)22] [i_6 - 1] [i_6 - 1] [i_6 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_9 [(unsigned char)16])), (arr_15 [i_3] [i_5 - 1] [i_5 - 1] [i_6] [i_6 - 1] [(signed char)20])))))))));
                                var_25 &= ((/* implicit */unsigned char) ((int) max((((((/* implicit */_Bool) arr_13 [i_3] [i_5] [i_3] [i_2 + 1])) ? (arr_15 [i_6 + 1] [i_5] [i_4] [i_3] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [22ULL]))))), (((/* implicit */long long int) min((((/* implicit */int) arr_9 [(_Bool)1])), (arr_5 [(_Bool)1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned char) arr_13 [i_8] [i_7] [(signed char)16] [i_2 - 1]);
                            arr_20 [i_2 - 1] [i_3] [i_7] [(unsigned short)10] &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_2 - 1])) ? (((/* implicit */int) arr_9 [4LL])) : (arr_5 [i_2 - 1]))), (((/* implicit */int) ((short) arr_5 [i_7 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
