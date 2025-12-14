/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204436
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */long long int) var_9);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_1] [i_1 - 1] [i_3] [1LL] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_10)))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12))) : (((/* implicit */unsigned long long int) max((arr_8 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 4] [i_1 - 2] [i_1 - 4]), (((var_3) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) arr_5 [i_1])))))))));
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1]))));
                        var_15 = ((/* implicit */unsigned long long int) var_7);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) arr_14 [i_1 - 4] [i_1 - 4] [i_1] [i_1]);
                        arr_17 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(((unsigned long long int) max((var_8), (var_8))))));
                    }
                    arr_18 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_3), (arr_2 [i_1 - 2])))), (((arr_15 [i_1] [i_1]) / (arr_15 [i_1] [i_1])))));
                    var_17 = ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
    /* LoopSeq 1 */
    for (unsigned short i_5 = 4; i_5 < 24; i_5 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 - 2] [i_5] [i_5])) ? (((/* implicit */int) arr_9 [i_5 - 3] [i_5 - 2] [i_5] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_5 - 4] [i_5 - 4] [i_5] [i_5]))))) - (((((/* implicit */unsigned int) var_11)) % (arr_15 [i_5] [i_5 - 3])))));
        arr_22 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_13) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_3)))))))) / (max((max((arr_4 [i_5 - 2]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_6))))));
        var_20 = ((/* implicit */unsigned short) ((var_1) >> (((var_13) - (5123459340308690282LL)))));
    }
}
