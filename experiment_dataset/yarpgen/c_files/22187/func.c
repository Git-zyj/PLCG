/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22187
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
    var_14 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21203))) + (14831209084652816733ULL)))) ? (var_2) : (var_1))) + (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)13263))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18855))) - (var_3))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 15740674513784104254ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)29160)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 14ULL)))))))));
                            arr_11 [i_1] [i_0] [3ULL] [i_3] [i_1] [i_3] = ((((/* implicit */_Bool) 15187110955977118057ULL)) ? (11342286071486406427ULL) : (3259633117732433559ULL));
                            arr_12 [i_0] [i_1] [i_3] |= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144))) >= (3259633117732433565ULL))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
