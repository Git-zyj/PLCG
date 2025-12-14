/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218182
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) (unsigned char)201))), (arr_1 [i_0] [i_0])));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned short) -1154374405963471184LL);
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), ((-(((((/* implicit */_Bool) (short)-24757)) ? (arr_6 [i_1] [i_2] [i_3]) : (7U)))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (6352960235608131038ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7168)))))) ? ((~(arr_8 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]))) : (((/* implicit */long long int) max((2235620059U), (((/* implicit */unsigned int) var_6)))))));
                                arr_18 [i_1] [i_4] = ((/* implicit */long long int) max(((~(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)79)) / (((/* implicit */int) (short)-16002)))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) max(((-(arr_6 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-78)))))))) : (max((12666736750260657723ULL), (((5780007323448893912ULL) * (12093783838101420573ULL)))))));
                    arr_20 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) arr_13 [i_0] [i_2] [i_2] [i_1] [i_2] [i_0] [i_2]);
                    arr_21 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((long long int) (short)-21867))) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) (unsigned short)36428))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)166)))))));
        var_22 ^= ((/* implicit */unsigned short) max(((-(-1154374405963471153LL))), (((/* implicit */long long int) (_Bool)0))));
        var_23 ^= ((/* implicit */unsigned char) arr_24 [i_5 + 3]);
    }
    /* LoopSeq 2 */
    for (int i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        arr_27 [i_6] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16000))) - (14464736807632593004ULL));
        arr_28 [i_6] = ((/* implicit */unsigned long long int) 190095532);
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                    {
                        {
                            var_24 += (signed char)-42;
                            var_25 -= ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_36 [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_6 - 1])) + (((/* implicit */int) arr_36 [i_10 - 1] [i_10 - 1] [i_6 - 1] [i_6 - 1] [i_10 - 1] [i_6 - 1])))));
                        }
                    } 
                } 
            } 
            arr_37 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) 3LL);
            /* LoopSeq 4 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
                {
                    arr_43 [i_6] = ((/* implicit */int) (-(-3684549532764487327LL)));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (0U)));
                }
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                {
                    arr_46 [i_6] [i_6] [i_11] [i_13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)29130))))));
                    arr_47 [i_6] [i_6] [i_11] [i_13] = ((/* implicit */unsigned short) 12093783838101420578ULL);
                }
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
                {
                    arr_51 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((var_5) <= (((/* implicit */int) (short)10032)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_6 - 1])) : (((/* implicit */int) arr_25 [i_6 + 2]))))) : (((((/* implicit */_Bool) arr_31 [i_6 + 1])) ? (max((((/* implicit */unsigned long long int) arr_25 [i_11])), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)179)), (2931577474U))))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_10))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    arr_54 [i_6] [i_15] [i_15] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)62157))))) < (4294967295U)))), (min((min((((/* implicit */int) var_16)), (939524096))), (((/* implicit */int) (unsigned char)255))))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) max((min((max((9899163366141158047ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (unsigned char)3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58379))) : (3230180056U)))) ? (max((((/* implicit */long long int) (unsigned char)167)), (9051265203478801913LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned char)6])))))))))));
                    var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4786916544246457722LL)) && (((/* implicit */_Bool) 12093783838101420577ULL))));
                    arr_55 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(3880808574922283131ULL))))))), (((((/* implicit */_Bool) 1014329397)) ? (7063165409888074068LL) : (((/* implicit */long long int) 1452688968U))))));
                }
            }
            for (int i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    for (short i_18 = 1; i_18 < 23; i_18 += 3) 
                    {
                        {
                            arr_63 [i_6] [i_17] [i_7] [i_7] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)0))))), (min((var_12), (((/* implicit */short) var_3))))))), (var_4)));
                            arr_64 [i_6] [i_6] [i_6] [i_17] [i_6] = ((/* implicit */int) max(((!(arr_44 [i_6] [i_6 + 1] [i_7] [i_17] [i_18 - 1]))), (((((/* implicit */unsigned int) min((((/* implicit */int) arr_44 [i_6] [i_7] [i_6] [i_6] [i_6])), (-2067078465)))) < (((unsigned int) (signed char)117))))));
                            var_30 = ((/* implicit */signed char) ((unsigned int) var_18));
                            arr_65 [i_6] [i_7] = ((/* implicit */unsigned int) (-((~(min((((/* implicit */long long int) var_5)), (-6603267975494120438LL)))))));
                        }
                    } 
                } 
                arr_66 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */int) (short)-18867)) + (2147483647))) >> (((/* implicit */int) arr_61 [i_6 + 2])))));
                arr_67 [i_6] [i_7] [i_6] = (unsigned short)49592;
            }
            for (unsigned int i_19 = 1; i_19 < 21; i_19 += 1) 
            {
                var_31 -= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 3677530590U)) / (-9051265203478801914LL))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_6])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) (short)827)), (-3200444303326758259LL)))))));
                arr_70 [i_6] [i_6] [i_6] [20ULL] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_19] [i_19] [i_19 - 1] [i_19 - 1])) ? (-9051265203478801926LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38))))))));
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (466204277U)));
                /* LoopSeq 1 */
                for (long long int i_21 = 1; i_21 < 22; i_21 += 3) 
                {
                    arr_76 [i_6] [i_6] = ((/* implicit */signed char) 769279716676019049LL);
                    var_33 ^= ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) + (9223372036854775807LL)))));
                    arr_77 [i_6] [i_7] [i_6] [i_6] [i_6] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) << (((arr_32 [i_20] [i_7] [i_6]) - (2040389396U)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) 1023U)) || (((/* implicit */_Bool) (unsigned short)43750)))))));
                    arr_78 [i_6] [i_6] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_75 [i_6] [i_6] [i_20] [i_21] [i_21] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_6 - 1]))) : (var_8));
                }
            }
            arr_79 [i_6] [i_7] [i_7] = ((/* implicit */long long int) max((((/* implicit */short) min(((signed char)51), ((signed char)59)))), (max((((/* implicit */short) (signed char)-52)), ((short)-18867)))));
            arr_80 [i_6] [i_6] = ((/* implicit */unsigned short) (-((+(11017428720928300962ULL)))));
        }
        arr_81 [i_6] [i_6] = ((/* implicit */int) (short)31665);
    }
    for (int i_22 = 0; i_22 < 14; i_22 += 3) 
    {
        var_34 -= ((/* implicit */short) (unsigned short)65535);
        var_35 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) var_5))))));
    }
}
