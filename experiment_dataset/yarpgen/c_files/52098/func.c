/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52098
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)14737)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned short)65291))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(var_10))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) ((int) (unsigned short)215))) : ((~(arr_3 [i_3])))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (unsigned short)50803))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_4] [i_0] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_18 = arr_20 [i_0] [i_1] [i_1] [i_0] [i_5];
                            arr_21 [i_4] [i_4] [i_4] [i_4] [i_0] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)48);
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2] [i_4] [i_6]);
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)208)) <= (((/* implicit */int) (unsigned char)0))))) | (var_15)));
                        }
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_0 [i_1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 ^= ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_2 [i_7])));
                            var_23 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)168))));
                            var_24 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_4])))))));
                            arr_26 [i_0] [i_1] [i_2] [(unsigned char)7] [i_7] = ((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_0] [i_1] [i_1] [i_4] [i_7]));
                            var_25 += ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_2] [i_4] [i_7]);
                        }
                    }
                    var_26 -= ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_34 [i_0] [i_9] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_6 [i_10] [i_8] [i_0])) - (((/* implicit */int) (unsigned char)255)))));
                        arr_35 [i_10] [i_10] [i_10] [i_0] = ((unsigned char) (unsigned char)207);
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_39 [i_0] [i_8] [i_9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) | (((/* implicit */int) arr_38 [i_0] [i_8] [i_9] [i_0] [i_11]))))) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)0] [i_0])) : (((/* implicit */int) var_0))));
                            var_27 |= ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                            arr_40 [i_0] [i_0] [i_9] = ((/* implicit */_Bool) (~(arr_23 [(unsigned short)6] [i_11 - 1] [i_11 - 1] [i_11 - 1] [(unsigned short)6] [i_11 - 1] [i_0])));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((unsigned short) (-(var_1))));
                            var_29 = ((/* implicit */int) (unsigned short)52559);
                            arr_43 [i_0] [i_10] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)43964)) ? (((/* implicit */int) arr_8 [i_0] [i_9] [i_8] [(unsigned char)14])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(var_14)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)22)))) : (((((/* implicit */_Bool) (unsigned short)11376)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)11836))))));
                            arr_47 [i_0] [i_8] [i_9] [i_10] [i_10] = ((((/* implicit */int) arr_15 [i_0] [i_8] [i_9] [i_10])) != (((int) 2129385494)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            var_31 = ((unsigned char) ((unsigned long long int) (_Bool)0));
                            arr_51 [i_0] [i_9] [i_8] [i_10] [i_14] &= ((/* implicit */int) ((unsigned char) arr_0 [i_0]));
                            arr_52 [i_0] [i_8] = ((/* implicit */unsigned short) arr_10 [i_0] [i_9] [i_0] [i_14] [(unsigned char)12] [(unsigned char)12]);
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(arr_5 [i_9] [i_10] [i_14]))))));
                        }
                        var_33 ^= 1099511627775ULL;
                        var_34 += arr_25 [(_Bool)1] [(_Bool)0] [i_0] [i_0] [i_0];
                    }
                } 
            } 
            var_35 = ((/* implicit */_Bool) max((var_35), ((!(((/* implicit */_Bool) (~(var_14))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_8] [i_15] [i_8] [i_15] [i_15])) * (((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))))));
                arr_55 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_3))))) && (arr_32 [i_0] [i_0] [i_15] [i_8] [(unsigned char)0])));
                arr_56 [i_0] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31682))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) var_9);
            arr_59 [i_0] = ((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_16]);
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_18 = 3; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) ((((var_8) ? (var_7) : (((/* implicit */int) arr_24 [i_0] [i_16] [i_19])))) ^ ((~(((/* implicit */int) (unsigned char)72))))));
                            arr_66 [i_0] [i_16] [i_17] [i_0] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_17] [i_17] [i_0] [i_17])) || (((/* implicit */_Bool) (unsigned char)17))));
                            var_40 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_41 [i_0] [i_0] [i_16] [i_16] [i_17] [i_18 - 2] [i_19])) > (((/* implicit */int) arr_62 [i_0] [i_0] [i_0] [i_18])))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_16] [i_16] [i_17] [i_17] [i_17])) ^ (((/* implicit */int) arr_19 [i_0] [i_0] [i_17] [i_0] [i_0] [i_17]))));
                var_42 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_16] [i_17]);
                arr_67 [i_0] [i_17] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)208));
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 16; i_20 += 1) 
                {
                    for (int i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */int) arr_57 [i_0] [i_20] [i_21]);
                            arr_74 [i_0] [i_20] [i_17] [(unsigned char)2] [i_16] [i_16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned char)208))));
                            var_44 = ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_20] [i_21] [i_21]))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31667))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_22 = 0; i_22 < 16; i_22 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned char) 24);
            arr_77 [(unsigned char)8] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [(unsigned char)0]))));
            /* LoopSeq 3 */
            for (unsigned char i_23 = 0; i_23 < 16; i_23 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned short i_25 = 0; i_25 < 16; i_25 += 3) 
                    {
                        {
                            arr_85 [i_0] [i_0] [i_23] [i_24] = ((/* implicit */unsigned long long int) arr_7 [0] [i_22] [i_22] [i_0]);
                            arr_86 [i_0] [i_22] [i_0] [i_24] [(unsigned char)8] = ((/* implicit */unsigned char) (unsigned short)58090);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 1) 
                {
                    for (unsigned char i_27 = 0; i_27 < 16; i_27 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_0] [i_22] [i_23] [i_26] [i_27] [i_27]))));
                            var_47 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_58 [i_0] [i_22]))));
                        }
                    } 
                } 
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_48 = ((/* implicit */int) min((var_48), ((((((~(((/* implicit */int) var_3)))) + (2147483647))) >> (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned char)154)) - (150)))))))));
                var_49 = ((/* implicit */unsigned short) min((var_49), (((/* implicit */unsigned short) ((unsigned long long int) arr_20 [i_28] [(unsigned char)0] [i_22] [(unsigned char)0] [i_0])))));
            }
            for (unsigned char i_29 = 0; i_29 < 16; i_29 += 2) 
            {
                var_50 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)48));
                var_51 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)31682)) <= (((/* implicit */int) (unsigned char)13))))) << (((/* implicit */int) (unsigned char)0))));
            }
            var_52 = ((/* implicit */unsigned char) (!(arr_80 [i_0])));
        }
        var_53 = ((/* implicit */int) ((((/* implicit */_Bool) arr_58 [i_0] [i_0])) && (((/* implicit */_Bool) arr_58 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            for (unsigned long long int i_31 = 0; i_31 < 16; i_31 += 2) 
            {
                {
                    arr_101 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_0] [i_0] [i_0] [(unsigned char)4] [i_0] [(unsigned char)4])) + (((/* implicit */int) arr_25 [i_0] [(_Bool)0] [(_Bool)0] [i_30] [i_30]))));
                    var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((4410639027214564182ULL) >> (((/* implicit */int) arr_11 [(unsigned short)1] [i_30] [i_30] [i_30] [i_30] [(_Bool)1])))))));
                    var_55 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)120)))) | (((/* implicit */int) var_11))));
                }
            } 
        } 
        var_56 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)31673))));
    }
    var_57 += var_0;
    var_58 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_10)), (var_11)))), ((unsigned short)31729)))) ? (((/* implicit */int) min((min(((unsigned short)53699), (((/* implicit */unsigned short) (unsigned char)13)))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), (var_4))))))) : (((/* implicit */int) var_6))));
    var_59 = ((/* implicit */unsigned short) ((unsigned char) var_0));
}
