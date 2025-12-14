/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50490
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [4U] = ((((/* implicit */_Bool) ((arr_3 [i_0 - 1]) | (-1021597647)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_4 [i_1]))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */signed char) -30);
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min(((unsigned char)236), (((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_1])))), (((/* implicit */unsigned char) arr_9 [1ULL] [(_Bool)1] [(_Bool)1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_8 [i_4] [i_0] [i_1] [i_1])) : (((/* implicit */int) var_7))))) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                                var_16 = max((((((/* implicit */int) max((var_11), (var_5)))) & (((((/* implicit */int) var_3)) & (((/* implicit */int) var_5)))))), (((/* implicit */int) min((((725975834) > (((/* implicit */int) (_Bool)1)))), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1])))));
                                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)127))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59473))))) ? (max((((/* implicit */long long int) var_5)), (4611686018427383808LL))) : (((3512709902726929990LL) & (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
            /* LoopSeq 2 */
            for (long long int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            arr_29 [i_5] [i_5] [i_8] [i_5] = min((min((((((/* implicit */_Bool) (signed char)-107)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (arr_27 [i_9] [15LL] [i_7 + 1] [i_7] [i_7 + 3] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_8] [i_9]))))) : (((/* implicit */int) ((short) (signed char)48)))))));
                            arr_30 [i_5] [i_8] [i_7 - 1] [i_6] [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (arr_23 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((+(min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [i_5])), (var_14)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_18 ^= ((/* implicit */unsigned long long int) ((unsigned char) 12638288839262168912ULL));
                        var_19 = ((/* implicit */int) arr_31 [(_Bool)1] [i_11] [i_7 + 2] [i_10] [i_11]);
                    }
                    for (unsigned int i_12 = 4; i_12 < 17; i_12 += 4) /* same iter space */
                    {
                        arr_40 [i_5] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */int) var_10);
                        var_20 = var_2;
                    }
                    for (unsigned int i_13 = 4; i_13 < 17; i_13 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) (_Bool)1);
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */_Bool) 12638288839262168912ULL)) ? (((/* implicit */int) arr_20 [i_13] [i_13])) : (((/* implicit */int) (unsigned char)201)))) - (((/* implicit */int) arr_38 [i_13 + 2] [i_10] [i_13] [i_5] [i_13] [i_5] [14ULL])))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((((/* implicit */_Bool) arr_26 [(signed char)10] [(unsigned short)18] [i_7 + 1] [i_13 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)112)))) + (29794)))));
                    }
                    for (unsigned int i_14 = 4; i_14 < 17; i_14 += 4) /* same iter space */
                    {
                        arr_47 [i_5] [i_5] [12] [12] [i_14 + 3] = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)0))))));
                        var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)59473))));
                    }
                    arr_48 [i_5] [i_5] [11U] [i_5] = ((/* implicit */int) arr_36 [i_7 + 2] [i_5]);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_10] [i_5] [i_5] [i_7] [i_7 + 3])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_5] [i_6] [i_10] [i_6] [i_6] [i_5] [i_7 + 2]))))))));
                    var_26 = ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_6] [i_6] [i_10])) ? (arr_35 [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 2] [i_7 + 1]) : (((/* implicit */int) var_7)));
                }
                for (short i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) 5808455234447382679ULL))));
                        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65534))));
                        arr_55 [i_16] [i_5] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-786))) > (max((max((((/* implicit */unsigned long long int) var_6)), (var_12))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))))));
                    }
                    for (long long int i_17 = 3; i_17 < 18; i_17 += 2) 
                    {
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(-1798305751))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) || (arr_51 [i_5] [i_6] [i_7 + 1] [i_15] [i_15] [i_15]))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_0), (((/* implicit */short) var_2))))))))));
                    }
                    for (short i_18 = 1; i_18 < 17; i_18 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_32 [i_7 - 1] [i_7 + 3]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_46 [i_18] [i_18] [i_7 - 1] [i_15] [i_18 + 3] [i_7 - 1] [i_7 - 1]))))) | (((arr_17 [i_15]) / (((/* implicit */long long int) min((arr_23 [i_18] [i_6] [i_7]), (((/* implicit */unsigned int) (_Bool)1))))))))))));
                        var_32 = ((/* implicit */long long int) arr_20 [i_5] [i_5]);
                        var_33 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_5] [i_6] [i_6] [i_5] [i_7 + 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_44 [1U])), (arr_53 [i_5] [i_5] [(short)6] [i_15] [i_5]))))))) / (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)59473)))) && (((/* implicit */_Bool) (short)4069)))))));
                        arr_60 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((5LL) & (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) 12638288839262168912ULL)))))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_50 [i_7 + 3] [i_7 - 1] [i_18] [i_18 + 3]))))));
                        arr_61 [i_5] [i_6] [i_7] [i_15] [(_Bool)1] [i_7] [i_7 + 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(var_2)))) % (((/* implicit */int) var_7)))) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_0)))))))));
                    }
                    var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_43 [i_5] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) arr_53 [i_5] [i_5] [i_6] [i_5] [(short)9])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)-5))))))), (12638288839262168916ULL)));
                    arr_62 [i_15] [i_5] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */signed char) (+(arr_59 [(short)1] [i_7] [i_6] [i_5] [i_5])));
                }
                for (short i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
                {
                    arr_66 [i_5] [i_7 + 1] [i_5] [i_19] [i_6] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27)) >= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_45 [i_6] [i_7 + 1] [i_7 + 2] [i_6] [0ULL] [i_7 - 1] [i_7 + 2])))))));
                    arr_67 [i_5] [i_7 + 3] [i_6] [i_5] = ((((/* implicit */_Bool) min((((unsigned int) var_8)), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_13)), (arr_64 [i_5]))))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_50 [i_5] [i_6] [i_7] [i_19])))))));
                    var_35 = ((/* implicit */unsigned long long int) (-(659821287U)));
                }
                arr_68 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_18 [i_7] [i_6] [i_7]);
                arr_69 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_49 [15] [i_6] [i_6] [i_6]);
            }
            for (int i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((long long int) 5808455234447382693ULL))))) ? ((~(((((/* implicit */_Bool) arr_59 [i_5] [i_6] [(unsigned char)18] [i_5] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))) : (arr_52 [i_5] [i_6] [(unsigned short)13] [i_20])));
                arr_73 [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(var_9)))) << (((/* implicit */int) ((_Bool) arr_41 [i_5] [i_5])))));
                var_37 = ((/* implicit */_Bool) arr_19 [i_5] [i_5]);
                arr_74 [i_5] = ((/* implicit */short) (_Bool)1);
                arr_75 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(659821265U)))) ? (((arr_41 [i_5] [i_5]) + (((/* implicit */unsigned int) arr_65 [i_5] [1U])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-123)), (var_10)))))))) ? ((-((-(((/* implicit */int) (unsigned char)25)))))) : (((/* implicit */int) var_9)));
            }
        }
        for (short i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3490003446367982214LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_5] [8] [i_5] [i_5] [i_5])) ? (8549420691415335688LL) : (max((arr_77 [i_5]), (arr_77 [7LL])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_5] [i_21])) ? (((/* implicit */unsigned long long int) 408441823233877298LL)) : (var_14)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_3)))))))));
            arr_79 [i_5] [i_5] = ((/* implicit */_Bool) min((((arr_70 [i_5] [i_21] [i_21]) << (20ULL))), (((/* implicit */unsigned int) arr_45 [i_21] [i_21] [i_21] [i_21] [i_5] [i_21] [i_5]))));
        }
        for (short i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)786)) : (((/* implicit */int) (unsigned char)28))))))), (((((/* implicit */_Bool) arr_36 [4ULL] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4194048ULL)) ? (arr_80 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (min((var_12), (((/* implicit */unsigned long long int) (signed char)-81))))))));
            /* LoopSeq 3 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
            {
                arr_85 [i_5] [i_22] [i_23 - 1] [i_22] = ((/* implicit */long long int) (((((-(arr_65 [i_23 - 1] [i_23 - 1]))) + (2147483647))) << (((((/* implicit */int) var_5)) - (77)))));
                var_40 = ((/* implicit */unsigned char) ((_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))));
            }
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */_Bool) ((((/* implicit */int) ((15924845493382630193ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)8)), ((unsigned short)60575)))))))) << (((660346186) - (660346180)))));
                var_42 = ((/* implicit */int) (signed char)23);
            }
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */int) arr_20 [i_5] [i_5]);
                var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-32763)) : (arr_57 [i_25 - 1] [i_25 - 1] [i_25] [i_25 - 1] [i_25 - 1])))) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_57 [i_5] [i_5] [i_5] [i_25 - 1] [i_25 - 1])) ? (arr_57 [i_25 - 1] [i_25] [i_25] [i_25 - 1] [i_25 - 1]) : (((/* implicit */int) var_5)))))))));
                arr_91 [i_5] [i_5] [8U] [i_5] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)32747))))))) : (((/* implicit */int) ((unsigned short) arr_83 [i_5] [i_25 - 1] [i_5]))));
            }
            var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -56853323)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (short)-32746))))))));
        }
        arr_92 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) min((163972295), (91779949)))) - (18446744073705357578ULL)))));
    }
}
