/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30072
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5288886595137065976LL)) ? (((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) var_5))))) : ((-(var_6))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) ((unsigned char) ((short) ((var_9) >= (var_9)))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [4ULL] [i_2] [i_3] = ((/* implicit */_Bool) var_7);
                        var_13 = ((/* implicit */long long int) (-(63ULL)));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1337568935U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)100)))) : (min((((/* implicit */unsigned long long int) 9223372036854775801LL)), (((unsigned long long int) var_11)))))))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-8277)) ? (2305843009205305344LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                        var_15 = ((/* implicit */unsigned long long int) (+(var_9)));
                    }
                } 
            } 
            arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) / (var_0)))) ? ((-(min((((/* implicit */unsigned long long int) var_5)), (18446744073709551570ULL))))) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_3 [(short)9]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1)))))))));
        }
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) var_10);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */short) ((unsigned char) -1726619222960262841LL));
                            var_17 = ((/* implicit */long long int) ((arr_19 [(_Bool)0] [i_7] [i_7] [i_7]) != ((+(var_7)))));
                            var_18 = ((/* implicit */unsigned int) (~(var_4)));
                        }
                    } 
                } 
                arr_30 [i_0] [i_4] [i_0] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (signed char)51)))));
                var_19 = ((/* implicit */unsigned int) (unsigned char)107);
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_7 [i_4])))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16383U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_22 = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 14; i_9 += 1) 
                {
                    arr_38 [i_9] [i_9] [i_0] [7LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_9 + 4] [i_4] [i_9 - 1] [i_9] [i_9 - 1])) ? (arr_27 [i_8] [i_9 + 2] [i_8] [i_9 + 4] [(short)0] [i_4]) : (((/* implicit */unsigned long long int) var_11))));
                    var_23 = ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) (-(arr_18 [i_0])))));
                    arr_39 [i_0] = ((/* implicit */unsigned char) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) + (6731)))));
                }
            }
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((short) -2147483641));
                var_25 = -1863056182174428797LL;
                arr_42 [i_0] [i_0] [(unsigned short)5] [i_4] = ((/* implicit */unsigned char) arr_1 [i_0]);
                arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_8)), (max((var_4), (var_6))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1)))))) <= (max((arr_6 [i_0] [i_0]), (-4280736342430087950LL)))))))));
            }
            arr_44 [i_0] = min((max((6040557237498923214ULL), (((/* implicit */unsigned long long int) arr_37 [16LL])))), ((-(arr_27 [i_0] [i_0] [i_0] [i_0] [9LL] [i_0]))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned short) ((arr_20 [i_0] [i_4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
            var_27 = ((/* implicit */unsigned long long int) (((((((~(5992462530940366361LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) + (6743))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) arr_10 [i_0] [i_4] [i_0])) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12)))))))));
        }
        for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            arr_49 [i_0] = ((/* implicit */unsigned short) min((2402152178835186598ULL), (((/* implicit */unsigned long long int) (unsigned char)100))));
            arr_50 [i_0] [i_0] = ((/* implicit */long long int) var_1);
            arr_51 [i_0] [10LL] &= ((/* implicit */signed char) min((((int) (~(var_6)))), ((-(((/* implicit */int) var_5))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((8716464805899089299LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))))) >> (((var_3) + (7830477764967293714LL)))));
                var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
            }
            for (unsigned long long int i_13 = 2; i_13 < 15; i_13 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) < (min((var_7), (((/* implicit */long long int) var_8))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 4; i_14 < 17; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((var_6) <= (2305843009205305344LL)))))))));
                            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)155))));
                            var_33 = var_0;
                            var_34 = var_3;
                            arr_63 [(unsigned char)8] [i_0] [(unsigned char)8] = var_7;
                        }
                    } 
                } 
            }
            for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) (_Bool)1);
                            arr_72 [i_18] [i_0] [i_0] [i_0] = -2305843009205305353LL;
                            arr_73 [i_0] [(unsigned char)14] [i_16 + 3] [i_17] [i_18] = ((/* implicit */long long int) var_2);
                            var_36 = var_0;
                            var_37 = ((/* implicit */unsigned char) arr_37 [i_0]);
                        }
                    } 
                } 
                var_38 = ((/* implicit */int) arr_41 [i_0] [i_11] [i_16 + 1]);
                var_39 -= ((/* implicit */short) (+(((/* implicit */int) var_2))));
                arr_74 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
            }
            var_40 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (min((((/* implicit */long long int) var_2)), (min((var_11), (arr_61 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        }
        var_41 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!((_Bool)1))))));
    }
    for (unsigned char i_19 = 2; i_19 < 15; i_19 += 3) /* same iter space */
    {
        var_42 ^= ((/* implicit */int) var_6);
        arr_77 [i_19] = (+(var_4));
        arr_78 [i_19] [7U] = ((var_4) / (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-8596798951159954515LL)))) ? (var_9) : (((/* implicit */int) (unsigned char)193))))));
    }
    for (unsigned char i_20 = 2; i_20 < 15; i_20 += 3) /* same iter space */
    {
        var_43 = var_4;
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 18; i_21 += 4) 
        {
            arr_85 [i_21] = ((/* implicit */short) var_3);
            /* LoopNest 2 */
            for (signed char i_22 = 3; i_22 < 17; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 18; i_23 += 3) 
                {
                    {
                        arr_91 [i_20 + 1] [(_Bool)1] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) << (((var_1) - (458289599U)))))) ? (((/* implicit */int) arr_28 [i_20 - 1] [i_20 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) var_9)) != (-1LL))))));
                        var_44 = (-(var_7));
                    }
                } 
            } 
        }
        arr_92 [i_20 - 1] = ((/* implicit */long long int) 1328677991U);
        arr_93 [i_20] = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned char) (signed char)17)), (arr_66 [i_20] [i_20 + 1] [i_20 + 1] [i_20]))));
    }
    var_45 = ((/* implicit */unsigned short) (~(var_1)));
    var_46 &= ((/* implicit */_Bool) var_7);
    var_47 = ((/* implicit */short) (~(min(((-(var_3))), (((/* implicit */long long int) var_1))))));
}
