/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44899
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */short) (+((-(808085945)))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((~(var_14))) : (((((/* implicit */_Bool) (unsigned short)15289)) ? (var_14) : (((/* implicit */int) (unsigned char)9))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (2147483647) : (arr_3 [i_1 - 1])));
                    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 808085959)) ? (((/* implicit */int) (unsigned short)46440)) : (-808085940)));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) == (((((/* implicit */_Bool) var_15)) ? (arr_6 [i_0]) : (((/* implicit */int) var_11))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) var_15)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_1);
}
