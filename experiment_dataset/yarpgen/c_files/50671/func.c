/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50671
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((-(((/* implicit */int) (short)-31300)))) : (((/* implicit */int) arr_3 [i_1 - 2]))));
            var_11 = ((/* implicit */signed char) arr_5 [i_0]);
            arr_6 [(unsigned short)8] [(unsigned short)8] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)29)) && (((/* implicit */_Bool) (signed char)22)))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (short)4282))));
            var_12 = ((/* implicit */signed char) arr_4 [i_0] [(signed char)15]);
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_13 += ((/* implicit */short) var_9);
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_11 [i_0] [i_2] [i_2])))) == ((~(((/* implicit */int) (unsigned short)3900)))))))));
                        var_15 = ((/* implicit */signed char) arr_5 [i_2]);
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) min((((((/* implicit */int) max((var_9), (arr_13 [i_0] [i_2] [i_0] [i_0] [i_0])))) < (((/* implicit */int) ((((/* implicit */_Bool) (short)-32754)) && (((/* implicit */_Bool) (short)31297))))))), (((((/* implicit */int) min((((/* implicit */short) (signed char)-21)), ((short)31299)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_2])))))))));
            /* LoopSeq 1 */
            for (short i_5 = 4; i_5 < 20; i_5 += 3) 
            {
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_14 [(signed char)5] [i_2] [i_2] [i_5] [(unsigned short)20] [i_0])), (arr_7 [i_0])));
                var_18 ^= ((/* implicit */short) arr_16 [i_0] [i_5 - 2] [i_5] [i_5 - 3]);
                var_19 = ((/* implicit */signed char) min((((((/* implicit */int) arr_16 [i_0] [i_2] [i_5 - 1] [i_5 - 2])) + (((/* implicit */int) arr_10 [i_5 - 1] [i_5])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
            }
        }
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_20 [(short)4] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_6])))), (((/* implicit */int) min((arr_1 [i_0] [i_6]), (arr_0 [i_0] [i_6]))))));
            arr_21 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_5 [i_0])))));
            var_20 |= ((/* implicit */unsigned short) arr_4 [(short)19] [i_6]);
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (signed char i_8 = 4; i_8 < 20; i_8 += 2) 
                {
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) max((arr_15 [(short)6] [i_6] [i_6] [i_0]), (arr_18 [i_0] [(short)14] [i_7])))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4195)))))))) < (((/* implicit */int) ((short) arr_1 [i_0] [i_8 - 4])))));
                        arr_28 [i_0] [(signed char)4] [i_7] [i_8] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */short) arr_16 [i_0] [i_6] [i_7] [i_7])), (arr_8 [i_0])))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) min((arr_5 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [(signed char)21]))))))), ((-(((/* implicit */int) (short)-32753))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) ((short) arr_12 [i_8 - 3]));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_23 [i_0] [(short)8] [i_7])))))));
                        }
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */short) var_9);
}
