/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28772
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
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) ^ (((/* implicit */int) var_13))))) ? (min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) var_1))))));
    var_16 |= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) / (arr_1 [i_0] [9])))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) & (arr_1 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] = max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]))))), (arr_2 [i_3] [i_0]));
                            arr_15 [i_0] [(unsigned short)11] = ((/* implicit */int) ((unsigned short) min((arr_5 [i_0] [i_3 - 3] [i_2]), (((/* implicit */int) arr_8 [i_0] [i_3 + 1] [i_3 - 2] [i_3 - 2])))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (arr_0 [i_0])))))), (arr_3 [i_2] [i_3]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(-1430805065)))))) ? (((/* implicit */long long int) arr_1 [i_0] [i_1])) : (min((-703492119459158772LL), (((/* implicit */long long int) (unsigned short)61740))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12))))))) ? (((int) var_1)) : ((((_Bool)1) ? ((+(((/* implicit */int) (unsigned char)98)))) : (((/* implicit */int) (_Bool)0))))));
}
