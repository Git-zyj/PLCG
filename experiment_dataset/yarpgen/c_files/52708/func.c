/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52708
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_3))));
    var_11 = (~(((/* implicit */int) var_7)));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1860286176)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17614489766176490650ULL)))) ? ((-(var_8))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) (unsigned short)22405)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2182450241354430864ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_1])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_1]))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1])) ? (arr_4 [i_1 - 2] [i_1 + 1] [i_1]) : (arr_4 [i_1 - 1] [i_1 - 3] [i_1])))));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
                {
                    var_15 |= ((/* implicit */int) arr_5 [i_0] [i_0]);
                    arr_8 [i_0] [i_0] [i_0] |= (-(((((/* implicit */_Bool) arr_2 [9LL] [i_1 + 1] [i_0])) ? (arr_4 [i_0] [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 3] [i_1 + 1] [i_1]))))));
                }
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)6]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 3]))))) : (((arr_0 [i_1 - 2]) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 - 2])))))))));
                    var_17 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_4] [i_4]))))) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 3])) : ((+(arr_6 [i_1] [i_1] [i_1] [(short)3])))))));
                }
                var_18 = ((/* implicit */_Bool) (~((+(((arr_9 [i_0] [(short)2] [(short)2] [i_1]) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
}
