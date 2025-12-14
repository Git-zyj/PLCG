/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235808
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */signed char) var_11)), (var_5)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 24; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(signed char)16]))));
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (!(arr_2 [i_1])));
        }
        arr_5 [i_0] = ((/* implicit */short) arr_3 [(_Bool)1]);
        var_15 = ((/* implicit */unsigned int) ((var_4) ? (((arr_3 [24U]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [24U])))) : (((/* implicit */int) arr_3 [20U]))));
    }
    for (short i_2 = 3; i_2 < 24; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] [i_2] = max((arr_0 [i_2 - 1]), (min((arr_0 [i_2 - 2]), (arr_0 [i_2 - 2]))));
        var_16 = min((((/* implicit */unsigned int) max((arr_3 [(_Bool)1]), (arr_3 [(_Bool)1])))), (arr_1 [i_2]));
    }
    for (short i_3 = 3; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_17 ^= ((/* implicit */_Bool) arr_1 [i_3]);
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_4])), ((~(((/* implicit */int) var_4))))));
                    var_18 = arr_1 [i_4];
                }
            } 
        } 
    }
    for (short i_6 = 3; i_6 < 24; i_6 += 3) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned int) arr_6 [i_6 - 2] [i_6]);
        var_20 &= ((/* implicit */_Bool) min(((+(arr_1 [i_6]))), (((/* implicit */unsigned int) arr_2 [(signed char)14]))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_18 [i_7]))))));
                    arr_24 [i_6 - 2] [i_8] [i_6] = arr_15 [i_6 - 1] [i_7] [i_7];
                    arr_25 [i_6] = arr_14 [i_6] [i_6] [i_6] [i_7];
                    arr_26 [(_Bool)1] [i_7] [i_6] = ((/* implicit */_Bool) max((min((((/* implicit */int) arr_7 [i_6 + 1] [i_8 - 1])), (((arr_19 [i_6]) ? (((/* implicit */int) arr_12 [i_6] [(signed char)20] [i_6])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_15 [i_7] [i_7] [(short)23]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_11]), (((/* implicit */unsigned int) arr_30 [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_30 [i_11] [(signed char)7] [i_6] [i_6]), (((/* implicit */signed char) arr_6 [i_6 - 3] [i_10])))))) : (arr_1 [i_10]))))));
                        arr_35 [i_6] [i_10] [i_9] [i_6] = ((/* implicit */short) arr_20 [i_6]);
                        arr_36 [i_6] [i_9] [i_9] [i_10] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_10] [(short)1])), (((var_4) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        arr_37 [i_6] [i_6] [i_9] [i_11] = var_2;
                    }
                } 
            } 
        } 
    }
}
