/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40580
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
    var_10 ^= ((/* implicit */unsigned int) var_7);
    var_11 -= ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)49)))), (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min((((-1176238715) % (((((/* implicit */_Bool) arr_5 [11LL] [i_1] [i_1])) ? (arr_1 [i_1]) : (1176238714))))), (((((/* implicit */_Bool) var_2)) ? (((1176238714) | (var_7))) : (arr_1 [i_0 - 2]))))))));
                var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 4] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (1176238714)))), (arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? (-1176238715) : (((/* implicit */int) var_1))));
                var_15 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 1176238714))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [(short)19]))))));
                arr_11 [i_2] [i_3] = ((/* implicit */long long int) 1176238719);
                arr_12 [i_3] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_2]))) <= (arr_10 [i_3 + 1] [i_3 - 1] [(_Bool)1]))), (arr_8 [i_3 + 1] [12ULL]));
            }
        } 
    } 
}
