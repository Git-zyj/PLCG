/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33270
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
        var_18 = ((unsigned char) (unsigned short)688);
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_2]);
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((short) -9223372036854775806LL));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_4])) ? (arr_14 [i_1] [i_2] [i_3] [i_5]) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) 803522752)) : (arr_4 [i_4 + 1])));
                            arr_17 [i_1] [i_5] = ((/* implicit */short) var_11);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)64848))));
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_22 = ((unsigned long long int) arr_22 [i_1] [i_6] [i_7] [i_7]);
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 3277854621741986660ULL)) || (((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6] [i_6 - 1] [i_6 + 1]))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_24 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (10692244543764346789ULL) : (var_12));
                    arr_29 [i_9] [i_8] [i_8] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))));
                    var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_27 [i_1] [i_1] [i_1])));
                    var_26 = ((/* implicit */unsigned long long int) ((arr_15 [i_6 + 1] [i_6 + 1]) ? (((/* implicit */int) arr_15 [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) arr_15 [i_6 + 1] [i_6 + 1]))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(var_4))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_33 [i_1] [i_6 + 1] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((long long int) 13ULL));
                    var_28 = ((/* implicit */unsigned short) 10692244543764346773ULL);
                    var_29 = ((/* implicit */unsigned long long int) ((arr_24 [i_6 - 1] [i_6 - 1] [i_8] [i_6 + 1]) + (((/* implicit */int) var_1))));
                    arr_34 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) ((var_0) ? (arr_14 [i_1] [i_6] [i_8] [i_6 - 1]) : (var_8)));
                }
                var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 5850313299750294363ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) arr_25 [i_1] [i_6 - 1] [i_11 + 1] [i_11 + 1]))));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])))))));
                        var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 1580209382U))));
                    }
                }
            }
            /* LoopSeq 3 */
            for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                arr_43 [i_13] [i_6] = (~(((/* implicit */int) var_1)));
            }
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                arr_47 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6 - 1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5))))))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    var_35 ^= ((/* implicit */int) 0ULL);
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (arr_3 [i_6 - 1] [i_6 + 1])));
                    var_37 = (((_Bool)1) ? (11ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_15])));
                }
                var_38 = arr_39 [i_6];
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        {
                            var_39 = (_Bool)1;
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) % (((((/* implicit */_Bool) 14089162943453541021ULL)) ? (17592186044415ULL) : (3755446446176961775ULL))))))));
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1493892077525844477ULL))));
                var_42 = ((/* implicit */unsigned long long int) ((unsigned int) 11554205382181710911ULL));
                arr_60 [i_1] [i_1] [i_18] = ((/* implicit */short) ((var_15) ? (((15168889451967564934ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : ((+(18446744073709551600ULL)))));
                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((var_5) << (((/* implicit */int) (unsigned char)0)))) - (1221038129758553924LL)))));
            }
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (var_8) : (((/* implicit */int) var_2))));
            var_45 *= ((/* implicit */_Bool) ((((long long int) var_1)) ^ (((/* implicit */long long int) arr_56 [i_1] [i_6 + 1] [i_6 - 1]))));
        }
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((((/* implicit */int) ((short) arr_42 [i_1] [i_1] [i_1] [i_19 - 1]))) + (2147483647))) >> (((((/* implicit */int) var_10)) - (20538))))))));
            /* LoopSeq 1 */
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26759)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) arr_39 [i_1])))));
                arr_65 [i_20 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * ((-(1124109985)))));
                var_48 *= ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18136))) : (3277854621741986679ULL));
            }
            arr_66 [i_1] = 15168889451967564982ULL;
        }
        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 2) 
        {
            var_49 = ((/* implicit */_Bool) ((unsigned int) arr_40 [i_1] [i_21] [i_21] [i_1]));
            arr_69 [i_1] [i_1] [i_21] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            var_50 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((-3627201165928849281LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))))) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (9223372036854775807LL)))));
        }
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 15; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 15; i_23 += 2) 
        {
            for (unsigned short i_24 = 0; i_24 < 15; i_24 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_25 = 3; i_25 < 14; i_25 += 3) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7424110206022308658ULL)) ? ((+(var_8))) : (((int) var_0))));
                                var_52 = ((arr_77 [i_23] [i_22] [i_23] [i_25 + 1] [i_25]) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_79 [i_22] [i_23] [i_24] [i_22] [i_26])) ^ (((/* implicit */int) arr_74 [i_22]))))));
                                var_53 ^= ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    var_54 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)19122)) : (((/* implicit */int) arr_79 [i_22] [i_22] [i_22] [i_23] [i_22])))) - (19107)))));
                }
            } 
        } 
        var_55 = (+(arr_77 [i_22] [i_22] [i_22] [i_22] [i_22]));
    }
    for (unsigned short i_27 = 1; i_27 < 9; i_27 += 1) 
    {
        var_56 = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) var_3)))))) ^ ((-(arr_77 [i_27 - 1] [i_27] [i_27] [i_27 + 1] [i_27 + 2])))))));
        var_57 = ((/* implicit */unsigned long long int) var_3);
    }
    var_58 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_28 = 3; i_28 < 21; i_28 += 3) 
    {
        var_59 ^= (+(((((/* implicit */unsigned long long int) 3330041325U)) / (12176165014852985172ULL))));
        arr_85 [i_28 - 3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)77)))))));
        var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) min((((arr_84 [i_28 - 3] [i_28 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_28 - 2]))))), (max((max((arr_84 [i_28] [i_28]), (3330041325U))), (((/* implicit */unsigned int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))))));
    }
    var_61 = ((/* implicit */_Bool) (+(((min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)4)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
}
