/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220186
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)35760)))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_7 [i_1] [i_1] [i_1] [i_1])));
                    arr_8 [(unsigned short)3] [i_1] [(_Bool)0] [(unsigned short)3] = ((/* implicit */short) ((unsigned int) ((arr_5 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_3)))))))));
                    var_17 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (signed char)69)) && (var_11))));
                }
            } 
        } 
        arr_9 [(unsigned short)3] [i_0] = ((/* implicit */short) (~((~(arr_1 [i_0] [i_0])))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) != (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)61)), ((unsigned short)1639))))))))));
                    arr_19 [11U] [i_4] = ((/* implicit */_Bool) (+((+(arr_11 [i_4 + 1])))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min((var_5), (var_7)))) : (((/* implicit */int) ((short) arr_18 [i_3] [i_3] [i_3]))))))));
        var_20 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((short) (short)9408)))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 *= ((/* implicit */signed char) 2839751967U);
        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
        var_23 = ((/* implicit */unsigned int) arr_6 [i_6] [i_6] [i_6] [(unsigned short)11]);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4063232LL), (((/* implicit */long long int) ((var_8) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-82)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)7128)) - (((/* implicit */int) min(((unsigned short)46731), ((unsigned short)1622)))))))));
            arr_28 [i_7] = ((/* implicit */unsigned short) arr_27 [i_7 - 1] [i_7 - 1] [i_8 + 1]);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((((min((((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)-69)))), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (short)-9432)) : (((/* implicit */int) var_12)))))) + (2147483647))) << (((((((/* implicit */_Bool) arr_4 [2ULL] [i_9])) ? (var_2) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))))) - (3434274053U)))));
            arr_31 [i_7] [(short)4] = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_4 [i_7 + 1] [i_9])))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 1; i_10 < 6; i_10 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_9))));
                var_27 += ((/* implicit */short) 35184372088831ULL);
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((((/* implicit */_Bool) arr_21 [i_10] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9409))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_10 - 1] [i_7 + 1] [i_7 + 1])) && (((/* implicit */_Bool) 642682002U)))))));
                    var_29 |= ((short) ((((/* implicit */int) min((((/* implicit */short) (signed char)17)), ((short)-9435)))) * (((/* implicit */int) ((18446744073709551584ULL) <= (15153427502606780974ULL))))));
                }
                var_30 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-30661))))) == (((((/* implicit */int) (unsigned short)22202)) >> (((4007490692U) - (4007490668U)))))));
            }
            var_31 = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)22170))));
            /* LoopNest 2 */
            for (short i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                for (unsigned short i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (_Bool)1))));
                        var_33 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(2147483647)))), (748861119U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)3584))) ? (((int) var_2)) : (((/* implicit */int) min(((unsigned short)65274), (((/* implicit */unsigned short) var_7)))))))) : (min((min((((/* implicit */unsigned long long int) 3652285288U)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_6)) - (var_9)))))));
                    }
                } 
            } 
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            arr_45 [i_14] = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
            var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-4))));
            var_35 = min((22ULL), (((/* implicit */unsigned long long int) (unsigned short)33226)));
        }
        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (~((((_Bool)1) ? ((-(((/* implicit */int) (short)10527)))) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned long long int i_15 = 3; i_15 < 14; i_15 += 2) 
    {
        arr_48 [i_15] [(unsigned short)2] = ((/* implicit */int) arr_47 [i_15 - 1]);
        /* LoopSeq 3 */
        for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            var_37 = ((/* implicit */unsigned int) ((signed char) var_6));
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
            {
                arr_53 [i_15] [i_16] [i_16] [i_17] = ((((/* implicit */_Bool) min((((/* implicit */int) (!(var_11)))), (min((var_6), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (-((+(var_6)))))) : (min((2023800873U), (((/* implicit */unsigned int) (+(arr_46 [11U])))))));
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) min((var_1), (((/* implicit */unsigned long long int) (unsigned short)25824)))))) ? (min((3166124933U), (((/* implicit */unsigned int) arr_51 [i_15 - 2] [i_16])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_15] [i_15 - 3])))))))))));
                var_39 = ((/* implicit */unsigned long long int) arr_52 [i_15 - 1] [i_16] [i_16] [i_16]);
            }
            for (int i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(1196639936U)))))));
                var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551567ULL)))))));
                arr_58 [i_18] [(unsigned short)2] [i_16] [4ULL] = ((/* implicit */unsigned long long int) ((long long int) 9245137530707830326ULL));
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                for (unsigned short i_20 = 2; i_20 < 11; i_20 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (~(min((var_10), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) var_11))))))))))));
                        var_43 -= min((((/* implicit */unsigned long long int) min((arr_60 [i_15 - 3] [i_20 - 1]), (((/* implicit */unsigned int) arr_59 [i_20 + 1] [8ULL] [i_20 - 2] [i_20 + 1]))))), (((var_8) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    }
                } 
            } 
        }
        for (short i_21 = 1; i_21 < 12; i_21 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_22 = 0; i_22 < 15; i_22 += 3) 
            {
                arr_71 [i_15] [i_15] [i_21] [i_22] = ((/* implicit */unsigned int) ((unsigned short) arr_68 [i_21 + 2] [i_21 + 1]));
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) var_8))));
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 1; i_24 < 11; i_24 += 3) 
                    {
                        arr_78 [i_15] [i_15] [i_15] [(unsigned short)6] [i_15] = ((/* implicit */long long int) var_2);
                        var_45 = ((/* implicit */unsigned short) ((_Bool) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_63 [(short)14] [i_22])) : (((/* implicit */int) var_5))))));
                    }
                    arr_79 [i_23] [0U] [i_22] [(_Bool)1] [(_Bool)1] [i_15 + 1] = ((/* implicit */unsigned short) (~(3652285277U)));
                }
            }
            arr_80 [i_15 - 1] = ((/* implicit */unsigned int) min((arr_64 [i_15 - 2]), (((/* implicit */long long int) min((((/* implicit */int) (short)32767)), (var_6))))));
            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((short)29945), ((short)-1)))) ? (((/* implicit */int) arr_65 [i_21])) : (((/* implicit */int) (unsigned short)39696)))) ^ (((/* implicit */int) var_3)))))));
            arr_81 [(signed char)6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned short) var_0))))) && (((/* implicit */_Bool) ((unsigned short) var_5)))));
            var_47 = arr_77 [i_21] [i_21] [i_21] [i_21] [i_21] [(unsigned short)11];
        }
        for (unsigned int i_25 = 1; i_25 < 14; i_25 += 3) 
        {
            arr_84 [i_15] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) min((arr_82 [i_25] [i_15]), (var_3))))), (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((((/* implicit */_Bool) arr_75 [i_25 + 1] [i_15] [i_15] [i_15] [i_15])) ? (((/* implicit */int) (short)-18462)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_64 [1])) ? (((/* implicit */int) (short)-9409)) : (((/* implicit */int) arr_67 [(_Bool)1] [i_15 - 2] [i_25 + 1]))))))));
            /* LoopSeq 1 */
            for (long long int i_26 = 3; i_26 < 12; i_26 += 4) 
            {
                arr_87 [i_26] [i_15] = ((/* implicit */_Bool) ((unsigned short) ((var_11) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) var_8)))));
                var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((unsigned int) min((arr_74 [i_26 - 2] [i_26 - 2] [i_25] [i_15 + 1]), (arr_74 [i_25 - 1] [i_25 + 1] [i_25 + 1] [i_25])))))));
                arr_88 [i_15] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                var_49 = ((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)101)) % (var_6)))));
            }
            var_50 = var_4;
            arr_89 [i_25 - 1] [i_25] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_9)))))))));
        }
        arr_90 [(unsigned short)6] = ((/* implicit */unsigned short) (~(var_2)));
    }
    var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_5))))) : (var_1)));
}
