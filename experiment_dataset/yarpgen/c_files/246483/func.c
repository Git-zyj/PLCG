/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246483
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (((-(71916856549572608ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2]))))))));
                arr_6 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1065353216U)) ? (71916856549572610ULL) : (18374827217159979007ULL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) 18374827217159979008ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (((((/* implicit */_Bool) 71916856549572618ULL)) ? (var_6) : (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] |= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 3 */
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            arr_15 [6ULL] [i_3 + 1] [6ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)46))))) : ((-((~(71916856549572611ULL)))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                for (unsigned short i_5 = 3; i_5 < 15; i_5 += 3) 
                {
                    {
                        arr_20 [i_4] [(unsigned short)6] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18374827217159978992ULL) > (18374827217159978998ULL))))) < (71916856549572618ULL)));
                        arr_21 [i_5 - 2] [(unsigned short)0] [(unsigned short)0] [i_2 + 2] |= ((/* implicit */unsigned char) arr_9 [i_4]);
                    }
                } 
            } 
            arr_22 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_3 - 2])) >= (((/* implicit */int) var_9))))) << (((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_7 [i_3 + 1]))))) - (51972)))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_6 + 1])) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_9 [i_6 + 1])))))));
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [(unsigned short)0])) ? (71916856549572608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
            arr_26 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-120))));
            arr_27 [i_2] [i_6 - 2] = ((/* implicit */unsigned int) ((unsigned short) (unsigned char)209));
        }
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_31 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_11))))));
            arr_32 [i_2] [(signed char)10] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_2]))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_29 [i_2] [i_7] [i_2]))) : (arr_18 [i_7] [i_7] [i_2 + 2])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_7]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (7686865459903743004ULL) : (var_6))) > (71916856549572632ULL))))));
                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (18374827217159979007ULL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((unsigned char) arr_5 [i_2])))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                {
                    arr_37 [i_2 - 1] [i_2 - 1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)120)) ? (18374827217159979008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_9 + 1])))))));
                    arr_38 [i_2] [i_7] [i_8] [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8]))) | (var_5)));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_7 [i_2 + 2]))));
                    arr_39 [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_9 + 1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_2])))) : (((((/* implicit */_Bool) (unsigned short)30457)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (18374827217159979007ULL)))));
                }
                for (unsigned short i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    arr_42 [i_10] [(unsigned char)6] [i_7] [(unsigned char)6] [i_2] |= ((unsigned short) 18374827217159979003ULL);
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)66)))))));
                }
                var_28 = ((/* implicit */signed char) arr_28 [i_2 + 1]);
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    arr_49 [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)198))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)66)))))))) & (((/* implicit */int) var_12))));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056964608ULL)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (unsigned char)188))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_35 [i_2 + 2] [i_2 + 1]))))))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    arr_52 [i_2 - 1] [i_2 - 1] [i_7] [i_11] [i_2 - 1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_48 [i_7] [i_7])) & (((/* implicit */int) arr_48 [i_2] [i_7]))))));
                    arr_53 [i_7] [i_7] [i_11 - 3] [i_11 - 3] = arr_14 [i_7];
                }
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    arr_58 [i_2] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)213))));
                    var_31 = arr_17 [i_7] [i_7];
                }
                /* vectorizable */
                for (unsigned short i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    arr_61 [i_2] [i_7] [i_2 + 2] [i_2] = ((/* implicit */unsigned int) ((signed char) var_0));
                    arr_62 [i_2] [i_7] [i_11] [(unsigned short)0] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)206)) ? (71916856549572618ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (71916856549572590ULL)));
                }
                for (unsigned char i_16 = 1; i_16 < 15; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned char)209))))) ? (((((/* implicit */_Bool) 71916856549572618ULL)) ? (18374827217159979026ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))));
                        arr_69 [i_17] [(unsigned short)5] [i_7] [i_11] [i_7] [i_7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_13 [i_7])) == (max((((/* implicit */unsigned long long int) (unsigned short)42191)), ((~(18374827217159979007ULL)))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_63 [i_11 - 2] [i_11] [i_11 - 1] [i_11 - 1]) ? (((/* implicit */int) arr_8 [i_16 + 1])) : (((/* implicit */int) arr_47 [i_17] [i_7] [2ULL] [i_7] [i_11 - 1]))))) ? ((~(var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_46 [i_7] [i_11] [i_17]))))))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        arr_72 [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) : (18374827217159979007ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_2] [i_2] [i_11 + 2] [i_16] [i_18] [i_11 - 1] [i_18])) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)46)))))))) : (((/* implicit */int) arr_28 [i_16]))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_41 [i_18] [(unsigned short)2] [i_11 - 2] [(unsigned short)2] [i_2 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 2; i_19 < 17; i_19 += 3) 
                    {
                        var_35 = max((((18374827217159978986ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26)))))))), (((/* implicit */unsigned long long int) (signed char)96)));
                        var_36 -= ((/* implicit */unsigned int) var_16);
                    }
                    arr_76 [i_7] = ((/* implicit */unsigned short) arr_66 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16]);
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65519))));
                }
                var_38 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_59 [i_2] [i_2 + 1] [i_11 - 1] [i_11 - 2])) ? (((/* implicit */int) arr_59 [i_2] [i_2 + 2] [i_11 - 3] [i_11 + 1])) : (((/* implicit */int) arr_59 [i_2] [i_2 + 1] [i_11 - 3] [i_11 - 3]))))));
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((18374827217159979009ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_7] [i_11 - 1] [(unsigned short)7]))))) ? (((((/* implicit */_Bool) arr_45 [i_2] [i_11 + 2] [i_11])) ? (((/* implicit */int) arr_45 [(unsigned char)9] [i_11 - 2] [i_11])) : (((/* implicit */int) arr_45 [i_11] [i_11 - 1] [i_11])))) : (((/* implicit */int) max((arr_45 [i_7] [i_11 - 1] [i_11 - 2]), ((unsigned short)12)))))))));
            }
            for (signed char i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_21 = 3; i_21 < 15; i_21 += 3) 
                {
                    arr_81 [i_2 + 1] [i_7] [(unsigned short)8] [i_21 - 2] &= arr_45 [i_21 - 3] [i_21] [i_21 - 2];
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) 71916856549572584ULL))));
                }
                for (unsigned short i_22 = 3; i_22 < 14; i_22 += 3) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (18374827217159978998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_7])))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (unsigned char)214)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : ((-(((((/* implicit */_Bool) (unsigned char)60)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2 - 1])))))))));
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_82 [i_22]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */unsigned long long int) arr_46 [(unsigned short)0] [i_7] [(signed char)8])) : (arr_74 [i_2 + 1] [i_2] [i_2] [(unsigned short)9] [(unsigned short)9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_2] [i_7] [i_7] [i_22 + 3] [i_22 - 3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65523)) <= (((/* implicit */int) var_1)))))) + (71916856549572635ULL))))))));
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58714)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_14)))))));
                }
                for (unsigned short i_23 = 0; i_23 < 18; i_23 += 3) 
                {
                    arr_86 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_7] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_2), (var_7))))))) & ((-(((((/* implicit */_Bool) var_10)) ? (71916856549572576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    arr_87 [8ULL] [i_7] [i_7] [8ULL] [8ULL] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)12)))));
                }
                var_44 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) : (18374827217159979011ULL)))) || (((/* implicit */_Bool) var_3))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)57)))))));
                arr_88 [i_7] = ((/* implicit */unsigned int) var_8);
            }
        }
    }
}
