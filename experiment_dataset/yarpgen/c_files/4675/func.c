/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4675
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2 - 1] [(_Bool)1] [i_1] [(signed char)7] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_5))))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (3238500309U) : (1056466962U))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((var_3), ((~(var_3)))));
                        arr_11 [i_0] [(unsigned short)12] = ((/* implicit */unsigned int) (signed char)-104);
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((min((arr_2 [i_0] [i_0] [i_2 - 1]), (((/* implicit */unsigned int) (short)-22565)))), (((/* implicit */unsigned int) ((unsigned short) 1056466987U))))))));
                        arr_14 [i_0] [(unsigned short)2] [i_1] [i_2 - 1] [12] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_6 [i_4]))))));
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0] [i_5] = ((/* implicit */short) (~((~(((/* implicit */int) var_1))))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 1056467016U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-14247)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        arr_18 [i_5] [11LL] [(signed char)3] [(signed char)9] [7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1]))))));
                    }
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
    var_16 = ((/* implicit */int) ((9223372036854775807LL) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_5))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-106)), ((unsigned short)59285)))))))));
}
