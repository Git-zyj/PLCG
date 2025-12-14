/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41974
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
    var_14 = ((/* implicit */_Bool) (~(-1054219603)));
    var_15 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_4)), (1054219602))) == (((/* implicit */int) var_6))));
                var_16 -= ((((/* implicit */_Bool) (-(arr_0 [i_1 + 3])))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (arr_0 [i_1 + 4]) : (arr_0 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(0))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 4; i_4 < 18; i_4 += 1) 
                {
                    arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) -842610746);
                    arr_13 [i_2] [i_2] [5ULL] [i_2] = ((/* implicit */unsigned int) max((16928357397834296150ULL), (arr_10 [i_3 + 1] [i_3] [i_4])));
                    var_18 = ((/* implicit */unsigned int) var_9);
                    arr_14 [i_2] [9U] [i_2] = ((/* implicit */unsigned char) (!(arr_9 [i_3])));
                }
                var_19 += ((/* implicit */int) ((var_1) / (max((arr_6 [i_3 + 1]), (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
}
