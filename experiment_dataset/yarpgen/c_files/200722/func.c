/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200722
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
    var_19 = ((/* implicit */_Bool) var_8);
    var_20 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((min((arr_9 [i_3 - 1] [i_3] [i_3] [14] [i_3]), (arr_9 [i_3 - 1] [i_3] [i_3] [i_3] [i_3]))) == ((-(arr_9 [i_3 - 1] [21] [i_3 - 1] [i_3 - 1] [i_3])))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 452019576)) ? ((-(arr_8 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 103492705))))));
                        }
                    } 
                } 
                arr_12 [i_0] |= ((/* implicit */unsigned short) max(((signed char)127), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) -8372571893476794066LL)) == (arr_7 [i_0]))))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0]))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                var_24 = ((unsigned int) (signed char)108);
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_17)))))) ? (var_7) : (((/* implicit */int) var_3)))))));
}
