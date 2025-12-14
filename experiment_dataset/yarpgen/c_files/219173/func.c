/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219173
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_0 [i_0]))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (1152921504605798400LL)));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_1 - 2] [i_1 - 2]) : (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2]))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-5619))) != (3103151602380868843LL)))) + ((~(((/* implicit */int) (_Bool)1))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) arr_4 [(unsigned short)20] [i_2] [i_2]);
            var_21 = ((/* implicit */_Bool) (signed char)112);
            var_22 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2]))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0]));
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_24 = ((/* implicit */signed char) var_3);
                    var_25 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_5]));
                    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_11 [i_0] [(unsigned short)5] [i_4] [i_5] [12LL] [i_5]))) & (arr_11 [i_0] [i_0] [i_4] [i_5] [19LL] [10])));
                    var_27 *= ((/* implicit */long long int) ((_Bool) arr_5 [i_3]));
                }
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    var_28 = ((/* implicit */signed char) arr_5 [i_6]);
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_6] [i_3] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))));
                }
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        var_30 = ((/* implicit */signed char) arr_11 [18ULL] [18ULL] [18ULL] [i_4] [i_4] [11ULL]);
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_8 - 1] [i_8 - 1]) : (arr_2 [i_8 - 1] [i_8 + 1])));
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_8 - 2] [i_8 - 2] [i_7] [i_7])))));
                        var_33 = ((/* implicit */unsigned short) var_8);
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_5))))) & (arr_7 [i_3] [i_3])));
                        var_35 = ((/* implicit */_Bool) (-(arr_15 [i_0] [i_0] [21LL] [(short)12])));
                    }
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (((/* implicit */int) arr_1 [i_7] [i_4]))));
                    var_37 = ((/* implicit */unsigned int) ((unsigned long long int) var_9));
                    var_38 += (!(((/* implicit */_Bool) arr_15 [i_0] [(_Bool)1] [i_0] [i_0])));
                }
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    var_39 = ((/* implicit */unsigned int) var_2);
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)107))) : (-2812450725368118012LL)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1689160773561405005LL))))))));
                    var_41 = ((/* implicit */_Bool) var_2);
                }
            }
            /* LoopSeq 2 */
            for (short i_11 = 2; i_11 < 23; i_11 += 1) 
            {
                var_42 = ((/* implicit */unsigned char) arr_16 [i_11] [i_11 - 1] [20] [(unsigned short)21]);
                var_43 = ((/* implicit */unsigned short) ((arr_13 [i_11 - 1] [i_11 - 1]) / (arr_13 [i_11 + 1] [i_11 - 1])));
                var_44 = ((/* implicit */_Bool) ((int) arr_18 [i_3] [i_11 + 1] [i_11 - 2] [i_11 - 2]));
                /* LoopSeq 1 */
                for (int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    var_45 = ((/* implicit */short) arr_3 [i_11 + 1]);
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned short) ((long long int) arr_15 [i_0] [i_11 - 1] [i_11] [i_11 - 1]));
                        var_47 -= ((/* implicit */unsigned short) ((arr_31 [(_Bool)1] [i_11 - 1] [i_12] [i_12] [i_13]) + (((/* implicit */int) arr_28 [i_12]))));
                    }
                    var_48 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_20 [i_0] [i_3] [i_3] [i_3] [i_3] [(unsigned short)20] [(unsigned short)20])))) >= (((((/* implicit */_Bool) 131064)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_33 [i_3] [i_11] [i_11] [i_11]))))));
                }
            }
            for (short i_14 = 4; i_14 < 22; i_14 += 2) 
            {
                var_49 = ((/* implicit */short) var_6);
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned short i_16 = 1; i_16 < 23; i_16 += 2) 
                    {
                        {
                            var_50 &= ((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_15] [(_Bool)1] [i_0]);
                            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_11 [(signed char)4] [i_3] [(signed char)4] [i_15] [i_16] [i_0]))) ? (arr_41 [i_3] [i_3] [i_16] [i_3] [i_16 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_14 + 2] [i_16 - 1] [i_16 - 1])))));
                        }
                    } 
                } 
            }
        }
    }
    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (signed char)103)) * (((/* implicit */int) (unsigned short)29540)))))) : ((-(var_4)))));
}
