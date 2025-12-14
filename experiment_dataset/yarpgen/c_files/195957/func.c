/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195957
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_0)) : (var_13)))))) ? (((((((/* implicit */_Bool) var_7)) ? (2706632568U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_8)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                var_15 ^= ((/* implicit */unsigned int) (unsigned char)0);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 + 3] [(unsigned char)15] [i_2])) ? (arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_3 [i_2 + 3] [i_2] [19U])));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 4; i_3 < 16; i_3 += 4) 
        {
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 2202546773U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) (+(arr_3 [i_2] [0LL] [i_4])));
                arr_13 [i_2 - 3] [i_2 - 3] = ((/* implicit */int) var_10);
                arr_14 [i_3 + 1] [i_3 + 1] = ((/* implicit */int) ((4294967272U) | (arr_9 [i_3 - 4])));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        var_19 = ((var_9) * (((/* implicit */unsigned long long int) var_13)));
                        var_20 = ((/* implicit */int) 2578463242324733594ULL);
                        arr_19 [i_2] [(unsigned char)5] [i_2] [i_6] = var_12;
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */signed char) ((_Bool) ((var_12) / (arr_15 [i_2]))));
    }
}
