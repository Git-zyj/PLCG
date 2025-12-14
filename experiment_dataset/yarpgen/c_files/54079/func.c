/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54079
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
    var_15 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned char) var_10))))))), ((((-(((/* implicit */int) var_1)))) == (((/* implicit */int) (short)-332))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = (-(((/* implicit */int) ((signed char) arr_1 [i_0] [i_1]))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_5))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_1])) == (((/* implicit */int) min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)84))))) ? (((/* implicit */long long int) ((-24624370) ^ (((/* implicit */int) arr_4 [i_2] [i_3 - 1]))))) : (((((/* implicit */long long int) -24624392)) ^ (arr_14 [i_2]))))))))));
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) <= (max((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 1]))))), (((/* implicit */long long int) (!(var_1))))))));
                var_20 &= ((/* implicit */_Bool) (~(((int) arr_14 [i_2]))));
            }
        } 
    } 
}
