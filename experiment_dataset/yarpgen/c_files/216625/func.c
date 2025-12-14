/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216625
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] = arr_2 [i_1] [i_1];
                            arr_12 [i_0] = (~(((((/* implicit */_Bool) (unsigned short)9843)) ? (7067229947098607283ULL) : (((/* implicit */unsigned long long int) 4026531840U)))));
                            var_12 = ((/* implicit */signed char) arr_0 [i_1]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_13 = ((/* implicit */unsigned long long int) max((0U), (min((268435451U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_4] [i_4] [i_0])) ? (((/* implicit */int) (short)-6645)) : (((/* implicit */int) (signed char)15)))))))));
                    var_14 = ((/* implicit */unsigned short) max((((/* implicit */int) (short)-4260)), (((((/* implicit */_Bool) 15702282418354640766ULL)) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)152))))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (arr_9 [i_4])));
                }
            }
        } 
    } 
    var_16 -= max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))))));
}
