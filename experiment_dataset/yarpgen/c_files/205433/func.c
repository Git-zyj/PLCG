/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205433
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
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((((/* implicit */_Bool) ((short) (unsigned char)56))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (9223372036854775807LL))) : (max((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))), (max((var_2), (((/* implicit */long long int) var_6)))))));
        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? ((~(-9223372036854775803LL))) : (((/* implicit */long long int) var_1))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_3] [i_4])))))))) ? ((+(((unsigned int) 204223526)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -835163111)), (4340365471234310420LL)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) ((short) -204223530)))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_3 - 1] [i_3])) ? (var_9) : (((/* implicit */long long int) -204223526))));
                            var_22 ^= ((/* implicit */int) ((unsigned int) arr_15 [i_2] [i_3] [i_3 + 1] [i_3 + 1] [i_5]));
                        }
                        for (int i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            arr_24 [i_3] [i_1] [i_1] = -204223542;
                            var_23 -= ((/* implicit */unsigned int) arr_6 [i_1]);
                            arr_25 [i_1] [i_1] [i_1] [i_4] [i_1] [11U] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_22 [i_3 - 1] [i_3] [i_3 - 1] [i_6 + 3] [i_6 + 2]), (arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6 + 1] [i_6]))))));
                            var_24 *= ((/* implicit */unsigned int) var_2);
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */short) max((arr_7 [i_1] [i_2]), (((/* implicit */long long int) ((((((/* implicit */int) (short)26296)) > (arr_13 [i_8] [i_2] [i_3] [i_2] [i_1]))) ? (var_10) : (((/* implicit */int) min(((short)-26284), (((/* implicit */short) var_6))))))))));
                            var_26 |= ((/* implicit */unsigned char) (short)32767);
                            arr_32 [i_1] [i_2] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */int) ((long long int) (((~(((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32767))) > (var_2)))))));
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */long long int) -220631865)), (65535LL))) % (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                            arr_34 [i_1] [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) (short)32767);
                        }
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), ((+(arr_36 [i_1] [i_2] [i_3] [i_1] [i_9])))));
                            arr_37 [i_1] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 1]))))) ? (((/* implicit */long long int) max((var_17), (((/* implicit */int) arr_11 [i_1] [i_9] [i_3 + 1]))))) : (9223372036854775800LL)));
                            var_28 |= ((/* implicit */long long int) (unsigned char)28);
                        }
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */unsigned char) -204223528);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-204223526)))) ? (((/* implicit */int) (((+(var_8))) >= (var_8)))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_18)) : (var_10))) > (var_17))))));
                            arr_41 [i_1] [i_2] [i_2] [i_7] [i_10] [9U] |= ((/* implicit */long long int) var_5);
                            var_31 = ((max((var_10), (633810361))) - ((~(1084927236))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
                        {
                            arr_44 [i_2] [i_3 - 1] [i_7] = ((/* implicit */unsigned char) (-((+((-(var_0)))))));
                            var_32 -= ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned char)228), ((unsigned char)39)))), (((((/* implicit */_Bool) 274876858368LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)83)) && (((/* implicit */_Bool) (short)32760))))) : (((((/* implicit */_Bool) var_13)) ? (var_10) : (204223526)))))));
                            var_33 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_15 [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_7]))))));
                            var_34 *= ((/* implicit */unsigned int) (~(((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_35 [i_3])) : (((/* implicit */int) (unsigned char)0)))))));
                        }
                        arr_45 [i_3] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) arr_14 [i_3 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3])), (min((((/* implicit */long long int) -1663633746)), (9223372036854775807LL)))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] = ((/* implicit */unsigned char) (-(((int) (unsigned char)213))));
                        var_35 = ((((/* implicit */_Bool) arr_15 [3LL] [i_2] [i_3] [i_3] [i_3 - 1])) ? (max(((+(((/* implicit */int) (unsigned char)9)))), ((~(((/* implicit */int) var_11)))))) : (min((((/* implicit */int) ((signed char) arr_22 [i_1] [i_1] [i_1] [i_3] [i_12]))), ((+(((/* implicit */int) var_11)))))));
                    }
                    var_36 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_3] [i_3] [i_2] [i_1] [i_1])) && (((/* implicit */_Bool) arr_43 [i_1] [i_2] [i_2] [i_3] [(signed char)5]))))), (((((/* implicit */_Bool) 204223526)) ? (arr_43 [i_1] [i_2] [i_3 - 1] [i_2] [i_2]) : (arr_43 [i_1] [i_2] [i_2] [i_2] [i_1])))));
                    arr_49 [i_2] [14U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                }
            } 
        } 
        var_37 += ((/* implicit */long long int) ((unsigned char) max((((/* implicit */long long int) (short)-17206)), (7952455073094473422LL))));
        /* LoopSeq 3 */
        for (short i_13 = 3; i_13 < 17; i_13 += 3) 
        {
            arr_52 [i_1] [i_1] [i_13 + 3] = ((/* implicit */long long int) 757011202U);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_14 = 1; i_14 < 19; i_14 += 1) 
            {
                arr_55 [i_1] [i_13] [12U] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)66)) < (((/* implicit */int) var_16))));
                var_38 ^= ((((/* implicit */_Bool) arr_9 [i_13 + 2])) ? (arr_9 [i_13 + 1]) : (arr_9 [i_13 + 2]));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */long long int) (-(((-1447063943) ^ (((/* implicit */int) var_16))))));
            var_40 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [12LL] [i_1] [i_1] [i_15] [i_1] [i_15]))) * (arr_56 [i_1] [i_1] [i_1]));
            arr_58 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (arr_57 [i_1] [i_15])))) ? ((-(arr_57 [i_1] [i_15]))) : (((/* implicit */unsigned int) max((var_15), (-204223526))))));
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
        {
            var_41 *= ((/* implicit */unsigned int) min((((/* implicit */short) arr_27 [i_16] [i_16] [i_16] [i_1])), (max((((/* implicit */short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (unsigned char)27))))), (var_18)))));
            var_42 -= -274876858370LL;
        }
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 16; i_17 += 2) 
        {
            for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                {
                    var_43 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_16 [14] [i_17 - 2] [i_17] [i_17 - 2] [i_17 - 2]))));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 2; i_19 < 19; i_19 += 4) 
                    {
                        var_44 ^= ((/* implicit */long long int) max((max((var_15), (((/* implicit */int) ((short) (unsigned char)37))))), (((/* implicit */int) var_16))));
                        var_45 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                        var_46 = 204223526;
                        arr_71 [i_18] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_19] [i_17] [i_17] [i_17] [i_1])) || (((/* implicit */_Bool) var_10))))) & (((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_1] [i_18] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_51 [i_1] [i_17 - 2])) : (((/* implicit */int) (unsigned char)112)))))));
                    }
                }
            } 
        } 
        arr_72 [i_1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)94)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_29 [i_1] [(unsigned char)8]))))) ? (min((((/* implicit */long long int) 867463692U)), (arr_62 [i_1]))) : (max((((/* implicit */long long int) arr_29 [i_1] [i_1])), (-1552830911125114314LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [i_1] [i_1] [18] [i_1] [i_1])) ? (((int) (unsigned char)51)) : (((/* implicit */int) ((short) var_12))))))));
    }
    for (short i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        var_47 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_59 [i_20])) : (((/* implicit */int) (unsigned char)211))))) + (-1552830911125114326LL)));
        arr_75 [i_20] = ((/* implicit */unsigned char) -204223515);
    }
    var_48 = ((/* implicit */short) var_13);
    var_49 = ((/* implicit */unsigned int) 198212623);
    var_50 ^= ((/* implicit */int) 805306368U);
}
