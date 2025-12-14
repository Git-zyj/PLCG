/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240442
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
    var_10 = ((/* implicit */unsigned char) var_2);
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) var_0))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) arr_3 [i_0 + 1]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                arr_11 [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))));
                arr_12 [i_2] [i_1] [i_2] = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 4] [i_0 - 4] [0U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
            }
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) arr_6 [i_0 - 4])))));
                    arr_18 [i_0 + 1] [i_4] [i_4 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_4] [i_4] [i_0 - 1]))));
                    var_14 = ((/* implicit */unsigned char) ((_Bool) var_1));
                    arr_19 [i_4] = var_1;
                }
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_1] [(unsigned short)8])) == ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_3])))))))));
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 18; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */signed char) ((short) ((var_5) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [(short)10] [i_0])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_5] [(_Bool)1])))));
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3)))) && ((!(((/* implicit */_Bool) (short)-10))))));
                        }
                    } 
                } 
            }
            arr_25 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62242)) - ((-(((/* implicit */int) (unsigned char)0))))));
            var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) (unsigned char)37))))));
            arr_26 [i_1] [i_0] [i_0] = ((/* implicit */short) arr_9 [(unsigned char)16]);
        }
        for (signed char i_7 = 3; i_7 < 18; i_7 += 3) /* same iter space */
        {
            var_19 -= ((/* implicit */short) max(((+(((/* implicit */int) (short)-31478)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_1))))))));
            arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) 3418284241U);
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                arr_33 [i_7] [i_7 - 1] = ((/* implicit */signed char) (_Bool)1);
                arr_34 [i_0] [16LL] &= ((/* implicit */_Bool) max((max(((+(((/* implicit */int) var_2)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (unsigned char)218)))))), (((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0 + 1] [i_8])) + (2147483647))) << (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) ((_Bool) (unsigned char)87))) : (((/* implicit */int) arr_32 [i_0 + 4] [i_7 + 2] [i_7 + 1] [i_7 + 1]))))));
            }
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                var_20 = ((/* implicit */signed char) (-(max(((~(((/* implicit */int) arr_15 [i_9] [i_7] [i_7 + 2] [i_7] [i_0 + 3])))), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 3] [i_7] [i_0]))))));
                arr_37 [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) ((_Bool) var_8));
                /* LoopSeq 1 */
                for (signed char i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    arr_41 [i_7] [i_10 - 1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) min(((unsigned char)37), (((/* implicit */unsigned char) arr_32 [i_0] [i_7] [i_9] [i_10 + 1]))))))));
                    arr_42 [i_10] [i_10] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) var_0))) > (((/* implicit */int) ((unsigned short) arr_7 [i_9] [i_10]))))) ? ((~(((/* implicit */int) arr_38 [i_0 + 2] [i_7 - 1] [i_7] [i_7 + 1] [i_10 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_17 [i_10] [i_7])) <= (((/* implicit */int) arr_17 [i_0] [i_7])))))));
                }
                arr_43 [i_0 - 1] [i_0] [(unsigned short)0] [i_0] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_7] [i_7 - 3] [i_7] [i_7] [(unsigned short)10] [i_7 + 2]))));
            }
            /* vectorizable */
            for (short i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0 + 4] [i_7 - 1])) ? (((/* implicit */int) arr_15 [i_0 - 3] [i_0] [i_7 - 2] [i_7] [i_7])) : (((/* implicit */int) arr_23 [i_7] [i_7] [i_7 - 1] [i_11 + 1] [i_11]))));
                arr_46 [i_0] [i_7] [i_0] [i_0] = (!(var_4));
                arr_47 [i_7] [i_0 - 2] [i_0 - 2] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_7 - 3] [i_7] [i_7] [i_0 + 2])) - ((-(((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_7 + 2] [i_7 - 1])) || (((/* implicit */_Bool) arr_7 [i_7 - 2] [i_7 - 1])))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (_Bool)1))));
                }
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_14 [i_11] [i_7 + 2] [i_11 - 1])) : (((/* implicit */int) arr_14 [i_0 + 2] [i_13] [i_11 + 1])))))));
                        var_25 *= ((/* implicit */unsigned char) ((short) arr_50 [i_7] [i_7]));
                        arr_56 [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) (((+(((/* implicit */int) var_3)))) * (((((/* implicit */int) arr_49 [i_0] [i_0] [i_13] [i_14])) >> (((arr_55 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_13] [i_13] [(unsigned short)10]) - (4084143557U)))))));
                    }
                    arr_57 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_52 [i_0] [i_0 + 4]))));
                }
                arr_58 [i_0] [i_7] [i_11] [i_11] = ((/* implicit */signed char) (+(arr_55 [i_7] [i_7 - 3] [i_7 - 1] [i_7] [i_7] [i_7])));
            }
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) min((max((var_9), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) ((_Bool) (signed char)0)))))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [(unsigned char)10] [i_0] [(unsigned char)10])), (arr_22 [i_0 - 4] [i_7 + 2] [i_0] [i_0 + 3])))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((((/* implicit */int) (short)19287)) == (((/* implicit */int) (signed char)59))))))) - (229))))))));
        }
        for (signed char i_15 = 3; i_15 < 18; i_15 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) max(((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)218))))))), ((+(((/* implicit */int) arr_49 [i_0 + 4] [i_0 + 4] [i_0 + 1] [i_0 - 1]))))));
            arr_61 [i_0] [i_0 - 3] [i_15] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [i_15 - 2]);
            arr_62 [i_15] = ((/* implicit */unsigned char) ((((var_4) ? (((/* implicit */int) arr_28 [i_0] [i_0])) : (((/* implicit */int) var_8)))) - (((/* implicit */int) ((((/* implicit */int) (signed char)84)) == (((/* implicit */int) (unsigned short)21624)))))));
            arr_63 [i_0] [i_15] = max((((unsigned int) var_3)), (((/* implicit */unsigned int) max((((/* implicit */int) arr_32 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_15 - 1])), (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
            var_28 -= ((/* implicit */short) (~(((/* implicit */int) max((max((var_7), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((unsigned char) (short)0))))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_29 = ((((max((((/* implicit */long long int) 3578701375U)), (1123700883587072LL))) % (((/* implicit */long long int) (~(((/* implicit */int) (short)7))))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51333))))) << (((-2573032493420667510LL) + (2573032493420667517LL))))));
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                for (signed char i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_52 [i_18 + 1] [i_18 - 1])) < (((/* implicit */int) ((unsigned char) (unsigned short)65535)))))) & (max((((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)18152)))), (((/* implicit */int) var_3))))));
                        var_31 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)214)) == (((/* implicit */int) var_3))))) - (((/* implicit */int) arr_71 [i_0 + 4] [i_16] [i_16]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 3) /* same iter space */
                        {
                            arr_74 [i_0] [i_0] [i_16] [i_17] [i_17] [i_16] [i_19] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (arr_55 [i_0] [i_16] [i_17] [i_18] [i_19] [i_16])));
                            var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_0] [i_0] [(signed char)14])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) : (((unsigned int) 7985205368386376705LL))));
                            var_33 = arr_10 [i_16] [i_17] [i_16];
                        }
                        for (long long int i_20 = 0; i_20 < 20; i_20 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (((((_Bool)1) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) min((max(((short)7), (((/* implicit */short) (unsigned char)218)))), (((/* implicit */short) ((unsigned char) var_1)))))) : ((((+(((/* implicit */int) (unsigned short)30472)))) - (((/* implicit */int) (_Bool)1)))))))));
                            arr_78 [i_0] [i_16] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_21 [i_18] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_16] [i_18 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_18] [i_18 - 1] [i_18 - 1] [i_18 + 1] [i_16] [i_16]))))));
                        }
                        for (long long int i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26))))) | ((((+(((/* implicit */int) (_Bool)1)))) / ((~(((/* implicit */int) (_Bool)1))))))));
                            var_36 |= ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_55 [i_0] [i_16] [i_17] [i_17] [i_18 - 1] [16U])) || (((/* implicit */_Bool) (unsigned char)123)))) ? (max((((/* implicit */long long int) var_4)), (1123700883587072LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)37183))))))) < (((/* implicit */long long int) (-(((/* implicit */int) arr_76 [i_0 - 1] [i_18 + 1])))))));
                        }
                        for (unsigned short i_22 = 3; i_22 < 17; i_22 += 3) 
                        {
                            arr_85 [i_16] [i_16] [i_22] = ((/* implicit */signed char) arr_77 [i_22] [i_18 + 1] [i_18 - 1] [i_17] [i_17] [i_16] [i_0]);
                            var_37 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max(((signed char)26), ((signed char)48))))) < (((/* implicit */int) max(((unsigned short)27613), (((/* implicit */unsigned short) arr_73 [i_0] [i_0] [i_18] [i_18] [i_22 + 3])))))));
                            var_38 &= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_82 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18] [i_17] [i_0 - 2] [i_0])), (var_1)))) | (((/* implicit */int) max((arr_51 [i_18] [i_18 - 1] [i_18] [i_18]), (arr_51 [i_18] [i_18 + 1] [i_18] [i_18]))))));
                            var_39 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        arr_86 [i_0 + 2] [i_16] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_67 [i_0] [i_0] [i_16])))))) ? (((((((/* implicit */int) arr_50 [i_0 - 4] [i_17])) <= (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) (_Bool)1)))) : ((((+(((/* implicit */int) (unsigned short)19240)))) / (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_5))))))));
                        var_40 = ((/* implicit */_Bool) ((signed char) ((((unsigned int) (unsigned char)218)) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 4] [i_16]))))));
                    }
                } 
            } 
        }
        var_41 -= ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
        var_42 *= (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_45 [i_0 - 2] [i_0] [i_0 + 3] [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_24 = 3; i_24 < 10; i_24 += 3) 
        {
            var_43 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_23] [i_24 - 1] [i_23] [(signed char)16] [i_24 - 3])) | (((/* implicit */int) (unsigned char)142))));
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 12; i_25 += 3) 
            {
                arr_95 [i_24] [i_24] [i_24] [i_25] = ((/* implicit */_Bool) var_1);
                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) arr_93 [i_23] [i_23] [(unsigned char)0]))));
                var_45 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_39 [i_24] [i_24 - 1] [i_24 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)195)))));
            }
            arr_96 [i_24] [i_23] = ((/* implicit */signed char) var_5);
            var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_84 [i_23] [i_24 - 2] [i_24 + 1] [i_23] [i_24]))));
        }
        arr_97 [i_23] [i_23] = ((/* implicit */unsigned char) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)18167))))), (arr_39 [(unsigned char)14] [i_23] [i_23])));
        arr_98 [i_23] = ((/* implicit */unsigned short) 2090017667U);
    }
    for (unsigned char i_26 = 0; i_26 < 15; i_26 += 3) 
    {
        var_47 += ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_26] [i_26] [i_26] [i_26] [i_26]))) + (arr_27 [i_26] [i_26] [i_26]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        arr_101 [i_26] [i_26] |= ((/* implicit */signed char) (_Bool)1);
    }
    var_48 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_4)))));
}
