/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189791
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
    var_18 -= ((/* implicit */unsigned short) 1210538661447849018LL);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_3 [i_0]))))));
                    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((long long int) arr_5 [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_2]), (var_13))))) : (arr_5 [i_0] [(signed char)11])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_1 - 2]);
                    arr_10 [i_2] [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0]));
                }
                for (int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                {
                    var_21 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_7))))));
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_11 [i_0 + 3] [i_1 - 2] [i_1 - 2]), (((/* implicit */int) arr_13 [i_0] [i_0] [i_1 - 1])))))));
                }
                var_23 = var_12;
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_7)))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
}
