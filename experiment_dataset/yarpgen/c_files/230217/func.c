/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230217
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
    var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (min((var_15), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)));
    var_17 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = (-(var_11));
                    var_19 = arr_1 [i_2 - 2] [i_2 - 2];
                }
            } 
        } 
        var_20 = arr_4 [i_0] [i_0];
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) || (((/* implicit */_Bool) var_4))));
        var_22 &= ((/* implicit */long long int) arr_9 [i_3] [i_3]);
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_14 [i_3] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (arr_12 [i_3]) : (((/* implicit */int) arr_9 [3U] [i_4]))))));
            arr_15 [i_3] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) 4537071949071944128ULL)))));
            arr_16 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (0ULL) : (((/* implicit */unsigned long long int) arr_12 [i_4]))));
            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 - 3])) ? (var_15) : (((/* implicit */unsigned long long int) arr_11 [i_3 - 3]))));
        }
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_24 = arr_19 [i_3];
            /* LoopSeq 1 */
            for (unsigned char i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                arr_24 [14ULL] [i_6] = ((/* implicit */unsigned long long int) (signed char)81);
                var_25 &= ((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) arr_17 [i_3 + 1] [i_5] [(unsigned char)2])) : (((/* implicit */int) arr_13 [i_3 - 1]))));
                var_26 = ((/* implicit */long long int) (signed char)-116);
                arr_25 [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) arr_10 [i_3 - 1])) : ((-(((/* implicit */int) arr_21 [i_6] [i_5] [i_3]))))));
            }
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((arr_20 [i_3 - 3]) == (arr_20 [i_3 - 2]))))));
    }
}
