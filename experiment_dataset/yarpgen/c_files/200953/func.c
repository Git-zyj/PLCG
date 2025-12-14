/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200953
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) var_9);
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_14 = ((/* implicit */long long int) (~(1854008791U)));
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_15 = ((/* implicit */int) max(((short)-21981), (((/* implicit */short) (_Bool)1))));
        var_16 = ((/* implicit */unsigned char) ((unsigned long long int) var_7));
        var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) var_6))))) ? (((long long int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1] [i_1]))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_19 = min((((((_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) min((((/* implicit */int) var_10)), (arr_5 [i_2])))) : (max((var_8), (((/* implicit */long long int) var_3)))))));
        var_20 = ((/* implicit */unsigned long long int) var_3);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) : (arr_1 [i_2]))), (((long long int) min((((/* implicit */long long int) var_1)), (arr_1 [i_2])))))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_3))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_23 = ((/* implicit */int) var_4);
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            var_24 = var_11;
            var_25 = ((/* implicit */unsigned int) min((var_25), (((unsigned int) (~(arr_8 [(_Bool)1]))))));
            var_26 -= ((/* implicit */short) ((int) ((int) arr_1 [i_3])));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_4] [i_3])))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 = ((/* implicit */short) var_11);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) ((_Bool) var_3));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned short) ((unsigned short) arr_15 [i_3] [i_5]))))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_31 &= ((/* implicit */signed char) ((_Bool) ((unsigned int) var_0)));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_8))));
                            var_33 += ((/* implicit */unsigned int) var_6);
                            var_34 = ((/* implicit */signed char) var_1);
                        }
                        for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_7])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_36 = ((/* implicit */unsigned int) ((int) 0U));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) var_9))));
                            var_38 &= ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_1)));
                        }
                        var_39 = ((/* implicit */short) var_10);
                    }
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_11 = 3; i_11 < 19; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) ((unsigned char) (signed char)47));
                            var_41 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                            var_42 = ((/* implicit */int) var_11);
                            var_43 = ((/* implicit */long long int) max((var_43), (var_8)));
                            var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (arr_15 [i_12] [i_10]))))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned char) ((unsigned int) var_5));
                var_46 = ((/* implicit */unsigned short) (~(((long long int) var_7))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) ((long long int) ((long long int) arr_30 [i_3] [i_10] [i_14]))))));
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_48 = ((/* implicit */unsigned int) max((var_48), (((unsigned int) var_5))));
                    var_49 = (-((~(((/* implicit */int) var_5)))));
                    var_50 ^= ((/* implicit */_Bool) var_2);
                    var_51 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_14] [i_3]) : (arr_1 [i_15]))));
                }
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    var_52 = ((/* implicit */signed char) var_7);
                    /* LoopSeq 4 */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned long long int) var_3);
                        var_54 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                        var_55 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        var_56 *= ((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_21 [i_3] [i_14] [i_16])));
                        var_57 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_31 [i_14] [i_16] [i_14])))) ? (((((/* implicit */_Bool) arr_32 [i_3] [i_10] [i_14])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 2474059263341347008ULL)) ? (1073741824U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10])))))));
                    }
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        var_58 |= ((/* implicit */long long int) var_2);
                        var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_14] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10] [i_10]))) : (arr_35 [i_10]))))))));
                    }
                    for (short i_20 = 1; i_20 < 19; i_20 += 4) 
                    {
                        var_60 = ((/* implicit */short) (+(arr_35 [i_3])));
                        var_61 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                        var_62 = ((/* implicit */unsigned int) var_8);
                    }
                }
                var_63 &= ((/* implicit */unsigned int) ((unsigned char) var_4));
            }
            for (int i_21 = 0; i_21 < 21; i_21 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                {
                    var_64 = ((/* implicit */unsigned int) var_4);
                    var_65 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) (unsigned char)33))))));
                    var_66 = ((/* implicit */unsigned long long int) ((unsigned char) var_7));
                }
                for (int i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    var_67 = (!(((/* implicit */_Bool) ((signed char) var_0))));
                    var_68 = ((/* implicit */unsigned short) ((int) ((short) var_9)));
                    var_69 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                    var_70 = ((/* implicit */unsigned int) (+(var_8)));
                }
                for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_71 ^= ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) var_10)))));
                        var_72 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (arr_54 [i_3] [i_10] [i_21] [i_24] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_3] [i_10] [i_21] [i_24] [i_25])))));
                    }
                    var_73 = ((/* implicit */signed char) (~(-1924040200)));
                    var_74 = ((/* implicit */long long int) min((var_74), (((/* implicit */long long int) (-(10ULL))))));
                    var_75 = ((/* implicit */long long int) var_1);
                }
                var_76 = ((/* implicit */_Bool) ((((_Bool) arr_32 [i_21] [i_10] [i_3])) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
            }
            var_77 = var_2;
            /* LoopSeq 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                var_78 = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) var_3)))));
                var_79 &= ((/* implicit */signed char) ((long long int) (_Bool)1));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
            {
                var_80 = ((/* implicit */short) min((var_80), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                /* LoopSeq 2 */
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    var_81 |= ((/* implicit */_Bool) ((signed char) var_3));
                    var_82 = ((/* implicit */_Bool) arr_15 [i_10] [i_27]);
                }
                for (unsigned int i_29 = 4; i_29 < 20; i_29 += 2) 
                {
                    var_83 |= ((/* implicit */signed char) var_9);
                    var_84 = ((/* implicit */_Bool) var_4);
                }
                var_85 = ((/* implicit */long long int) min((var_85), (((/* implicit */long long int) ((signed char) ((unsigned short) var_11))))));
                var_86 = ((/* implicit */long long int) var_5);
            }
        }
        var_87 = ((/* implicit */int) ((long long int) var_6));
        var_88 -= ((/* implicit */_Bool) var_11);
        var_89 = ((/* implicit */unsigned char) var_8);
    }
}
