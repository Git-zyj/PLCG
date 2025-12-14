/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206966
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [5]);
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_0]);
                            var_15 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [16ULL] [i_3] [(unsigned char)12] [i_4]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            arr_20 [i_2] = ((/* implicit */unsigned char) arr_10 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]);
                            var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_16 [i_6] [i_1] [i_2] [19])), (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_18 [i_0] [i_1] [i_2] [i_5 - 1] [i_5] [i_0] [i_6])))));
                            var_17 = ((/* implicit */_Bool) min((1515844412), (((/* implicit */int) min((((/* implicit */unsigned char) min((((/* implicit */signed char) arr_11 [i_0] [13] [i_2] [i_5 - 1] [i_6])), (arr_15 [(short)14] [i_1] [i_2] [i_6])))), (min((arr_0 [i_1] [i_2]), (((/* implicit */unsigned char) arr_13 [i_0] [i_1] [13] [i_5] [i_6] [i_6] [(_Bool)1])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */_Bool) arr_5 [(short)18] [i_1] [(short)18]);
                            var_19 = ((/* implicit */unsigned char) arr_16 [i_0] [1] [i_7] [i_7]);
                            var_20 -= ((/* implicit */unsigned char) (_Bool)0);
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_0 [i_0] [i_1]);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_22 |= ((/* implicit */unsigned char) arr_2 [i_0]);
                        var_23 = arr_25 [i_0] [i_0] [i_1] [i_0] [i_10] [i_1];
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                        {
                            var_24 |= min((max((arr_12 [i_0] [i_11 + 1] [i_9] [i_10] [i_11 - 1]), (arr_12 [i_0] [i_10] [i_10] [i_10] [i_11]))), (max((arr_12 [i_0] [i_0] [i_9] [(unsigned short)2] [i_0]), (((/* implicit */int) (_Bool)0)))));
                            var_25 = ((/* implicit */int) (_Bool)0);
                            var_26 = ((/* implicit */int) min((min((arr_25 [i_9] [(_Bool)1] [i_9] [i_9] [i_11] [i_11]), (arr_25 [i_9] [i_9] [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11]))), (arr_25 [(short)4] [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11] [(signed char)20])));
                        }
                    }
                } 
            } 
        }
        for (signed char i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            var_27 = ((/* implicit */int) (short)30720);
            var_28 = ((/* implicit */unsigned char) min((max((((/* implicit */int) (unsigned char)95)), (max((((/* implicit */int) (_Bool)1)), (1463913842))))), (((/* implicit */int) arr_22 [i_12 - 1] [i_12 + 2] [i_12] [i_12] [i_12 + 1] [i_12]))));
        }
        for (signed char i_13 = 2; i_13 < 19; i_13 += 4) 
        {
            arr_41 [i_0] [i_0] = ((/* implicit */unsigned short) 67108832);
            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) -1817349264))));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((arr_15 [i_0] [i_0] [15LL] [(signed char)15]), (((/* implicit */signed char) (_Bool)1)))))));
            var_31 |= ((/* implicit */_Bool) (unsigned short)31005);
            var_32 = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_32 [i_0] [i_13] [14ULL] [i_0] [i_13 + 2] [i_0])), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_37 [i_13] [i_13 + 2] [(signed char)8])))));
        }
        var_33 = ((/* implicit */int) min((var_33), (954941365)));
        arr_42 [i_0] = ((/* implicit */unsigned long long int) min((arr_26 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)7])));
    }
    /* LoopSeq 1 */
    for (int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        var_34 *= ((/* implicit */int) arr_17 [i_14]);
        arr_47 [i_14] = ((/* implicit */unsigned short) max((max((arr_35 [i_14]), (((/* implicit */unsigned int) (unsigned char)148)))), (((/* implicit */unsigned int) arr_13 [(unsigned char)0] [3LL] [i_14] [i_14] [i_14] [i_14] [i_14]))));
        var_35 = ((/* implicit */unsigned long long int) arr_32 [i_14] [(unsigned char)10] [i_14] [i_14] [i_14] [1]);
    }
    /* LoopNest 3 */
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
    {
        for (short i_16 = 4; i_16 < 18; i_16 += 4) 
        {
            for (signed char i_17 = 2; i_17 < 17; i_17 += 4) 
            {
                {
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (unsigned char)189))));
                    var_37 = ((/* implicit */long long int) min((var_37), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)34531)), (max((1007986197U), (((/* implicit */unsigned int) arr_12 [i_15] [i_15] [i_15] [5] [i_17 - 1]))))))), (arr_16 [i_17] [i_15] [i_15] [i_15])))));
                }
            } 
        } 
    } 
}
