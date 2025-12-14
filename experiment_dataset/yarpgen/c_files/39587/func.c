/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39587
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])) || (((/* implicit */_Bool) (unsigned char)3)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [19U])) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) -1))))));
                            arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((max((((arr_2 [i_3] [(signed char)10] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [21ULL] [i_1] [i_1] [2LL])) || (((/* implicit */_Bool) arr_0 [i_3 - 2] [i_1]))))))) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((var_5), (var_6)))), (((((/* implicit */_Bool) arr_0 [(unsigned char)22] [(unsigned char)22])) ? (((/* implicit */unsigned int) var_6)) : (713901004U))))))));
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (unsigned char)85))));
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (~(arr_2 [i_0] [i_3 - 1] [i_2]))))));
                        }
                    } 
                } 
                arr_12 [i_1] = max((((/* implicit */unsigned long long int) var_10)), ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_7) : (255ULL))))));
            }
        } 
    } 
    var_14 = (unsigned char)72;
}
