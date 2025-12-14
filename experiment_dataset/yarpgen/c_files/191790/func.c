/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191790
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((var_6), (var_11))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_2))) - (((/* implicit */int) arr_2 [15] [i_0]))))) : (((((unsigned int) var_8)) * (((/* implicit */unsigned int) ((int) var_4)))))));
                    var_13 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (max((var_4), (((/* implicit */unsigned long long int) var_9)))) : (((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) -3106402744800773247LL))), (((long long int) var_7)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 4) 
    {
        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            {
                var_14 = (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_9 [i_3])), (var_5)))) && (((/* implicit */_Bool) var_9))))));
                var_15 = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            {
                arr_19 [i_5] [i_5] = ((/* implicit */short) ((_Bool) ((min((var_3), (((/* implicit */long long int) var_6)))) >> (((var_4) - (8546961308438688188ULL))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) * (((((/* implicit */_Bool) arr_15 [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (10636615044066740206ULL)))));
            }
        } 
    } 
}
