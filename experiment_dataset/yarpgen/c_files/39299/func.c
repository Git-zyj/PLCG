/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39299
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
    var_10 = min((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) + (var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (~(((unsigned int) arr_3 [i_0] [i_0] [i_0]))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)117))));
                var_11 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_0 [8LL])))) ? (((/* implicit */int) ((_Bool) var_1))) : (((((/* implicit */_Bool) max((arr_0 [14ULL]), (((/* implicit */long long int) (signed char)-118))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_0 - 1]) ? (((((/* implicit */_Bool) arr_11 [12U] [i_0])) ? (((/* implicit */long long int) arr_10 [2ULL] [2ULL] [i_0])) : (var_7))) : (((/* implicit */long long int) (+(var_9)))))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((signed char) (+(((unsigned long long int) var_6)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
}
