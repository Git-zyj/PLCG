/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27379
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
    var_20 = ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */int) (signed char)-111)) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_13)))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_21 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (!((_Bool)1)))) > (((/* implicit */int) arr_0 [i_1])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_0]))));
            var_22 = ((/* implicit */unsigned char) 2147483647);
            var_23 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0 + 2])) <= (((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (((/* implicit */int) var_17))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0] [(unsigned char)9] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned char)4])) == (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) ((var_0) > (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) - (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (max((2147483647), (((/* implicit */int) (signed char)-121))))))));
        }
        var_24 = ((/* implicit */_Bool) max((var_24), (max((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_18)))), (((((/* implicit */int) arr_2 [i_0 - 4])) > (((/* implicit */int) arr_3 [17] [i_0 - 3] [i_0 + 1]))))))));
        arr_4 [18LL] = ((/* implicit */unsigned short) ((((long long int) ((signed char) arr_0 [i_0 - 2]))) ^ (((((/* implicit */_Bool) 1439965492)) ? (8275798955081226480LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21)))))));
        var_25 ^= ((unsigned char) min((var_8), ((signed char)-115)));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_26 = ((/* implicit */int) max((var_26), ((+(((/* implicit */int) arr_0 [i_2]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_3] [i_3]))));
            arr_11 [i_3] [i_3] [i_2] = (~(((/* implicit */int) var_14)));
            var_28 ^= ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */int) ((short) (signed char)-115))) : ((+(268431360))))), (((/* implicit */int) arr_7 [i_2] [i_3]))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1]))) > (arr_15 [(_Bool)1] [i_3] [i_5] [i_5])))) < (arr_13 [i_2] [i_4 + 1]))))));
                        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_15 [i_4] [i_4] [i_3] [i_5 - 2]) - (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3]))))) ? (min((((/* implicit */int) (signed char)-2)), (-2147483647))) : (((/* implicit */int) arr_8 [i_5 - 2]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_5] [i_4] [(signed char)6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_14))))));
                        arr_26 [i_5] [i_5] [i_5] [i_4 + 1] [i_5] [i_5] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                    }
                    var_30 ^= ((/* implicit */long long int) ((int) min((((/* implicit */short) arr_6 [i_4 - 1])), (var_12))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_8 = 4; i_8 < 14; i_8 += 3) 
                {
                    arr_30 [1] [i_4] [i_3] = ((/* implicit */_Bool) var_16);
                    arr_31 [i_2] [14LL] = ((/* implicit */unsigned char) min((9223372036854775807LL), (((/* implicit */long long int) min(((-(0))), (((((/* implicit */_Bool) (unsigned char)152)) ? (0) : (((/* implicit */int) (signed char)1)))))))));
                }
                var_31 = ((/* implicit */int) max((max((((long long int) (unsigned char)110)), (((/* implicit */long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)-2))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) > (9223372036854775807LL))))));
                arr_32 [(signed char)15] [2U] [i_4 - 1] [i_3] = ((/* implicit */unsigned char) ((unsigned short) arr_13 [i_2] [i_4]));
                /* LoopSeq 1 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    arr_35 [i_3] = (-(min(((~(934617022))), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_3))))))));
                    var_32 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4 - 2])) ? (8384995129246121312LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63759))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        arr_38 [5LL] [i_4] [5LL] [12] [i_10] [i_10] = ((short) ((signed char) var_17));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((_Bool) (_Bool)0)))));
                        var_34 -= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [i_9 - 1] [i_9 - 1] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_4 - 2])) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_9])), (arr_33 [i_2] [i_3] [i_4] [i_9] [i_10])))))));
                        arr_39 [i_3] [(unsigned char)6] [i_10] [i_9] [i_10] [i_10] [i_10] = ((max((((/* implicit */long long int) var_8)), (-9223372036854775777LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))));
                        var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned char) arr_7 [i_2] [i_2])), (((/* implicit */unsigned char) arr_22 [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9]))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_19))))), (((((/* implicit */_Bool) arr_33 [i_2] [i_3] [i_4] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_24 [i_10] [i_9] [i_3] [i_3] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) -1LL)))))));
                    }
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)0))) - (((/* implicit */int) (unsigned short)63759)))))));
                }
            }
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_46 [i_2] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_23 [i_2] [i_2] [i_11] [i_12] [i_12] [8LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_2] [i_11] [i_11] [(_Bool)1] [i_2])))));
                arr_47 [i_2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_23 [i_2] [i_11] [(signed char)7] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45)))))) ? (((/* implicit */int) arr_41 [i_2])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)30))))));
            }
            for (unsigned short i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                arr_50 [i_2] [i_11] [i_13] = ((/* implicit */unsigned short) ((arr_27 [i_13 + 2] [i_13 + 1]) / (arr_27 [i_13 - 1] [i_13 + 1])));
                var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_13 - 1] [i_13 + 2] [i_13 + 1]))) + (((274877906943LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_51 [i_2] [i_2] = ((/* implicit */_Bool) var_14);
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)147)) | (arr_16 [i_11] [i_11])));
            }
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_2] [i_11] [i_14] [i_14]))) != (((unsigned int) var_12)))))));
                var_40 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_2] [i_11] [i_14])) ? (((/* implicit */int) arr_54 [i_2] [i_11] [12])) : (((/* implicit */int) arr_54 [i_2] [i_11] [i_2]))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    var_41 ^= ((/* implicit */_Bool) -541553543);
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 1; i_16 < 12; i_16 += 1) /* same iter space */
                    {
                        arr_60 [i_15] = ((/* implicit */int) ((((/* implicit */int) arr_36 [i_2] [i_11] [i_14] [i_16 + 2] [i_16] [i_2])) < (((/* implicit */int) var_1))));
                        arr_61 [i_2] [i_2] [i_14] = ((/* implicit */unsigned long long int) 4579767934187707136LL);
                    }
                    for (unsigned short i_17 = 1; i_17 < 12; i_17 += 1) /* same iter space */
                    {
                        var_42 ^= var_12;
                        arr_64 [i_2] [i_11] [i_15] [(signed char)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_11])) + (2147483647))) << (((arr_56 [i_17 + 1] [i_17 + 4] [i_17] [i_17] [i_17]) + (577084409396319777LL)))));
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)195))))) : (arr_28 [i_2] [i_11] [(unsigned short)12] [12LL] [i_17 - 1])));
                    }
                    for (unsigned short i_18 = 1; i_18 < 12; i_18 += 1) /* same iter space */
                    {
                        var_44 ^= ((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2]);
                        var_45 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_18 + 3]))));
                        var_46 = ((/* implicit */unsigned short) ((_Bool) ((signed char) var_12)));
                    }
                    var_47 = ((/* implicit */_Bool) ((unsigned char) arr_9 [i_2]));
                }
            }
            arr_67 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4322816338120038768LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) : (-4579767934187707136LL)));
            arr_68 [i_2] = ((/* implicit */long long int) (+(376055560)));
        }
        for (short i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2552406757U))))));
            var_49 -= arr_3 [i_2] [i_2] [i_2];
            arr_71 [7] = ((/* implicit */unsigned char) ((unsigned long long int) var_4));
        }
    }
    var_50 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)124))));
}
