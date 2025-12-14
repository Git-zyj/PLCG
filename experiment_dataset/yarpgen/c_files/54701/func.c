/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54701
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
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_10 -= ((/* implicit */unsigned long long int) ((short) max((var_5), (arr_1 [i_0 + 1] [i_1]))));
                var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((short) var_2))) : ((((+((-2147483647 - 1)))) / ((~(arr_3 [8] [i_1] [i_1])))))));
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_13 -= max(((short)1922), (((/* implicit */short) ((var_5) >= (((/* implicit */unsigned long long int) arr_5 [(short)18]))))));
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_14 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */signed char) 234881024);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (-(11810279649651828246ULL))))));
                            arr_21 [i_2] [i_3] [i_3] [i_6] |= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))), (max(((~(((/* implicit */int) arr_7 [i_3])))), ((-(((/* implicit */int) arr_2 [i_2] [i_2]))))))));
                        }
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((arr_6 [i_4 + 1] [i_4 + 1]), ((+(((((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_5] [i_5] [13ULL] [i_5])) + (((/* implicit */int) var_4)))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-117))));
                            arr_24 [i_2] [i_3] [i_3] [i_7] [i_2] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)125))));
                            var_19 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))) & ((~(13984996104783321265ULL)))));
                            var_20 += max((((((/* implicit */int) arr_13 [i_2] [i_4 + 1] [i_2] [i_7])) * (((/* implicit */int) (short)-1)))), (((/* implicit */int) ((1419979301) >= (-2147483635)))));
                        }
                    }
                } 
            } 
            var_21 -= arr_4 [i_2] [i_3];
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1922)) ? (((/* implicit */int) (short)12897)) : (((/* implicit */int) (short)-32675))));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 3) 
            {
                var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_9 + 1] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_26 [i_9 + 1] [i_8] [18ULL])));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), ((+(((var_2) - (var_6)))))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_25 *= var_8;
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_34 [i_2] [i_8] [i_9] [i_8] [i_11] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9 - 2] [i_9 - 2])) ? (((/* implicit */int) arr_22 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 - 2])) : (((/* implicit */int) arr_22 [i_9 - 1] [i_9 - 2] [i_9 - 1] [i_9] [i_9 - 2]))));
                        var_26 |= ((/* implicit */signed char) arr_11 [i_8] [12ULL]);
                        var_27 -= ((/* implicit */unsigned long long int) arr_18 [i_2] [i_9 - 2] [i_9 - 2] [i_10] [i_11] [i_11] [i_11]);
                        var_28 ^= ((((/* implicit */_Bool) (short)-1)) ? (15469429761364025143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_11]))));
                    }
                }
            }
            var_29 -= ((/* implicit */signed char) ((short) arr_30 [i_2] [i_8]));
            var_30 &= ((int) arr_26 [i_2] [19] [i_8]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
        {
            var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)(-32767 - 1)))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) (short)7)) : (298584695))))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21; i_14 += 3) 
            {
                for (signed char i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    {
                        var_33 |= ((/* implicit */signed char) ((arr_14 [i_15] [i_15] [i_15 - 2] [i_15 - 1] [i_15] [i_14]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5)))));
                        var_34 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_13] [i_15] [i_15] [i_15 - 2] [i_15] [i_13] [i_15 + 2]))));
                    }
                } 
            } 
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_28 [i_2] [i_2] [(signed char)12] [i_13])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) 234881024))))))));
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                var_36 &= ((/* implicit */unsigned long long int) (short)1909);
                var_37 -= ((/* implicit */short) 234881030);
                var_38 ^= ((/* implicit */short) var_5);
                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((signed char) (short)32763)))));
            }
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) var_9))));
        }
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (2924914855367868259ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (-2147483638) : (((/* implicit */int) (signed char)-60))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-49)))))));
    }
    for (int i_17 = 1; i_17 < 9; i_17 += 1) 
    {
        arr_51 [i_17] &= ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_3)))))), (((/* implicit */int) max(((short)12888), ((short)-32749))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            var_42 = ((/* implicit */int) arr_28 [i_17] [i_17 + 1] [i_17] [i_17]);
            var_43 -= ((/* implicit */short) ((unsigned long long int) arr_18 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]));
            /* LoopNest 3 */
            for (short i_19 = 3; i_19 < 9; i_19 += 1) 
            {
                for (unsigned long long int i_20 = 3; i_20 < 9; i_20 += 3) 
                {
                    for (int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        {
                            var_44 += ((/* implicit */signed char) (short)1922);
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((int) -234881025)))));
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_43 [i_17] [i_17 + 1] [(short)17] [i_20 - 2]))));
                            var_47 &= ((/* implicit */unsigned long long int) (signed char)-125);
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) 18446744073709551587ULL))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            arr_64 [i_17] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)1)) ? (5916349228310254398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42)))));
            arr_65 [i_17 + 1] [i_17 + 1] [i_17 + 1] &= ((/* implicit */signed char) arr_14 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]);
        }
    }
    for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 2) 
    {
        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_13 [i_23] [i_23] [i_23 - 1] [(signed char)20])))) & ((~(((/* implicit */int) arr_13 [i_23] [i_23] [i_23 + 1] [(short)0])))))))));
        /* LoopSeq 3 */
        for (signed char i_24 = 0; i_24 < 11; i_24 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 1) 
            {
                for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 1) 
                {
                    for (short i_27 = 4; i_27 < 9; i_27 += 2) 
                    {
                        {
                            var_50 |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_70 [i_23] [i_24] [i_25] [i_27]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_27] [i_26] [i_24] [i_27]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64)))))));
                            var_51 &= ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((((/* implicit */_Bool) max((var_7), (((/* implicit */short) arr_70 [i_23] [10ULL] [i_25] [i_24]))))) ? (((/* implicit */int) (short)1792)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_23] [i_26] [i_24])) || (((/* implicit */_Bool) (short)-32750)))))))));
                            var_52 -= ((/* implicit */signed char) ((short) max((234881039), (((/* implicit */int) (signed char)59)))));
                        }
                    } 
                } 
            } 
            var_53 ^= ((/* implicit */unsigned long long int) arr_22 [i_23] [i_24] [i_23] [i_23] [i_24]);
            var_54 -= ((/* implicit */short) max((((((((/* implicit */int) arr_17 [i_23 - 1] [i_23 - 1] [i_23])) + (2147483647))) << (((((((/* implicit */int) arr_17 [i_23 - 1] [i_23 - 1] [i_23])) + (1227))) - (11))))), ((-(((/* implicit */int) (signed char)-98))))));
        }
        for (int i_28 = 0; i_28 < 11; i_28 += 2) 
        {
            var_55 = ((/* implicit */signed char) max((var_55), ((signed char)61)));
            /* LoopNest 3 */
            for (signed char i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                for (int i_30 = 0; i_30 < 11; i_30 += 2) 
                {
                    for (int i_31 = 0; i_31 < 11; i_31 += 2) 
                    {
                        {
                            var_56 = ((/* implicit */signed char) min((var_56), (((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)96)) % (((/* implicit */int) (signed char)-57))))) - (max((arr_19 [2] [i_31]), (((/* implicit */unsigned long long int) (short)-32749)))))))))));
                            var_57 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (16995202532869024469ULL)));
                        }
                    } 
                } 
            } 
            var_58 -= ((/* implicit */short) max(((~(1571214376))), (((/* implicit */int) ((short) var_2)))));
        }
        for (short i_32 = 1; i_32 < 9; i_32 += 2) 
        {
            var_59 &= ((/* implicit */short) (~(((/* implicit */int) max((arr_4 [i_23 - 1] [i_32 + 2]), (arr_4 [i_23 - 1] [i_32 + 2]))))));
            var_60 *= (-((+(arr_76 [i_32 + 2] [i_32] [i_32] [i_32] [i_32 - 1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_33 = 0; i_33 < 11; i_33 += 1) 
            {
                for (signed char i_34 = 0; i_34 < 11; i_34 += 1) 
                {
                    for (short i_35 = 3; i_35 < 10; i_35 += 4) 
                    {
                        {
                            var_61 -= ((/* implicit */signed char) (short)-2);
                            var_62 = ((/* implicit */unsigned long long int) min((var_62), (max((((/* implicit */unsigned long long int) arr_38 [i_23 + 1] [i_32 + 2] [i_23 + 1])), (max((3ULL), (3475126164528795797ULL)))))));
                            var_63 ^= ((/* implicit */signed char) arr_32 [i_23] [i_23 - 1] [i_32] [i_32 - 1] [i_23]);
                            var_64 -= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)60))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_36 = 0; i_36 < 11; i_36 += 2) 
            {
                for (unsigned long long int i_37 = 4; i_37 < 7; i_37 += 2) 
                {
                    for (unsigned long long int i_38 = 0; i_38 < 11; i_38 += 3) 
                    {
                        {
                            var_65 &= ((/* implicit */short) arr_32 [i_23] [i_32 + 2] [i_23] [i_37] [i_38]);
                            arr_109 [i_38] [i_37] [i_36] [i_37] [i_23] |= ((/* implicit */signed char) 15295956838801290842ULL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_39 = 2; i_39 < 10; i_39 += 2) /* same iter space */
            {
                var_66 = ((/* implicit */unsigned long long int) max((var_66), (arr_9 [i_23 + 1] [i_23 + 1] [i_39 - 2])));
                var_67 *= ((/* implicit */short) (-(((/* implicit */int) (signed char)47))));
                var_68 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) arr_103 [i_39]))))))))) > (16995202532869024478ULL)));
            }
            for (int i_40 = 2; i_40 < 10; i_40 += 2) /* same iter space */
            {
                var_69 += ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (short)-13024)), (10167199280219007182ULL))), (((max((((/* implicit */unsigned long long int) arr_33 [i_40] [(short)16] [i_32] [i_32] [i_32])), (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                var_70 *= arr_20 [19] [i_40 + 1] [i_40] [i_23 + 1] [i_32 - 1];
            }
        }
        var_71 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_84 [i_23] [i_23 - 1])) ? (arr_84 [i_23] [i_23 - 1]) : (((/* implicit */int) (signed char)69))))) != (((((/* implicit */_Bool) (-(2147483638)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-73)))))))));
        var_72 = ((/* implicit */short) max((var_72), (((/* implicit */short) (((+(((/* implicit */int) var_7)))) * ((+(((/* implicit */int) var_8)))))))));
        var_73 += ((/* implicit */signed char) max((var_0), (((/* implicit */short) (!((!(((/* implicit */_Bool) arr_97 [i_23] [i_23] [i_23] [i_23 - 1] [i_23 + 1] [i_23] [i_23])))))))));
    }
    var_74 ^= ((/* implicit */short) var_8);
    var_75 = ((/* implicit */short) min((var_75), (((/* implicit */short) max((((((/* implicit */_Bool) ((17431845363659577483ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_4)))))), ((~(-222683879))))))));
}
