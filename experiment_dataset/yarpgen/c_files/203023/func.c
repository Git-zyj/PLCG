/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203023
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = -1167544301;
                var_12 = ((/* implicit */int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) arr_3 [i_1])))), ((!(((/* implicit */_Bool) arr_1 [i_0]))))))) == (((/* implicit */int) ((-1167544301) <= (1167544309))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_0 [20U]))), (((/* implicit */unsigned long long int) -1666574631470244354LL)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((unsigned char) arr_0 [18]))), (((unsigned short) arr_0 [14LL]))))))))));
                arr_4 [i_1] [i_0] = ((/* implicit */int) (-(min((arr_0 [i_0]), ((-(arr_0 [i_0])))))));
            }
        } 
    } 
}
