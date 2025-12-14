/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52656
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_7)))) ? ((+(min((arr_5 [(signed char)7] [i_1 - 1] [i_1 - 2]), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_11))));
                var_19 = ((/* implicit */unsigned long long int) var_6);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (arr_4 [i_0] [i_0] [i_1 + 1]))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_10 [8U] = ((/* implicit */unsigned long long int) (unsigned char)0);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (arr_5 [i_2] [i_2] [i_2])));
        var_22 += ((/* implicit */unsigned long long int) (-(min((max((arr_8 [i_2] [i_2]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_12))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((min((arr_5 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_4)))) >> (((max((arr_5 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_2 [i_2])))) - (12875107050880777370ULL)))));
    }
}
