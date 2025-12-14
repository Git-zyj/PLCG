/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191904
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_1])))))));
            /* LoopSeq 2 */
            for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                arr_8 [i_0] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [2] [2]);
                var_21 = ((unsigned int) arr_0 [i_2 - 1]);
            }
            for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((unsigned short) arr_4 [i_3 + 4] [i_0 + 2]));
                /* LoopSeq 1 */
                for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    arr_13 [i_0] [17ULL] [i_1] [i_3 + 1] [17ULL] |= ((/* implicit */short) arr_2 [i_0 + 2]);
                    var_23 = ((/* implicit */short) ((int) var_14));
                }
                arr_14 [i_0] [i_1] [i_3] = ((/* implicit */signed char) arr_9 [i_3 + 4] [i_1] [i_1 - 1] [i_0]);
                var_24 *= ((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13333848769711503307ULL))))) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3])));
            }
        }
        var_25 |= ((/* implicit */long long int) ((int) arr_0 [i_0 + 2]));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_18 [i_5]))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (arr_18 [i_5]) : (1385855725)));
        arr_20 [i_5] = ((/* implicit */long long int) arr_17 [i_5] [i_5 + 2]);
    }
    for (long long int i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
    {
        var_27 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (arr_22 [i_6] [i_6 - 2]))))));
        arr_23 [16U] = ((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6 - 1] [i_6]);
    }
    for (long long int i_7 = 3; i_7 < 18; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7 + 4] [(_Bool)1] |= ((/* implicit */unsigned char) ((min((arr_16 [i_7] [i_7 - 3]), (arr_16 [i_7] [i_7 + 1]))) != (((/* implicit */long long int) min((arr_11 [i_7 - 2] [i_7 + 4] [i_7 + 2] [i_7 - 3]), (((/* implicit */unsigned int) var_15)))))));
        arr_27 [i_7 + 2] = ((/* implicit */unsigned int) ((var_7) >= (((/* implicit */long long int) max((-1219817899), (((/* implicit */int) arr_21 [i_7 - 2] [12])))))));
    }
}
