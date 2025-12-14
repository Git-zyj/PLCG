/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243958
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3 - 2] [i_3 - 2] [i_3]))) >= (((unsigned int) (unsigned char)11)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)63))))) > (max((((/* implicit */unsigned int) arr_7 [(signed char)9] [7U] [i_2])), (var_8)))))) : ((+(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        arr_12 [(short)9] [(short)9] [i_2] [i_3] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0] [(signed char)11]);
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [(unsigned char)3] [i_3 - 2])))))));
                        var_21 += ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_22 += ((/* implicit */unsigned int) (-(9223372036854775798LL)));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_6] [i_5])) | (((/* implicit */int) ((_Bool) 9223372036854775777LL)))))) && (((/* implicit */_Bool) (unsigned char)61))));
                        arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) arr_15 [15] [15]);
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) -9223372036854775799LL);
        /* LoopSeq 2 */
        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4355))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_14 [i_4])) : (((int) arr_13 [i_8 - 2])))))));
            /* LoopSeq 3 */
            for (short i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_8 + 1]), (arr_13 [i_8 - 2])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_23 [i_4] [i_8]) : (((/* implicit */unsigned int) arr_25 [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8])))));
                var_27 = ((/* implicit */unsigned char) var_12);
                var_28 = ((/* implicit */signed char) arr_20 [i_4] [i_8 + 2]);
            }
            for (unsigned int i_10 = 2; i_10 < 16; i_10 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_11 = 2; i_11 < 16; i_11 += 3) 
                {
                    var_29 = ((/* implicit */signed char) arr_23 [i_10 + 1] [i_8 - 2]);
                    var_30 = ((((/* implicit */_Bool) arr_26 [i_11 - 2] [i_10 + 1] [i_8 + 1])) ? (arr_26 [i_11 - 2] [i_10 + 3] [i_8 + 1]) : (arr_26 [i_11 - 2] [i_10 + 3] [i_8 - 2]));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_25 [i_10]))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    arr_33 [i_10] [i_8] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 + 1] [i_8 + 2] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_4])) || (((/* implicit */_Bool) (signed char)-60)))))) : (min((arr_31 [i_12] [i_10 + 3] [i_8] [i_4] [i_4]), (((/* implicit */unsigned int) arr_14 [i_4]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (signed char)-58)) & (arr_24 [i_4] [(unsigned char)13] [i_12]))) : (min((arr_24 [i_4] [i_8 + 2] [i_10 - 2]), (arr_28 [i_4] [i_8])))))) : (((((_Bool) arr_17 [i_4])) ? (arr_23 [i_4] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_12])) + (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        var_32 -= ((/* implicit */unsigned char) (!((_Bool)1)));
                        arr_37 [i_10] [i_4] [i_10] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8 + 1] [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_4] [9U]))))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_35 [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_8 - 2] [i_4] [i_12])))))));
                        var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_19)))) ? ((((+(9223372036854775778LL))) % (((/* implicit */long long int) ((/* implicit */int) ((1588451632) > (((/* implicit */int) arr_13 [i_13])))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((-9223372036854775775LL), (((/* implicit */long long int) arr_35 [i_4] [i_8] [(unsigned char)6] [(unsigned char)6] [(unsigned char)13] [i_4] [(unsigned char)13])))))))))));
                    }
                    for (int i_14 = 1; i_14 < 17; i_14 += 4) 
                    {
                        arr_40 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) > (arr_32 [i_4] [i_4] [i_4])))))) > (max((arr_23 [i_8 - 1] [i_14 + 1]), (721568628U)))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) min((max((arr_26 [i_8 - 1] [i_10] [i_10]), (3901454880U))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned short)17]))) : (var_14))) <= (((arr_39 [i_4] [i_8]) << (((arr_31 [i_4] [i_8 - 1] [i_14] [i_12] [i_14 + 1]) - (3004410282U)))))))))))));
                        var_35 = ((/* implicit */signed char) (~(((/* implicit */int) arr_34 [i_4] [(unsigned char)18]))));
                        arr_41 [(signed char)12] [i_8] [i_4] [i_12] [i_14] = ((/* implicit */_Bool) (-(((max(((_Bool)1), (arr_22 [i_4] [i_8] [i_10]))) ? (arr_23 [i_4] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4])))))));
                        var_36 = ((/* implicit */unsigned short) arr_28 [i_4] [i_4]);
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_15 = 1; i_15 < 18; i_15 += 4) 
                {
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((max(((short)-31838), (((/* implicit */short) arr_16 [i_4] [(short)8])))), (((/* implicit */short) arr_38 [i_4])))))) ^ (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) arr_19 [i_4] [16] [i_4] [i_4] [i_4] [i_4]))))), (min((var_8), (((/* implicit */unsigned int) arr_13 [(unsigned char)12]))))))));
                            var_38 = var_17;
                        }
                    } 
                } 
            }
            for (unsigned char i_17 = 3; i_17 < 15; i_17 += 1) 
            {
                arr_51 [i_4] [i_4] [i_17 + 3] = ((/* implicit */_Bool) var_11);
                arr_52 [i_4] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4] [i_8])) ? (((/* implicit */int) var_9)) : (arr_25 [i_4])))))))));
                var_39 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_17 + 1])) ? (((/* implicit */int) arr_16 [i_4] [i_17 + 1])) : (((/* implicit */int) var_4))))) : (arr_15 [i_8 - 2] [i_17 + 4])));
                var_40 += ((/* implicit */signed char) -9223372036854775801LL);
            }
            arr_53 [i_4] [i_8 + 2] [(short)16] &= ((/* implicit */unsigned char) 9223372036854775807LL);
            var_41 = ((/* implicit */short) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_34 [i_4] [i_4]))));
        }
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            var_42 += ((/* implicit */_Bool) arr_20 [(signed char)0] [(signed char)0]);
            /* LoopNest 3 */
            for (unsigned int i_19 = 2; i_19 < 17; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 19; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        {
                            arr_62 [i_4] [i_4] [i_19 - 2] [i_20] [i_21] [(signed char)2] = ((/* implicit */unsigned char) ((arr_44 [i_4] [i_4] [i_19 + 2] [i_19] [i_20] [i_21]) ? (((long long int) max((var_14), (((/* implicit */unsigned int) arr_34 [i_4] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_4] [i_18] [i_19] [i_21])) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_42 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) var_2)))))));
                            arr_63 [i_4] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-124)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_18])))));
                        }
                    } 
                } 
            } 
        }
    }
    var_43 = ((/* implicit */signed char) var_12);
    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (min((-9223372036854775799LL), (((/* implicit */long long int) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_45 = ((/* implicit */unsigned short) 115848813U);
}
