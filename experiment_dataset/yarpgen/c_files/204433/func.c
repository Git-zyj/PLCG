/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204433
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
    var_15 |= var_0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) (short)25619)) == (((/* implicit */int) arr_1 [12LL] [i_0]))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)7])) ? (((/* implicit */int) (short)25633)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_4]))))) ? (((/* implicit */int) ((_Bool) arr_16 [i_0] [i_1] [i_2] [i_1] [i_4]))) : (arr_2 [i_0]))) >> (((var_4) - (1096232146U)))));
                                var_18 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)184)))) * (min(((+(((/* implicit */int) arr_7 [i_4])))), (max((((/* implicit */int) (short)25639)), (var_8)))))));
                                arr_18 [i_0] [(signed char)13] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) -7930194337717759761LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25639))) : (((4U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)25633))))))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_14 [i_0] [(signed char)6] [i_2] [i_3] [i_4])) - (178)))))) ? (((/* implicit */int) (short)-24134)) : (((/* implicit */int) arr_7 [2]))));
                                var_20 *= ((/* implicit */signed char) (~(arr_15 [(_Bool)0] [i_1] [i_3] [0LL])));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */signed char) ((_Bool) ((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (max((-4101343721644066064LL), (((/* implicit */long long int) (short)-25620)))))));
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)25639))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [(short)15] [i_0] [i_1] [i_0]))) <= (7930194337717759761LL)))) : (arr_2 [i_0])))) < (max(((~(3304342576U))), (((/* implicit */unsigned int) ((short) arr_7 [i_1])))))));
                var_23 = ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-36)), (((((/* implicit */int) arr_12 [i_0])) << (((((((/* implicit */int) var_12)) + (22408))) - (9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */long long int) max((((/* implicit */int) arr_11 [i_0] [(short)1] [(short)1] [12])), (arr_13 [i_1] [i_0] [i_1] [i_0] [i_0])))) * (min((((/* implicit */long long int) arr_7 [(unsigned char)15])), (68451041280LL))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((long long int) var_5));
    /* LoopSeq 3 */
    for (int i_5 = 1; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */int) ((short) 3422756692184214443LL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_24 [19U] [19U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5])) ? (7930194337717759760LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_5] [i_5] [i_6])))))) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) arr_20 [i_5])) : (arr_22 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) <= (7930194337717759760LL)))))));
            arr_25 [i_6] |= ((/* implicit */signed char) (_Bool)0);
            var_26 = ((/* implicit */unsigned long long int) arr_20 [i_5]);
            var_27 = ((/* implicit */signed char) ((short) (+(var_6))));
        }
        var_28 = ((/* implicit */unsigned char) 7930194337717759761LL);
        var_29 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((7930194337717759760LL), (7930194337717759761LL)))) / (arr_22 [(_Bool)1] [i_5])));
    }
    for (int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 2; i_8 < 20; i_8 += 3) 
        {
            var_30 = ((/* implicit */short) (+(arr_28 [i_7 + 1] [i_7 + 1])));
            /* LoopSeq 1 */
            for (int i_9 = 2; i_9 < 19; i_9 += 4) 
            {
                var_31 = arr_27 [i_8];
                arr_34 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9 + 1] [i_8]))) + (-7930194337717759769LL)));
                arr_35 [3U] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)25608)) || (((/* implicit */_Bool) var_6)))))));
            }
            arr_36 [i_7] = ((/* implicit */unsigned int) ((_Bool) arr_19 [(short)4] [i_8 - 2]));
            /* LoopNest 2 */
            for (signed char i_10 = 2; i_10 < 20; i_10 += 1) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_42 [i_11] [i_10] [i_10] [i_8] [14U] = ((((/* implicit */_Bool) arr_41 [i_8 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_30 [(short)9] [(short)9])) : (((/* implicit */int) arr_19 [i_8 - 2] [i_7 - 1])));
                        arr_43 [i_8 + 1] [i_11] = ((/* implicit */short) arr_21 [i_7] [i_8] [i_10]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (signed char i_12 = 1; i_12 < 17; i_12 += 1) 
            {
                var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)120))));
                var_33 = ((/* implicit */_Bool) arr_33 [i_7 - 1]);
                arr_46 [i_7] [3ULL] [3ULL] = ((/* implicit */long long int) arr_26 [i_8]);
                arr_47 [i_7] [13] [14] = ((/* implicit */_Bool) arr_37 [i_7] [i_8] [i_12] [i_7]);
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_37 [17] [i_8] [i_8] [i_12]))));
            }
            for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                arr_50 [i_13] [i_13] [i_13] = ((/* implicit */short) (~(arr_49 [i_8 + 1] [i_8 - 2] [i_7 - 1] [i_7 + 1])));
                arr_51 [i_8] = ((/* implicit */long long int) ((unsigned char) 7930194337717759760LL));
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 4) 
                    {
                        {
                            arr_60 [i_7] [i_8 - 2] [(signed char)12] [i_7] [i_7] [i_14] [i_15] = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_61 [i_7] [i_8 - 2] [i_13] [i_13] = ((/* implicit */_Bool) 9603187960017613034ULL);
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_17 = 2; i_17 < 18; i_17 += 2) /* same iter space */
                {
                    var_35 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((0) ^ (((/* implicit */int) (short)-21478))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) - (1916483894U)))));
                    var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                    var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-14762))));
                }
                for (unsigned int i_18 = 2; i_18 < 18; i_18 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_65 [i_8 - 2])) + (((3830719707187618507LL) & (1152921470247108608LL)))));
                    var_39 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1107467114)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_7] [i_7]))) : (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_7] [(signed char)18] [18U] [i_18])))));
                    arr_70 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_32 [i_7] [i_8] [i_16]);
                }
                var_40 += ((/* implicit */signed char) ((((/* implicit */int) arr_66 [i_8 + 1] [i_8] [i_8] [i_16] [i_8 + 1])) << (((((/* implicit */int) arr_63 [i_8] [i_16])) - (9337)))));
                var_41 = ((/* implicit */long long int) arr_38 [i_16]);
            }
        }
        for (long long int i_19 = 0; i_19 < 21; i_19 += 4) 
        {
            var_42 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (_Bool)0))) * (((/* implicit */int) (_Bool)1))))), (((3401389163U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            arr_73 [i_7] |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-26853))));
            arr_74 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-25620))));
            arr_75 [i_7] [i_19] [i_7] = ((/* implicit */unsigned long long int) (signed char)0);
        }
        var_43 |= ((/* implicit */_Bool) min((arr_27 [i_7]), (arr_64 [i_7] [(unsigned char)11] [i_7])));
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 20; i_20 += 1) /* same iter space */
    {
        arr_78 [i_20] = ((/* implicit */_Bool) ((signed char) arr_39 [i_20 + 1] [i_20 + 1] [i_20 + 1]));
        arr_79 [(short)1] [(short)1] = ((/* implicit */signed char) arr_64 [i_20 + 1] [i_20] [i_20]);
    }
}
