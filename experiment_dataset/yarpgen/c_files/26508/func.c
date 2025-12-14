/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26508
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7537418328278450438LL)) ? (((((/* implicit */_Bool) arr_2 [12])) ? (9981506059358245263ULL) : (((/* implicit */unsigned long long int) -882373689)))) : (((/* implicit */unsigned long long int) -398634819))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)25840), (((/* implicit */short) (unsigned char)191)))))) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [(signed char)18] [0]))) - (var_6))), (((/* implicit */unsigned long long int) (unsigned char)242)))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 4; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)149)) ? (min((((/* implicit */long long int) (signed char)-10)), (3433354298810528273LL))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 3] [i_2] [i_3 - 2] [i_4])) ? (var_5) : (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_3 + 1] [i_2 - 2] [i_1 + 4])) ? (((/* implicit */int) arr_9 [i_4] [(unsigned char)4] [i_3 + 2] [i_2 - 1] [i_1 - 2])) : (((/* implicit */int) (unsigned char)12)))))));
                                var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_2 + 1] [(unsigned char)8] [i_2 + 1] [i_2 - 3] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (12119247585567572755ULL))), (((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)993))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
            }
        } 
    } 
    var_15 = ((/* implicit */int) (~(var_8)));
}
