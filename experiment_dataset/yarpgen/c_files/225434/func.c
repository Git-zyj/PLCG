/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225434
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 8463977140072105195LL)) : (6793245903568064693ULL)))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) 3816234212546113174ULL)))))))))));
        arr_8 [i_1] [i_1] = min((max((((/* implicit */unsigned long long int) ((unsigned char) 14630509861163438442ULL))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_7 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))), (3816234212546113185ULL));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 11653498170141486923ULL))));
        var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */_Bool) var_5);
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_12 [4LL] [4LL] [4LL]))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_4] [9ULL] [i_2])) >> (((arr_9 [i_2] [19ULL]) - (17498999331235457619ULL)))))) ? (min((arr_10 [i_4]), (((/* implicit */long long int) arr_12 [i_5] [i_5] [i_4])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_6] [i_3] [i_3])) * (((/* implicit */int) arr_12 [i_2] [i_5] [i_2])))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) max((var_19), (var_7)));
                            arr_31 [i_2] [i_2] [i_7] [i_7] [i_9] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 5747394177479711865ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (arr_16 [i_2] [i_3] [i_2] [i_8]))), (((/* implicit */unsigned long long int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (max((arr_13 [i_7] [i_8] [i_9]), (((/* implicit */unsigned long long int) 494526802385224808LL)))) : (var_5));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
        {
            var_20 -= arr_9 [i_2] [i_10];
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                var_21 = ((/* implicit */long long int) arr_9 [i_2] [i_2]);
                var_22 = (!(((/* implicit */_Bool) 743185616356916592LL)));
                arr_36 [i_10] [i_10] = ((((/* implicit */_Bool) var_3)) ? (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((unsigned long long int) var_6)));
                arr_37 [i_2] [i_10] [i_2] [(short)18] = ((/* implicit */unsigned long long int) arr_28 [(short)11] [i_2] [i_10] [i_10]);
            }
            var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (-(18014398241046528ULL)))) && (((/* implicit */_Bool) max((arr_24 [i_2] [i_2] [i_2] [i_2] [(signed char)3] [i_10]), ((short)1536)))))));
            var_24 = (short)-2048;
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)24093)) / (((/* implicit */int) arr_19 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_13] [i_2] [i_12] [i_2]))) : (743185616356916575LL))))));
                        var_26 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (9151314442816847872ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-7293)) : (((/* implicit */int) arr_11 [i_2] [i_2]))))) : (14934541847361356104ULL))));
                        var_27 -= ((/* implicit */signed char) arr_33 [22LL] [16ULL] [i_12]);
                        var_28 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_32 [i_2] [i_10]) ? (arr_29 [i_2] [i_10] [i_10] [i_12] [(short)5] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16376)))))) ? (min((arr_38 [(short)0] [(short)0] [(short)0] [(short)0]), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_2] [i_2] [i_12]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))))))))))));
                        var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)26623)), (var_0)))) == (((((/* implicit */_Bool) arr_33 [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13] [22ULL] [i_10] [i_2]))) : (arr_9 [i_2] [i_2])))))), (((((/* implicit */_Bool) min((6793245903568064693ULL), (((/* implicit */unsigned long long int) arr_10 [23LL]))))) ? (arr_9 [(short)10] [(short)10]) : (var_11)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4658)) ? (arr_46 [i_15] [i_15]) : (((/* implicit */unsigned long long int) arr_10 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6950539582528636505ULL)))))));
                            arr_53 [i_2] [i_15] [i_15] [i_16] [i_16] [i_17] = ((arr_21 [i_2] [i_14] [i_16] [i_2]) ? (arr_48 [(short)9] [i_15] [(short)9] [i_2]) : ((+(arr_9 [i_2] [i_14]))));
                            arr_54 [(short)10] [i_15] [i_16] [i_17] = ((/* implicit */short) arr_10 [i_16]);
                            arr_55 [i_2] [i_2] [i_15] [18ULL] [i_2] = ((/* implicit */signed char) 18272004681604683876ULL);
                        }
                    } 
                } 
            } 
            arr_56 [i_2] [i_2] [i_2] = ((/* implicit */signed char) arr_42 [(short)2] [i_2] [(short)2] [i_2] [(short)2] [i_2]);
            /* LoopSeq 3 */
            for (long long int i_18 = 2; i_18 < 23; i_18 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 1) 
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_19 + 1] [10LL] [i_14] [i_2]))))) ? (((arr_59 [i_2]) ? (3512202226348195508ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_18 - 2] [(short)20] [i_19]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_19 + 1] [i_19 + 2] [i_19 + 1] [i_19 - 1] [i_18 - 2] [i_18 - 1]))))))));
                    var_32 -= ((/* implicit */unsigned long long int) arr_38 [i_18] [(_Bool)1] [i_18] [i_18]);
                    /* LoopSeq 4 */
                    for (long long int i_20 = 0; i_20 < 24; i_20 += 4) /* same iter space */
                    {
                        arr_63 [i_14] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_19 + 1] [i_19 + 1])) ? (((26388279066624ULL) / (((/* implicit */unsigned long long int) -743185616356916583LL)))) : (((/* implicit */unsigned long long int) (-(var_8))))));
                        var_33 = ((/* implicit */unsigned long long int) ((arr_13 [i_19 + 2] [i_19 + 2] [i_18 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43)))));
                    }
                    for (long long int i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
                    {
                        arr_68 [i_2] [i_14] [i_18 + 1] = ((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_2] [i_2]);
                        var_34 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 849129967885675393ULL)) ? (35465847065542656ULL) : (arr_65 [12LL] [12LL] [i_19]))));
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_24 [i_2] [14ULL] [i_14] [i_18] [i_19] [2LL]))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_64 [i_2] [i_14] [i_19] [i_14]))));
                        var_37 ^= ((/* implicit */unsigned long long int) arr_28 [0LL] [0LL] [0LL] [i_21]);
                    }
                    for (long long int i_22 = 0; i_22 < 24; i_22 += 4) /* same iter space */
                    {
                        arr_72 [11ULL] [i_14] [(unsigned char)4] [i_18 + 1] [i_22] = arr_57 [i_14] [i_18 - 2] [i_19] [i_22];
                        var_38 = ((/* implicit */short) 9954218968387625166ULL);
                        arr_73 [i_2] [i_14] [i_18] [i_19 + 2] [i_22] = 6950539582528636521ULL;
                        arr_74 [i_2] [i_2] [i_14] [18ULL] [i_19] [i_22] = ((/* implicit */long long int) ((unsigned long long int) (short)-30437));
                    }
                    for (short i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        var_39 = ((/* implicit */short) ((((3816234212546113174ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) ? ((+(arr_50 [i_2] [i_2] [(signed char)3] [i_2] [4ULL] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_2] [i_14] [i_18] [(_Bool)1] [i_23] [i_23])) && (((/* implicit */_Bool) 1759860364099141410ULL))))))));
                        arr_77 [i_2] [0LL] = ((/* implicit */long long int) (unsigned char)145);
                        var_40 = ((short) (~(((/* implicit */int) arr_19 [i_2]))));
                    }
                    var_41 |= ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)136)))));
                }
                arr_78 [i_2] [i_2] = ((arr_50 [i_18 + 1] [i_14] [i_18 + 1] [i_14] [i_14] [13LL]) ^ (arr_50 [i_18 - 2] [1LL] [i_18] [(signed char)6] [i_14] [i_18]));
                arr_79 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_18 - 2] [i_18 - 2] [i_18 + 1] [i_18 - 2])) * (((/* implicit */int) arr_25 [i_18 + 1] [i_18 - 2] [i_18 - 1] [i_18 - 1]))));
                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) -743185616356916592LL))));
            }
            for (unsigned long long int i_24 = 2; i_24 < 23; i_24 += 1) 
            {
                var_43 = ((/* implicit */long long int) (-(arr_48 [i_24 - 1] [i_14] [i_24] [i_14])));
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) -8398565550246602290LL)) ? (((/* implicit */int) ((11653498170141486921ULL) <= (7680ULL)))) : (((/* implicit */int) arr_39 [i_2] [i_2])))))));
            }
            for (unsigned long long int i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_26 = 4; i_26 < 20; i_26 += 1) 
                {
                    arr_91 [18ULL] [i_14] = ((/* implicit */short) ((unsigned long long int) arr_51 [i_2] [1ULL] [i_26 + 4] [1ULL]));
                    arr_92 [i_14] [i_14] = ((/* implicit */short) 72057576858058752LL);
                }
                arr_93 [i_25] [i_14] [(short)14] [i_2] = (short)17008;
                var_45 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) arr_22 [i_14])) : (((/* implicit */int) ((signed char) arr_50 [i_25] [i_25] [i_25] [i_14] [i_14] [i_2])))));
            }
            var_46 = ((/* implicit */unsigned char) -743185616356916614LL);
        }
        var_47 = ((/* implicit */unsigned long long int) arr_86 [16ULL] [(unsigned char)19]);
        var_48 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) ((short) (short)-14827))) : (((/* implicit */int) (short)24576))))));
    }
    for (short i_27 = 0; i_27 < 15; i_27 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_28 = 1; i_28 < 12; i_28 += 1) 
        {
            arr_99 [i_27] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -1014243381135008598LL)) ? (743185616356916592LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_27] [i_27] [i_27]))))));
            var_49 = ((/* implicit */short) arr_9 [i_27] [i_27]);
        }
        for (short i_29 = 0; i_29 < 15; i_29 += 3) 
        {
            arr_103 [i_29] [(short)12] [i_27] = min(((((-(12522377969159984454ULL))) >> ((-(((/* implicit */int) arr_18 [i_27] [i_27] [i_27] [i_27] [(short)15] [10LL])))))), ((-(((8193540558402608495ULL) + (3605792562187757571ULL))))));
            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) max((arr_20 [i_27] [i_27] [i_29]), (((/* implicit */long long int) (unsigned char)97)))))));
        }
        var_51 = ((/* implicit */short) min((5871654479115025459ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_52 = ((/* implicit */short) ((unsigned long long int) arr_1 [i_27]));
    }
    var_53 = ((var_1) >> (((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 288230376151711744ULL)) || (((/* implicit */_Bool) 6793245903568064677ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) 72040001851883520ULL))));
}
