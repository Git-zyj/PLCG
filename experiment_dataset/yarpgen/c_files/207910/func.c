/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207910
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
    var_10 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (+(799198519)))) <= (min((((/* implicit */unsigned long long int) (unsigned short)65434)), (var_9))))), (((((/* implicit */unsigned long long int) 7340032U)) == (var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_11 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1]))))), (((((/* implicit */_Bool) 7340032U)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_9)))));
                            var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0] [i_3]))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)29240))))), (min((var_2), (((/* implicit */unsigned long long int) var_7))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) max((((long long int) (!(((/* implicit */_Bool) 491637682337344080LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)29240)), (arr_4 [(short)9] [i_1])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (338739378308312092ULL)))))))));
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0] [i_0] [0U]))));
                var_14 ^= ((/* implicit */unsigned long long int) ((var_5) == (max((((long long int) arr_9 [6LL] [2] [i_1] [i_1])), (((/* implicit */long long int) min((var_1), (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
            }
        } 
    } 
}
