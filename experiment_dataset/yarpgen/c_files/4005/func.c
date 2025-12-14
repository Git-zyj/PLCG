/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4005
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
    var_10 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
                var_11 ^= ((/* implicit */long long int) 195020394);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_12 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_2])), (var_1))))));
                            var_13 = ((((/* implicit */_Bool) (short)18618)) ? (-195020396) : (195020376));
                            var_14 ^= ((/* implicit */int) min((((/* implicit */long long int) (+(max((var_7), (((/* implicit */int) arr_0 [i_2]))))))), (max((((arr_0 [i_2]) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) var_6)))), (arr_7 [i_1 + 2] [i_1 + 1] [i_1] [i_2])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((max((arr_6 [i_0] [i_0] [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) (+(arr_1 [(signed char)1] [i_1 + 1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max(((-(var_2))), (((/* implicit */unsigned int) (-((+(195020394))))))));
}
