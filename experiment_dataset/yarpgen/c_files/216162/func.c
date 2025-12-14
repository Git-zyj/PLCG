/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216162
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)8])) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))) ? (min(((+(((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_11)))))) : (((((((/* implicit */int) (unsigned short)4560)) >= (((/* implicit */int) (unsigned short)32245)))) ? (((/* implicit */int) ((unsigned short) (signed char)17))) : (((/* implicit */int) arr_1 [(signed char)9] [i_0]))))));
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1] [(signed char)8]))));
            var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)2))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((unsigned short) arr_4 [i_0]))));
            var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)6])) && (((/* implicit */_Bool) arr_7 [(signed char)2] [i_2] [i_2]))));
            var_17 = ((/* implicit */unsigned short) (signed char)-14);
        }
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_18 = (unsigned short)15560;
        /* LoopSeq 3 */
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            arr_15 [i_3] [(unsigned short)9] [i_4] = ((signed char) arr_14 [i_4] [i_4 + 1] [i_4 + 1]);
            var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)17))));
            var_20 = ((/* implicit */signed char) (unsigned short)124);
            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)16383))));
        }
        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_1))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                arr_20 [i_3] = ((unsigned short) arr_18 [i_5] [i_5] [i_5 + 1]);
                var_23 = ((/* implicit */unsigned short) var_10);
            }
            for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
            {
                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49145)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)31))))) ? (((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)54933)))) : (((/* implicit */int) (unsigned short)28152))));
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)49145)) ? (((/* implicit */int) arr_23 [i_5 - 1] [i_9 + 1] [i_9 - 1] [i_9])) : (((/* implicit */int) arr_14 [i_7] [i_9 + 1] [i_9 - 1]))));
                        var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57614)) || (((/* implicit */_Bool) arr_26 [i_3]))));
                        arr_29 [i_3] [i_5] [i_7 - 1] [i_8] |= (unsigned short)65221;
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65527)))))));
                        var_28 = ((/* implicit */signed char) (unsigned short)19302);
                    }
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16383)) && (((/* implicit */_Bool) arr_25 [i_3] [i_7] [i_7]))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_31 [i_7 + 2] [i_7 + 4] [i_10 - 1] [i_7 + 2] [i_7 + 4]))));
                        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)49153)) >= (((/* implicit */int) var_5)))) ? (((/* implicit */int) (unsigned short)57625)) : (((/* implicit */int) arr_24 [i_8]))));
                        arr_32 [i_7] [i_5 - 1] [(signed char)3] [i_7] [i_10] = (signed char)-42;
                    }
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_5 + 2]))));
                        arr_35 [i_3] [i_7] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57599))))) || (((/* implicit */_Bool) (signed char)6))));
                        arr_36 [i_3] [i_5] [i_7 + 1] [i_8] [i_7] = (unsigned short)57431;
                        arr_37 [i_8] [i_8] [i_3] [i_8] [i_3] &= ((/* implicit */signed char) (~(((/* implicit */int) arr_24 [i_5 - 1]))));
                    }
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        var_33 *= ((/* implicit */signed char) ((((/* implicit */int) var_7)) >> ((((~(((/* implicit */int) var_5)))) - (101)))));
                        arr_40 [i_7] [i_8] [i_5 - 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_1))))));
                        var_34 = ((/* implicit */signed char) max((var_34), ((signed char)5)));
                    }
                }
                for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    var_35 ^= ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (signed char)101)))));
                    var_36 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_5 - 2] [i_5 - 2] [i_7 - 1]))));
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) (unsigned short)65432)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)101)))))))));
                }
                for (signed char i_14 = 3; i_14 < 23; i_14 += 2) 
                {
                    arr_45 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_14 + 1] [i_5] [i_7] [i_5] [(unsigned short)23])) && (((((/* implicit */int) arr_43 [i_3] [(unsigned short)11] [i_7] [i_14] [(unsigned short)9])) == (((/* implicit */int) arr_25 [i_7] [i_7] [(unsigned short)9]))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65534))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((signed char) arr_42 [(signed char)10] [(signed char)10] [i_7]))));
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)54933))))))))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)43)) > (((/* implicit */int) var_3))));
                        arr_53 [i_3] [i_7] [i_7 + 1] [i_14] [i_16] = ((/* implicit */signed char) (unsigned short)31651);
                        var_42 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)24726)) >> (((((/* implicit */int) (unsigned short)101)) - (77)))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
                    {
                        arr_56 [i_7] [i_14 - 1] [i_7] [i_3] [i_5 + 2] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28672)) || (((/* implicit */_Bool) arr_52 [i_7] [i_5 + 2] [i_7] [i_14] [i_17]))))) << ((((~(((/* implicit */int) (unsigned short)38024)))) + (38047)))));
                        var_43 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (signed char)-23)))) >= (((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) arr_39 [i_3] [i_5] [i_5])) : (((/* implicit */int) arr_52 [i_7] [i_7] [i_7] [i_14] [i_7]))))));
                        arr_57 [i_3] [(unsigned short)8] [i_7] [(unsigned short)7] [(unsigned short)7] [i_14] [(unsigned short)7] = (unsigned short)56726;
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_3] [i_5] [i_3] [i_14 - 3] [i_14 - 3]))))) ? (((/* implicit */int) arr_38 [i_3] [i_5] [i_7] [i_14] [(signed char)0] [i_7] [i_17])) : (((/* implicit */int) (unsigned short)64798))));
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_7 + 1] [i_7])) / (((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_18 = 1; i_18 < 21; i_18 += 2) 
                    {
                        var_46 = ((/* implicit */signed char) (-(((/* implicit */int) arr_46 [i_7 + 1] [i_7] [i_7] [i_7 + 3] [i_7 - 1] [i_7 + 1] [(signed char)3]))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_14 - 3] [i_7] [i_5])) && (((/* implicit */_Bool) arr_25 [i_14 - 2] [i_7] [i_5]))));
                    }
                    var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)11510)) ? (((/* implicit */int) arr_21 [i_7] [i_14 - 1])) : (((/* implicit */int) (unsigned short)46564))));
                    var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_3] [i_3] [i_3] [i_3] [(unsigned short)18] [i_7] [i_3])))))));
                }
                arr_61 [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_7] [i_5 - 2] [i_5 - 2] [i_7])) ? (((/* implicit */int) arr_28 [i_5 - 3] [i_5 + 2] [i_5 + 2] [i_7 + 3] [i_7] [i_7] [i_5 - 3])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65408)) != (((/* implicit */int) (unsigned short)28)))))));
            }
            var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)26607)))))));
        }
        for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            arr_65 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3] [i_3]))))) && (((/* implicit */_Bool) (unsigned short)27534))));
            arr_66 [(signed char)0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_3] [(unsigned short)10] [i_3] [i_19] [i_3])) ? (((/* implicit */int) (unsigned short)18990)) : (((/* implicit */int) arr_43 [i_19] [i_19] [i_3] [i_3] [i_3]))));
        }
        var_51 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_44 [i_3] [i_3] [(unsigned short)18] [i_3])))) ? (((/* implicit */int) (unsigned short)62412)) : (((/* implicit */int) arr_38 [(unsigned short)10] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
    }
    var_52 *= (signed char)7;
    var_53 = var_7;
    var_54 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)30)))));
}
