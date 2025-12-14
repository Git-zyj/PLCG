/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37354
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 = arr_0 [i_0];
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) 17014650298133358022ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1984))) : (4178767749U)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
    }
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((_Bool)1), (var_7)))) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_4 [i_1] [i_1]))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1326726130)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16368))) : (15865943265244453364ULL)));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (short)-9731);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (signed char)110));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            arr_11 [24ULL] [i_1] [(unsigned char)13] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
            arr_12 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)46);
            var_15 &= ((/* implicit */signed char) (-(arr_9 [i_1] [i_2 + 2])));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) var_10);
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_26 [(signed char)13] [i_6] [(signed char)21] [i_4] [i_3] = (!(((/* implicit */_Bool) 1326726150)));
                        var_16 += ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(arr_13 [i_3])))));
                        arr_27 [i_3] [i_4 + 1] [i_4 - 1] [(unsigned char)0] [i_6] [i_6] = arr_4 [i_5 - 2] [i_4 - 1];
                        arr_28 [i_3] [12] [i_5] [12] [(unsigned char)5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_29 [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) ((short) arr_18 [i_4 - 1] [i_4 + 1] [i_4 + 1]));
        }
        arr_30 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-1326726150) : (((/* implicit */int) arr_19 [(unsigned short)23])))))));
        var_17 = ((/* implicit */int) ((arr_13 [i_3]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))));
    }
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 3; i_8 < 23; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 4) 
            {
                {
                    var_18 &= ((/* implicit */_Bool) arr_19 [i_8 + 1]);
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 1; i_11 < 24; i_11 += 3) 
                        {
                            {
                                arr_46 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_35 [i_7] [i_7]);
                                arr_47 [i_7] [i_7] [i_7] [i_7] [(unsigned char)23] = ((/* implicit */long long int) ((signed char) arr_42 [i_10 - 1] [i_9 - 2] [i_9 + 2] [i_8 + 1] [i_8] [0ULL]));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        arr_51 [i_12] [10LL] [i_9] [i_8 + 1] [i_8 + 1] [i_7] = ((/* implicit */unsigned int) ((arr_15 [i_8 + 1]) >= (arr_15 [i_8 - 2])));
                        var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_35 [i_8 - 2] [i_8 - 2]))));
                        arr_52 [i_8 - 2] [i_8 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9]))) == (((unsigned long long int) arr_17 [(unsigned char)20]))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_13 = 3; i_13 < 22; i_13 += 3) 
                    {
                        var_20 = ((/* implicit */int) 12330269696313920337ULL);
                        arr_56 [i_13] [i_8] = ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_7] [i_7]));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_59 [i_7] [(unsigned char)8] [i_9] [i_13] [i_9] [i_13] [i_14] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                            arr_60 [i_13] [i_13] = ((/* implicit */unsigned char) arr_54 [i_13 - 2] [i_14] [i_14] [i_14] [i_14] [i_14]);
                        }
                        var_21 = ((/* implicit */short) (_Bool)1);
                    }
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned long long int) max((min((arr_38 [22ULL]), (((/* implicit */unsigned long long int) arr_37 [i_9 + 2])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_7] [(signed char)0] [(unsigned short)17])))))))))));
                        arr_63 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_53 [i_15 - 1] [i_15] [i_9] [i_8] [(signed char)3]);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_33 [i_8] [i_7]);
                        arr_68 [i_7] [i_8 - 3] [i_9] [i_16] = ((/* implicit */unsigned char) (_Bool)1);
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_49 [i_8 - 2] [i_9 + 1] [i_16] [i_16]))));
                    }
                    arr_69 [i_7] = ((/* implicit */signed char) (+(arr_34 [i_9])));
                }
            } 
        } 
        arr_70 [i_7] [i_7] = ((signed char) (_Bool)1);
    }
    for (short i_17 = 1; i_17 < 6; i_17 += 4) 
    {
        var_25 = max((((/* implicit */signed char) arr_10 [(unsigned char)23] [i_17 - 1] [(_Bool)1])), ((signed char)-125));
        arr_74 [0U] &= (_Bool)0;
    }
    var_26 ^= var_3;
}
