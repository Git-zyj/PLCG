/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32180
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
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0] [6LL] [i_0]), (arr_4 [i_0] [i_1] [i_1]))))) : (arr_1 [i_0])));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_10)) - (75)))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 4; i_4 < 10; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            {
                                arr_14 [(unsigned short)10] [i_0] [i_0] [i_4 - 3] [i_0] = min(((~(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) arr_10 [i_5 + 2] [0LL] [0LL] [i_4 - 2] [i_0])))));
                                var_14 = ((/* implicit */signed char) min((min((((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [4] [i_2] [i_2] [i_2])) << (((((/* implicit */int) var_6)) - (97))))), ((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_7))));
                                var_15 = (-(((((-900319820) ^ (((/* implicit */int) (_Bool)0)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) arr_2 [i_2]))))))));
                                arr_15 [i_0] [i_2] [0LL] [(unsigned char)2] [i_5 + 2] = ((/* implicit */long long int) ((signed char) min(((unsigned short)33045), (min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_3])))))));
                                var_16 = var_6;
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1221806253))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) var_8)))))))) ? ((-(((/* implicit */int) (unsigned short)33031)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_0))))));
                    var_18 &= ((/* implicit */unsigned short) ((signed char) (~(((2032972116) - (((/* implicit */int) (unsigned char)102)))))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_0))));
        arr_19 [i_6] = ((/* implicit */int) var_3);
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))));
        var_22 ^= ((/* implicit */_Bool) min(((~(18014398509481983LL))), (((/* implicit */long long int) ((((arr_21 [7LL]) + (2147483647))) << (((((-900319820) + (900319841))) - (20))))))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        var_23 = ((/* implicit */signed char) (((+(-1971664064))) - (((/* implicit */int) arr_23 [i_8]))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_27 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_22 [i_9] [i_9]))));
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) arr_29 [i_8] [i_8] [i_8]);
                            arr_34 [i_8] [i_9] [i_8] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
            } 
            arr_35 [i_8] [i_9] [i_9] = (signed char)94;
            var_25 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (unsigned short)28382)) || (((/* implicit */_Bool) -351678736))))));
        }
        for (long long int i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (int i_16 = 4; i_16 < 17; i_16 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) arr_21 [i_8]);
                            arr_46 [i_8] [i_8] [i_14] [i_14] = ((arr_32 [i_16 - 2] [i_16] [i_16 + 1] [i_16 - 4] [i_16 - 3]) < (((/* implicit */int) arr_38 [(unsigned char)12] [i_13])));
                        }
                    } 
                } 
                var_27 = ((/* implicit */_Bool) arr_45 [i_13]);
            }
            for (int i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned char)248)) ? (arr_21 [i_8]) : (((/* implicit */int) (unsigned char)60)))) + (2147483647))) >> ((((~(var_0))) - (1215445654147736354LL)))));
                var_29 *= ((/* implicit */unsigned short) var_2);
            }
            for (int i_18 = 0; i_18 < 18; i_18 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_8])) ? (((/* implicit */long long int) var_2)) : (arr_31 [i_8] [i_8] [(unsigned char)13] [i_18])));
                /* LoopSeq 3 */
                for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)28382))));
                    var_32 = ((/* implicit */signed char) var_0);
                    var_33 &= 0;
                    var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (arr_31 [i_8] [i_13] [(unsigned short)10] [i_13]) : (((/* implicit */long long int) arr_54 [(unsigned short)2] [i_8] [i_13] [i_18] [i_18] [i_19])))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8])) ? (arr_44 [(signed char)8] [(signed char)16] [i_18] [i_8]) : (((/* implicit */int) (unsigned short)63)))))));
                }
                for (long long int i_20 = 1; i_20 < 17; i_20 += 4) 
                {
                    var_35 = ((/* implicit */_Bool) ((arr_56 [i_20 + 1] [i_20 - 1] [i_20] [i_8]) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        var_36 = ((/* implicit */_Bool) ((unsigned char) arr_45 [i_8]));
                        arr_61 [i_21] [i_21] [i_8] [i_8] [i_21] = ((arr_56 [i_8] [i_13] [i_18] [i_8]) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_5)));
                        var_37 = ((/* implicit */signed char) -6321678080255696594LL);
                    }
                    for (int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        var_38 = ((/* implicit */int) min((var_38), ((-(((/* implicit */int) arr_56 [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_18]))))));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (unsigned short)35074))));
                    }
                    for (int i_23 = 0; i_23 < 18; i_23 += 4) 
                    {
                        var_40 = ((/* implicit */int) arr_25 [i_8] [i_13]);
                        arr_67 [i_8] [i_13] [i_18] [i_8] [14LL] [(signed char)1] [i_23] = ((/* implicit */int) (~(3393580040113394504LL)));
                    }
                }
                for (unsigned short i_24 = 0; i_24 < 18; i_24 += 3) 
                {
                    arr_71 [10LL] [i_8] [i_8] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) -3393580040113394504LL);
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [(_Bool)1] [(unsigned char)2] [i_8])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)85)))) : (((/* implicit */int) (_Bool)1))));
                    var_42 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(arr_32 [i_8] [(signed char)1] [i_13] [i_18] [i_24])))) > (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (2329217732161162391LL)))));
                }
                var_43 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) (unsigned short)50222)))));
            }
            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) arr_39 [i_8] [i_13] [i_8]))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                var_45 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned short)18506)))));
                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16427))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_2)) < (-5457186038741418773LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_25])) && (((/* implicit */_Bool) var_0)))))));
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (+(((/* implicit */int) var_7)))))));
            }
            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_8])) ? (((/* implicit */int) (unsigned short)50222)) : (((/* implicit */int) var_8))))) ? (-8742145831224319227LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
        arr_77 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 853572911)) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)24))));
    }
}
