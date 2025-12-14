/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41506
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [(unsigned short)14] [(unsigned short)14] [i_1] = (-((-(min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) (_Bool)1)))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 3]))) - (-1LL)))) ? (((/* implicit */int) min(((_Bool)1), (arr_4 [i_0 - 1])))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_4 [i_0 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_2])), (var_1)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)61))))) : (arr_12 [10] [10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1459402089U))))) : (-1)));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 27189583))));
                arr_13 [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_3] [i_2 + 4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1LL)))))) : (((((/* implicit */_Bool) 2835565206U)) ? (var_6) : (arr_10 [i_3] [i_2 + 3])))));
                arr_14 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_12 [i_2 - 2] [i_2 + 3]) | (((/* implicit */long long int) 1459402089U))))), (((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */unsigned long long int) var_15)), (arr_6 [i_2 + 3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-25206)) / (((/* implicit */int) var_3)))))))));
                var_22 = ((/* implicit */_Bool) min((arr_8 [i_2] [i_2 + 1]), (((/* implicit */int) var_3))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (0LL) : (((74404161873183120LL) >> (((((/* implicit */int) var_3)) - (28280))))))))));
}
