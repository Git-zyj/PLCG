/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214508
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_1))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((unsigned long long int) arr_4 [i_1])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (short i_4 = 4; i_4 < 17; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (2865225193U))) ? ((~(arr_15 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) arr_6 [i_2]))));
                            var_18 = ((/* implicit */long long int) (-(arr_19 [i_4] [i_4] [i_4] [i_4] [i_4 + 2])));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_16 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5])) : (((((/* implicit */_Bool) (unsigned short)8184)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_4] [i_2] [i_2] [i_1]))) : (arr_12 [i_1] [i_1] [i_1] [i_1])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_6] [i_1] [i_6])) : (((((/* implicit */int) var_12)) / (arr_9 [i_6])))));
                var_21 = (+(((/* implicit */int) var_10)));
            }
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                var_22 = ((((((/* implicit */_Bool) 4503599627337728LL)) ? (4503599627337728LL) : (((/* implicit */long long int) -1083997589)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1620318950)) != (arr_5 [i_1] [i_2]))))));
                arr_25 [i_1] [i_1] [i_7] = ((/* implicit */int) ((short) (_Bool)1));
            }
        }
        for (short i_8 = 2; i_8 < 18; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) arr_15 [i_8] [i_11]);
                            var_24 = ((/* implicit */_Bool) (+((-((-(((/* implicit */int) var_12))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_8]);
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                var_26 = ((/* implicit */int) max((1615337405U), (251658240U)));
                var_27 |= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (~(201326592U)))), (max((arr_15 [i_12] [i_8]), (((/* implicit */unsigned long long int) arr_22 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) var_3))));
                var_28 += ((/* implicit */signed char) min((((/* implicit */int) arr_27 [i_1] [i_1] [i_1])), (min((1899443906), (((/* implicit */int) (unsigned char)201))))));
            }
            var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_1)) + ((-(((/* implicit */int) var_2))))))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_30 = arr_10 [i_1];
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_15 = 1; i_15 < 18; i_15 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) arr_21 [i_1] [i_8] [i_13] [i_13]);
                            var_32 += ((/* implicit */unsigned char) ((((3534270160687104733LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)32))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 71776119061217280ULL))) : (arr_19 [i_8] [i_15] [i_15 - 1] [i_15 - 1] [i_15])));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 6027975612517385561ULL))) ? (((((/* implicit */_Bool) arr_29 [i_13] [i_14] [i_15])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_19 [i_1] [i_8] [i_13] [i_14] [i_15]))) : (((/* implicit */unsigned long long int) arr_35 [i_8] [i_8] [i_8] [i_8]))));
                        }
                        for (unsigned short i_16 = 1; i_16 < 18; i_16 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) var_7))));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((arr_17 [i_1] [i_13] [i_8 + 3] [i_14] [i_16] [i_14] [i_16 + 3]), (arr_17 [i_16] [i_16] [i_8 - 2] [i_14] [i_16] [i_16] [i_16 - 1]))))));
                            arr_47 [i_16] [i_8] [i_13] [i_8] [i_8] [i_8] [i_1] = ((/* implicit */unsigned int) ((short) max((arr_6 [i_8 + 3]), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-4503599627337729LL)))))));
                            arr_48 [i_1] [i_1] [i_1] [i_13] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_1] [i_8] [i_8] [i_8 + 1]))))), (((unsigned int) arr_35 [i_1] [i_8] [i_8] [i_8 - 2]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_17 = 1; i_17 < 18; i_17 += 3) /* same iter space */
                        {
                            arr_51 [i_8] [i_8] [i_13] [i_14] [i_17] = ((/* implicit */unsigned short) ((arr_16 [i_8 - 2] [i_14] [i_14] [i_17] [i_14] [i_17 + 1]) / (arr_16 [i_8 - 1] [i_8 - 1] [i_8] [i_14] [i_17] [i_17 + 3])));
                            var_36 = ((/* implicit */signed char) ((arr_31 [i_17] [i_8] [i_8] [i_8] [i_8 + 3] [i_8]) & (arr_31 [i_17] [i_17] [i_8] [i_8] [i_8 + 3] [i_1])));
                            var_37 &= ((/* implicit */int) ((arr_21 [i_8 - 2] [i_8 + 3] [i_8 + 2] [i_8 + 3]) & (arr_21 [i_8 - 2] [i_8 + 3] [i_8 + 2] [i_8 + 3])));
                            var_38 = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                } 
            } 
        }
        for (long long int i_18 = 3; i_18 < 20; i_18 += 3) 
        {
            var_39 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_40 [i_1] [i_18] [i_18] [i_18])) ? (arr_37 [i_18 - 2] [i_18 - 2] [i_1] [i_18 - 2]) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)57351))))))) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_18] [i_18] [i_18 + 1] [i_18] [i_18 - 3] [i_18]))))));
            arr_56 [i_18] [i_18] = ((/* implicit */unsigned int) (~(arr_29 [i_1] [i_18] [i_1])));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    {
                        var_40 -= ((/* implicit */signed char) min(((+(((/* implicit */int) (unsigned char)30)))), (((((/* implicit */_Bool) arr_28 [i_1] [i_18])) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) var_4)))))))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (unsigned short)61783)) : (1778620371)));
                        var_42 = ((/* implicit */_Bool) max(((((-(1899443906))) ^ (((/* implicit */int) ((signed char) 7617192471010359671ULL))))), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))));
                        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) max((-4503599627337728LL), (((/* implicit */long long int) (_Bool)1)))))));
                        var_44 -= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_10))))));
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) 3593405795744797280LL))));
            var_46 |= ((/* implicit */int) var_2);
        }
        for (unsigned int i_21 = 3; i_21 < 18; i_21 += 3) 
        {
            var_47 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
            var_48 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((arr_61 [i_21] [i_21]) & (((/* implicit */int) arr_43 [i_1] [i_21] [i_1] [i_21] [i_1]))))))), (min((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))))), (((/* implicit */unsigned long long int) arr_36 [i_21 + 3] [i_21] [i_21 + 2] [i_21]))))));
            var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_28 [i_21 + 2] [i_21 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)140))))) ? (2109715695738944305ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)1792)))))));
        }
        arr_65 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((var_2) ? (((/* implicit */int) arr_62 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_62 [i_1] [i_1] [i_1] [i_1]))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (arr_35 [i_1] [i_1] [i_1] [i_1])))), (((unsigned long long int) -12500877)))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) - (6838324979015533530ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)9567)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)75)))))))));
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 10; i_22 += 2) 
    {
        var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) (!(((/* implicit */_Bool) 4503599627337728LL)))))));
        var_52 = ((/* implicit */long long int) ((int) (~(4503599627337728LL))));
        var_53 *= ((/* implicit */short) arr_30 [i_22] [i_22] [i_22]);
        /* LoopNest 3 */
        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 2) 
        {
            for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
            {
                for (int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    {
                        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1)))))));
                        var_55 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)22365))) > (6027975612517385561ULL)));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 4) 
    {
        for (unsigned char i_27 = 4; i_27 < 6; i_27 += 3) 
        {
            for (unsigned short i_28 = 0; i_28 < 10; i_28 += 3) 
            {
                {
                    var_56 = ((/* implicit */short) ((int) (-(((/* implicit */int) ((unsigned char) (unsigned char)127))))));
                    var_57 = ((/* implicit */unsigned long long int) min((var_57), (min((71776119061217281ULL), (((/* implicit */unsigned long long int) (unsigned short)8184))))));
                    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (var_10))))) + (((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_28] [i_27] [i_26] [i_26]))) : (arr_40 [i_26] [i_27] [i_28] [i_28])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_27 - 3] [i_27 + 4] [i_27 - 3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_73 [i_26] [i_27] [i_26] [i_28])))) / (arr_29 [i_27] [i_27 + 4] [i_27 - 1])))));
                    var_59 = ((/* implicit */long long int) (unsigned char)129);
                }
            } 
        } 
    } 
    var_60 = ((/* implicit */_Bool) var_12);
}
