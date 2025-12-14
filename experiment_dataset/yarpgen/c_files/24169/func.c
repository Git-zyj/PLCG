/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24169
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
    var_15 -= ((/* implicit */signed char) ((short) (signed char)-12));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(short)7])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) min((max((arr_1 [i_0] [i_1 + 1]), (var_3))), (arr_4 [(short)5] [(short)5] [i_1 - 1]))))));
                    arr_10 [i_1 + 1] [(signed char)6] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)35))));
                }
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (signed char i_4 = 2; i_4 < 7; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                arr_20 [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [(signed char)6] [i_4 - 1] [(signed char)6] [(signed char)6] [i_5] [i_1 + 1])) || (((/* implicit */_Bool) (signed char)-19))))), (min(((+(((/* implicit */int) (signed char)23)))), (((/* implicit */int) (short)-26261))))));
                                var_16 = ((/* implicit */short) (signed char)-88);
                                var_17 -= ((/* implicit */short) var_14);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = arr_22 [i_6] [i_6];
        var_18 ^= var_5;
    }
}
