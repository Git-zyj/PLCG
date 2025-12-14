/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204863
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-((~((-(((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))))))));
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(signed char)6]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (-(6524561389172943342ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) arr_11 [(signed char)10] [i_4]);
            /* LoopSeq 3 */
            for (unsigned int i_5 = 4; i_5 < 23; i_5 += 2) /* same iter space */
            {
                var_18 -= ((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5]);
                arr_16 [i_3] [i_4] [i_3] = (+((-(((/* implicit */int) arr_12 [i_3 + 1])))));
            }
            for (unsigned int i_6 = 4; i_6 < 23; i_6 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)48007))));
                var_20 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-61))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_26 [i_3] [7LL] [i_7] = ((/* implicit */_Bool) (-(arr_20 [i_8] [i_4] [i_7] [i_8])));
                    arr_27 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (unsigned short)65535)))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-((~(1117405621))))))));
                    var_22 += ((/* implicit */int) ((unsigned long long int) (unsigned char)181));
                }
                for (int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) (_Bool)1);
                    arr_31 [i_3] = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (unsigned short)65535)))));
                }
                for (signed char i_10 = 1; i_10 < 22; i_10 += 1) 
                {
                    arr_34 [i_10] [22] [i_3 - 1] |= ((/* implicit */long long int) arr_13 [i_10] [i_4] [i_3]);
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
                    {
                        arr_39 [i_3] [i_4] [i_7] [i_7] [i_11] = (unsigned short)65529;
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_7] [i_11]))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                    {
                        arr_42 [i_3] [i_3] [i_3] [i_7] [i_7] [(_Bool)1] [i_12] = ((/* implicit */unsigned short) (+((+(-1)))));
                        var_25 = ((/* implicit */long long int) (-(((unsigned int) 1242434963548316411ULL))));
                        var_26 = ((/* implicit */unsigned short) ((long long int) (unsigned short)45987));
                        arr_43 [i_3] [i_3] [i_3] [i_10] [i_12] = ((/* implicit */signed char) (-(((unsigned int) arr_28 [i_3] [(signed char)9]))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) ((unsigned short) (~(4087528089U))));
                        var_28 = arr_19 [i_4] [i_10 + 1] [i_4] [i_4];
                        var_29 = ((/* implicit */unsigned long long int) 6503305773730988993LL);
                    }
                    arr_46 [i_3] [i_3] [4U] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_3] [(short)14] [(short)14] [i_3]));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            var_30 -= (~((~(((/* implicit */int) arr_13 [i_3] [4] [8U])))));
                            arr_52 [i_3 + 1] [i_4] [i_4] [i_3] [i_7] [i_14] [i_15] = (-(((/* implicit */int) arr_13 [i_4] [i_4] [i_14])));
                        }
                    } 
                } 
                arr_53 [i_3] [i_7] [i_7] = ((int) (unsigned short)65514);
                arr_54 [i_3] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_28 [i_3 + 1] [i_3])))));
            }
            arr_55 [i_3] [i_3] = ((/* implicit */unsigned char) (unsigned short)4);
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_31 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned short)65535)))));
                var_32 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) arr_33 [i_3])))));
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                for (int i_19 = 1; i_19 < 22; i_19 += 3) 
                {
                    {
                        var_33 = ((/* implicit */signed char) arr_22 [i_3] [i_17] [i_18]);
                        var_34 += ((/* implicit */_Bool) arr_17 [i_3] [i_17] [i_18] [i_19 + 2]);
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) arr_17 [i_3] [i_3] [i_3] [i_3]);
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                arr_69 [i_3] = (+(((/* implicit */int) (unsigned short)0)));
                var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned short)65524)))));
                arr_70 [i_3 + 1] [i_17] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (short)-9))));
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (unsigned short)65535))))))));
            }
            for (signed char i_21 = 2; i_21 < 21; i_21 += 3) 
            {
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        {
                            arr_77 [(signed char)10] [i_3] [i_3] = ((long long int) ((signed char) arr_37 [(short)3] [i_17] [13] [i_3] [(short)3] [i_3]));
                            var_38 = ((/* implicit */_Bool) ((short) (short)-18117));
                        }
                    } 
                } 
                arr_78 [i_3] [i_3] = ((/* implicit */unsigned char) arr_14 [i_17] [(unsigned short)15]);
            }
            for (unsigned long long int i_24 = 3; i_24 < 22; i_24 += 1) 
            {
                arr_82 [(unsigned short)23] [(short)2] [i_3] = ((/* implicit */unsigned short) ((signed char) 2150920431U));
                var_39 += ((/* implicit */unsigned short) (+(((int) (_Bool)1))));
                var_40 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_3 - 1] [i_17] [i_3]))));
                arr_83 [i_3] = ((/* implicit */int) ((short) arr_33 [i_3 + 1]));
            }
            var_41 = ((/* implicit */unsigned char) arr_41 [i_3 + 1] [i_17] [i_3]);
            var_42 *= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 3)))));
        }
        for (int i_25 = 0; i_25 < 24; i_25 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_26 = 2; i_26 < 22; i_26 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    var_43 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)0))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_28 = 0; i_28 < 24; i_28 += 2) 
                    {
                        var_44 = ((/* implicit */signed char) arr_22 [i_3 - 1] [i_25] [i_3 - 1]);
                        var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (unsigned short)40))));
                        var_46 += ((/* implicit */short) (~(((/* implicit */int) (short)-9))));
                    }
                    for (unsigned char i_29 = 0; i_29 < 24; i_29 += 3) 
                    {
                        var_47 += ((/* implicit */signed char) (+(((/* implicit */int) arr_71 [16] [i_27] [i_26] [16]))));
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (unsigned short)0))));
                    }
                    var_49 = ((/* implicit */long long int) ((unsigned char) (short)9));
                    arr_96 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(arr_74 [i_3])));
                }
                for (signed char i_30 = 4; i_30 < 22; i_30 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_31 = 2; i_31 < 23; i_31 += 2) 
                    {
                        var_50 = ((/* implicit */signed char) arr_18 [i_3] [i_3]);
                        var_51 = ((/* implicit */_Bool) ((short) arr_36 [i_3] [i_30] [i_31]));
                    }
                    for (long long int i_32 = 0; i_32 < 24; i_32 += 2) 
                    {
                        arr_105 [i_3] [i_3] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) (signed char)63)))));
                        arr_106 [i_3 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (short)-8);
                    }
                    for (signed char i_33 = 1; i_33 < 23; i_33 += 2) 
                    {
                        arr_110 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (unsigned char)131);
                        var_52 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45992)))))));
                        arr_111 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned short)65529))))));
                        arr_112 [i_33] [i_30 + 2] [i_3] [(short)23] [i_3] [i_25] [(short)23] = ((/* implicit */unsigned long long int) arr_67 [i_25] [(unsigned short)4] [(signed char)11] [i_25]);
                        arr_113 [i_3] [i_25] [i_26 + 1] [i_30] [i_3] = ((/* implicit */unsigned short) ((short) ((long long int) arr_102 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1] [(signed char)9] [(short)22])));
                    }
                    for (unsigned short i_34 = 0; i_34 < 24; i_34 += 2) 
                    {
                        var_53 = (-((-(((/* implicit */int) arr_24 [i_3] [(_Bool)1] [(_Bool)1] [i_3])))));
                        arr_117 [i_3] [i_25] [(unsigned short)16] [i_30] [i_3] = ((/* implicit */unsigned char) arr_93 [i_25] [i_26 - 2] [i_30] [i_26 - 2]);
                    }
                    var_54 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_61 [i_3 - 1] [i_3] [(unsigned short)6])))));
                    arr_118 [i_3] [i_3] [i_25] [i_26 - 2] [i_3] = ((/* implicit */unsigned short) (short)12);
                }
                for (unsigned int i_35 = 0; i_35 < 24; i_35 += 3) 
                {
                    arr_121 [i_3] [i_26 - 1] [i_35] [4LL] [i_35] [(signed char)10] |= ((/* implicit */unsigned int) (unsigned char)8);
                    arr_122 [i_3] [i_3] [i_26] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_63 [i_26 + 2] [i_25] [i_3 + 1]))));
                    var_55 += ((/* implicit */signed char) (~((~(((/* implicit */int) (short)5))))));
                }
                arr_123 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_63 [i_3] [(short)5] [i_3]))));
                /* LoopSeq 3 */
                for (unsigned short i_36 = 2; i_36 < 22; i_36 += 3) 
                {
                    var_56 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) 1U)))));
                    var_57 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (signed char)1)))));
                    arr_127 [i_3] [i_3] [i_26 + 2] [i_3] [i_36] = ((/* implicit */int) ((unsigned char) (_Bool)1));
                }
                for (unsigned char i_37 = 0; i_37 < 24; i_37 += 3) 
                {
                    var_58 = ((/* implicit */unsigned short) ((int) 996384234));
                    /* LoopSeq 3 */
                    for (unsigned short i_38 = 2; i_38 < 21; i_38 += 2) 
                    {
                        var_59 = ((/* implicit */int) (_Bool)1);
                        var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) arr_60 [i_3] [i_3] [i_3]))));
                        var_61 = ((unsigned int) 1U);
                        arr_133 [i_38] [i_38] [i_3] [i_38] [i_38] = ((/* implicit */signed char) ((int) arr_91 [i_38 + 2] [i_26] [i_37] [i_26] [9ULL] [i_3]));
                    }
                    for (unsigned int i_39 = 0; i_39 < 24; i_39 += 2) 
                    {
                        var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) (~((~(arr_101 [i_25] [i_25] [i_25] [i_25] [1] [i_25]))))))));
                        var_63 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)49625))))));
                        arr_137 [i_3] [i_25] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_59 [i_3]))));
                    }
                    for (unsigned char i_40 = 0; i_40 < 24; i_40 += 2) 
                    {
                        var_64 = ((/* implicit */signed char) -2147483637);
                        var_65 = ((/* implicit */short) max((var_65), (((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (signed char)13))))))));
                    }
                }
                for (short i_41 = 3; i_41 < 23; i_41 += 3) 
                {
                    var_66 = ((/* implicit */unsigned long long int) ((short) (~(-1926358996))));
                    arr_144 [i_3] [i_3] [i_3] [10U] [i_3] [i_3 + 1] = ((/* implicit */_Bool) (short)8);
                }
                var_67 = ((/* implicit */short) ((unsigned char) (signed char)-37));
                /* LoopNest 2 */
                for (signed char i_42 = 2; i_42 < 23; i_42 += 3) 
                {
                    for (long long int i_43 = 0; i_43 < 24; i_43 += 3) 
                    {
                        {
                            arr_151 [i_3] [i_25] [i_3] [i_43] = ((/* implicit */signed char) -983488695);
                            var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) ((unsigned long long int) ((int) arr_23 [(signed char)4] [i_26 - 1] [i_25] [(signed char)4]))))));
                            var_69 = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)-14)))));
                        }
                    } 
                } 
            }
            for (short i_44 = 0; i_44 < 24; i_44 += 1) 
            {
                arr_154 [i_44] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                arr_155 [i_3] [i_44] = ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_129 [i_3] [i_3] [i_25] [i_44] [i_44])))));
            }
            for (signed char i_45 = 0; i_45 < 24; i_45 += 3) 
            {
                var_70 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_60 [14] [i_25] [i_45]))));
                var_71 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_3] [i_25] [i_45]))));
                /* LoopSeq 1 */
                for (unsigned int i_46 = 4; i_46 < 22; i_46 += 2) 
                {
                    var_72 += ((/* implicit */signed char) arr_135 [i_25] [(short)4] [i_46 - 1]);
                    arr_163 [i_3] [i_25] [i_25] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) (unsigned short)56685)))));
                    arr_164 [i_3] [i_3 - 1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (+(arr_108 [i_3 + 2] [i_25] [i_25] [i_25])));
                }
                var_73 = ((/* implicit */int) arr_128 [i_3] [i_25] [i_3] [i_3]);
            }
            var_74 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) arr_114 [i_3] [i_25] [i_25] [i_3] [i_3 - 1] [i_3])))));
        }
        arr_165 [i_3] = ((int) ((int) arr_72 [i_3] [(unsigned short)10]));
        var_75 = ((/* implicit */unsigned long long int) (~(4294967295U)));
        arr_166 [i_3] = ((/* implicit */_Bool) arr_79 [i_3] [i_3]);
    }
}
