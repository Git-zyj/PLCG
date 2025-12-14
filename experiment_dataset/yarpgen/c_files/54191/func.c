/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54191
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
    for (int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_2] [1ULL] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) arr_9 [i_3 - 2] [i_0 - 1]))), (min((((((/* implicit */int) var_2)) + (((/* implicit */int) (unsigned char)126)))), ((+(((/* implicit */int) (_Bool)0))))))));
                            arr_11 [i_0] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0 - 1] [10ULL] [i_3 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_3 - 2] [i_3 - 2] [i_0 + 3])) : (((/* implicit */int) arr_5 [i_3] [i_3] [i_3 - 3] [i_0 + 3]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((3940307790U) ^ (arr_1 [i_0 + 2] [i_0 - 1])))) && (((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_0 - 2]), (arr_1 [i_0 + 3] [i_0 - 2]))))));
                                arr_21 [i_0 - 1] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */int) var_4);
                                arr_22 [i_0 - 1] [7] [i_4] [(signed char)4] [i_6] [i_5] = min((arr_16 [i_0 + 3] [i_0 - 3] [i_0 + 2] [i_0 - 1]), (max((((/* implicit */int) (unsigned short)60224)), (-1125585294))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_0] = var_1;
                arr_24 [i_1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) arr_18 [i_0 - 2] [(unsigned short)2] [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 1])) : (var_0))));
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+((~(arr_3 [i_0] [9ULL] [i_0]))))) <= (((/* implicit */long long int) var_12))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_10);
    var_20 = ((/* implicit */unsigned long long int) 2147483641);
}
