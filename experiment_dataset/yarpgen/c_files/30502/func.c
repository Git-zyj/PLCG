/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30502
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
    var_15 += ((/* implicit */signed char) -6797215599814145726LL);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)71)))));
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((max((((/* implicit */long long int) ((((/* implicit */_Bool) 3466669269U)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (short)-30545))))), ((-(arr_0 [i_0]))))) - (40LL)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned int) ((((_Bool) (_Bool)0)) ? (arr_6 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-4437))))))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_6 [(signed char)2]))));
            arr_10 [i_1] = ((/* implicit */signed char) max((var_14), (((/* implicit */unsigned int) (_Bool)1))));
            arr_11 [i_2] [2U] [i_1] &= ((/* implicit */_Bool) max((max((arr_6 [(short)10]), (arr_6 [10LL]))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)1))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                arr_19 [i_4] [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) arr_1 [i_1 - 1] [i_1]);
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    arr_22 [i_3 - 1] [i_5] [i_4] [i_3 - 1] [i_5] [i_1] |= ((/* implicit */short) (((_Bool)1) ? (((unsigned int) 0U)) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))) : (arr_12 [i_1 - 1] [i_4] [i_5])))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((arr_4 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1)))))))));
                    arr_23 [i_1] [i_3] [i_1] [i_5] = ((/* implicit */short) ((unsigned int) var_3));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) arr_25 [i_1] [i_3 + 1] [i_3 + 1] [i_5] [i_1])))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_6] [i_6] [i_3 - 3] [i_1] [i_6])) & (((/* implicit */int) (_Bool)1))))) : (arr_6 [i_1])));
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        arr_29 [i_1] [i_1 - 1] [i_1] [i_1] [i_7] &= ((/* implicit */short) ((((/* implicit */_Bool) -8911613521474442129LL)) ? (2397289854U) : (arr_6 [i_7])));
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) (short)18191))));
                        var_22 = ((/* implicit */signed char) ((long long int) arr_5 [i_1 - 1]));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_0 [i_3]))));
                        arr_30 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_16 [i_1]))) ? (((unsigned int) (short)9025)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_31 [i_1] [i_1] [i_1] [i_1] [i_5] [i_4] = ((/* implicit */short) arr_1 [i_1 - 1] [i_1 - 1]);
                }
                for (signed char i_8 = 3; i_8 < 11; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1])));
                        arr_36 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((_Bool) arr_1 [i_8 - 3] [i_8 - 3]);
                    }
                    var_25 = ((/* implicit */signed char) (_Bool)1);
                    arr_37 [i_1] [i_3 - 3] [i_1] [i_4] [i_8] [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_13 [i_1]))));
                    var_26 = ((/* implicit */short) ((arr_13 [i_1]) ? (((arr_8 [i_1 - 1] [i_3] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1] [i_1] [i_1 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1])))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    var_27 += ((/* implicit */short) (~(((unsigned int) 2397289884U))));
                    arr_42 [i_1] [i_3 + 1] [i_4] [i_10 - 2] = ((/* implicit */signed char) ((long long int) arr_33 [i_3] [i_3] [i_3]));
                    var_28 = ((/* implicit */unsigned int) ((-1505945798406739292LL) | (((/* implicit */long long int) var_3))));
                }
                for (long long int i_11 = 3; i_11 < 9; i_11 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 &= ((arr_28 [i_12] [i_12] [i_11 + 1] [i_11] [i_3 - 2]) ? (arr_45 [i_1] [i_1] [4LL] [i_1] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_3 - 2] [i_3] [i_4]))));
                        arr_47 [i_1 - 1] [i_3] [i_4] [i_1] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */int) arr_9 [i_1 - 1])) : (((/* implicit */int) arr_14 [i_1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_5 [i_12]) : (((/* implicit */long long int) 0U)))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((signed char) ((-4199940406606166422LL) < (arr_0 [i_3]))))));
                        var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (arr_35 [i_1 - 1] [i_1] [i_1 - 1]) : (4751367647936219894LL)));
                    }
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((_Bool) arr_18 [(short)4])))));
                    var_33 = ((/* implicit */long long int) arr_26 [i_1]);
                }
                var_34 &= ((/* implicit */unsigned int) arr_41 [i_1 - 1] [i_3]);
            }
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                for (signed char i_14 = 3; i_14 < 11; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 10; i_15 += 4) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-41)) ? (arr_21 [i_1] [i_1] [i_1 - 1] [i_3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_1])) ? (((/* implicit */int) (short)26435)) : (((/* implicit */int) arr_16 [i_1])))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_13])) ? (arr_0 [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1])))))) ? (((arr_12 [i_1 - 1] [i_1 - 1] [i_13]) + (var_7))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767))))))))));
                        }
                        arr_57 [i_1] [i_13] [i_1] [i_1 - 1] [i_1 - 1] [i_1] |= ((-4786574626518622410LL) != (-8675542146876939469LL));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned int) (signed char)-11);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((long long int) (_Bool)1)))));
                        }
                        for (short i_20 = 0; i_20 < 12; i_20 += 1) /* same iter space */
                        {
                            arr_70 [i_1] [i_16] [i_17] [i_18] [i_17] = ((/* implicit */unsigned int) (short)6887);
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-11433), (max((((/* implicit */short) arr_40 [i_1 - 1] [i_17] [i_1] [i_20])), ((short)8802)))))) ? (arr_41 [i_1 - 1] [i_18]) : (((/* implicit */long long int) max((max((4294967295U), (((/* implicit */unsigned int) (signed char)-92)))), (((/* implicit */unsigned int) arr_46 [i_20] [i_18] [i_17] [i_17] [i_16] [i_1 - 1])))))));
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_27 [i_1] [(short)10] [i_17])) >= (((/* implicit */int) arr_28 [i_1 - 1] [i_1 - 1] [i_17] [i_18] [i_20])))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (short)10079)) | (((/* implicit */int) (short)7)))))))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_21 = 1; i_21 < 10; i_21 += 1) 
                        {
                            var_41 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)99))) <= (3659860551U)));
                            arr_74 [i_1] [i_17] [i_18] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (var_0)));
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_39 [i_1] [i_1] [i_1 - 1] [i_21 + 2])), (arr_34 [i_1 - 1] [i_1] [i_1 - 1] [i_21 - 1] [i_21 + 2] [i_1 - 1] [i_21 + 2]))), (((/* implicit */unsigned int) arr_39 [i_1] [i_1] [i_1 - 1] [i_21 + 1])))))));
                            arr_75 [i_1] [i_1] [i_18] [i_1] = ((/* implicit */signed char) arr_39 [i_1] [i_16] [i_1] [i_21]);
                        }
                        for (unsigned int i_22 = 4; i_22 < 11; i_22 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_7 [i_18]), (((arr_76 [i_1 - 1] [i_1 - 1] [i_18] [i_22]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_1 - 1] [i_17]))))))))));
                            var_44 = ((/* implicit */short) (-(((/* implicit */int) (signed char)127))));
                            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (signed char)-77))));
                            var_46 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1])) ? (1897677442U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */int) max((arr_9 [i_1 - 1]), (arr_39 [i_1] [i_16] [i_17] [i_18])))) : (((/* implicit */int) arr_62 [i_22] [i_1] [i_1] [i_1])))));
                        }
                        for (unsigned int i_23 = 4; i_23 < 11; i_23 += 1) /* same iter space */
                        {
                            arr_82 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] = arr_9 [i_1];
                            arr_83 [i_16] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_18])) % (((/* implicit */int) ((_Bool) var_4)))));
                            var_47 = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)-118)), (max((((/* implicit */short) arr_60 [i_16] [i_1] [i_18] [i_18])), (arr_51 [i_18] [i_18] [i_18] [i_18])))));
                        }
                        arr_84 [i_1] [i_16] [i_1] [i_1] = ((/* implicit */unsigned int) arr_67 [i_18] [i_1] [i_16] [i_1] [i_1 - 1]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_24 = 0; i_24 < 12; i_24 += 1) 
                        {
                            var_48 = ((/* implicit */short) (signed char)1);
                            arr_89 [i_1] [i_1] [i_17] [i_17] [i_18] [i_1] = ((_Bool) (signed char)76);
                            var_49 = ((/* implicit */short) (signed char)-19);
                            var_50 &= ((/* implicit */signed char) (_Bool)1);
                        }
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) arr_60 [i_1 - 1] [10U] [i_17] [i_18]))));
                            arr_94 [i_17] [i_1] [i_17] = ((/* implicit */long long int) (_Bool)1);
                            arr_95 [i_18] [i_1] [(signed char)2] [i_25] [i_17] &= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */long long int) max((arr_80 [i_1] [6U] [6U] [i_17] [6U] [i_18] [i_18]), (3959984000U)))) : (arr_41 [i_1 - 1] [i_25]))) % (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-19764))))))))));
                            var_52 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_21 [i_17] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_27 [i_16] [i_1] [i_1 - 1])) : (((/* implicit */int) (short)32592)))) == (((/* implicit */int) ((((/* implicit */int) arr_32 [i_1 - 1])) > (((/* implicit */int) arr_32 [i_1 - 1])))))));
                        }
                        for (unsigned int i_26 = 0; i_26 < 12; i_26 += 4) 
                        {
                            arr_98 [i_1] = ((/* implicit */short) 4292908559614172834LL);
                            arr_99 [i_1] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_62 [i_1] [i_16] [i_18] [i_26])) : (((arr_59 [i_1]) ? (((/* implicit */int) arr_72 [i_17] [i_17])) : (((/* implicit */int) arr_62 [i_26] [i_18] [i_16] [i_1 - 1]))))));
                            arr_100 [i_1] [i_16] [i_1] [i_1] [i_26] = ((/* implicit */signed char) ((short) 8488908507440958721LL));
                            var_53 = ((arr_64 [i_26] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) arr_48 [i_1] [i_1] [i_1] [i_1])) : (((long long int) (-(((/* implicit */int) arr_53 [i_1 - 1] [i_17]))))));
                        }
                        for (signed char i_27 = 0; i_27 < 12; i_27 += 2) 
                        {
                            arr_105 [i_1] = ((/* implicit */long long int) arr_48 [i_17] [i_17] [i_16] [i_1]);
                            var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_46 [i_1 - 1] [i_16] [i_16] [i_16] [i_18] [i_16])) + (((/* implicit */int) arr_86 [i_17] [i_27]))))))))));
                        }
                        var_55 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) >= ((-(((/* implicit */int) ((_Bool) arr_12 [i_1 - 1] [i_16] [i_1 - 1])))))));
                    }
                } 
            } 
            var_56 &= arr_20 [i_1] [i_16] [i_1] [i_1 - 1] [i_1];
            var_57 = ((/* implicit */signed char) ((unsigned int) (short)18197));
            var_58 += ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) / (((unsigned int) arr_56 [i_1 - 1] [(_Bool)0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
        }
        var_59 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((0U), (arr_48 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))) ? (((((/* implicit */_Bool) arr_41 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_97 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])))));
    }
}
