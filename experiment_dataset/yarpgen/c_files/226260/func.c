/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226260
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
    var_13 |= (-(9349113674056995407ULL));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_18 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524))) : (9097630399652556207ULL))))) ^ (9097630399652556195ULL)));
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_12 [(signed char)12] [i_0 + 1] [i_0 + 3] [19LL])) ? (arr_12 [i_0 - 1] [i_0 + 1] [(_Bool)1] [i_1]) : (arr_12 [i_0] [i_0 + 1] [i_0] [i_2]))), (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 + 3])), (max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_1] [i_1] [i_3] [(_Bool)1]))))))));
                                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_1] [i_2] [i_3] [i_3]) & (((/* implicit */int) arr_11 [(signed char)14] [i_1] [i_0 + 2] [i_3] [i_0] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_3] [i_4])) << (((arr_14 [i_4] [i_4] [i_4] [(short)5]) + (825204954)))))), (arr_9 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1])))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_1] [i_1] [i_0] = arr_17 [i_1] [i_1] [i_1] [i_0] [i_0];
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (5003754083072825960LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_6] [i_7])))))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            arr_36 [i_5] [i_6] [i_7] [i_5] [i_7] [20U] = ((/* implicit */long long int) arr_29 [i_5] [i_6] [12LL] [i_8]);
                            var_17 = ((/* implicit */unsigned char) min((arr_34 [i_5] [i_6] [i_5]), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_2)), (arr_28 [8U] [i_7] [i_6] [i_5])))) ? (((((/* implicit */_Bool) arr_25 [i_6] [0ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_31 [i_6] [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) (unsigned short)33700)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (var_12)))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_10] [i_8] [i_7] [(short)7] [(signed char)8] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33625)) && (((/* implicit */_Bool) (unsigned char)5))))) : ((~(((/* implicit */int) (unsigned short)65515)))))));
                            var_18 = ((/* implicit */signed char) var_3);
                            var_19 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) var_11))) ? (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (min((((/* implicit */long long int) (unsigned char)86)), (var_3))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_22 [10ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [(signed char)15] [i_6] [i_6] [i_6]))) : (arr_31 [i_5] [i_5] [i_5] [i_5])))))));
                            var_20 ^= ((/* implicit */unsigned short) (((~(arr_23 [i_7] [i_8]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_5]))))))));
                        }
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_28 [i_8] [i_6] [i_6] [i_5]))));
                        arr_41 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */short) (+(arr_29 [(short)12] [i_6] [i_7] [i_8])));
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((_Bool) arr_35 [i_5]));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    {
                        var_23 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_11] [i_11] [i_5])) && (((/* implicit */_Bool) arr_43 [i_5] [i_5] [i_12])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_14 = 2; i_14 < 19; i_14 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [6ULL] [6ULL] [i_14 - 2] [i_14] [i_14 - 1])) ? (((/* implicit */int) arr_38 [i_14] [i_14 + 1] [i_14 - 2] [(short)11] [i_14 + 1])) : (((/* implicit */int) arr_38 [5] [20U] [i_14 + 2] [i_14] [i_14 + 1])))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_13])) ? (((/* implicit */int) arr_46 [i_5] [i_11] [i_13])) : (((/* implicit */int) arr_46 [i_14 + 2] [(unsigned short)9] [i_14 + 1]))));
                            arr_53 [i_5] [i_11] [i_13] [(short)20] [7ULL] = ((/* implicit */long long int) arr_50 [i_14] [i_13] [i_13] [(signed char)5] [i_5]);
                            arr_54 [i_5] [(signed char)16] [(signed char)6] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5] [i_11] [i_13] [i_13] [i_13]))) - (arr_34 [i_5] [i_14 + 1] [i_12])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_5] [i_11] [(_Bool)1] [(_Bool)1] [i_14])) ? (((/* implicit */int) (short)27561)) : (((/* implicit */int) (unsigned short)17))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_11) : (var_6)))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            var_26 = ((/* implicit */int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_5] [i_5] [i_12] [11U] [i_15]))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)64742)) + (((/* implicit */int) arr_38 [i_15] [i_13] [i_12] [i_11] [i_5]))))))), (((/* implicit */unsigned long long int) min(((+(arr_39 [i_5] [i_5] [i_12] [i_5] [i_15]))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_52 [19LL] [i_11] [i_5] [i_13] [i_15] [i_5])))))))));
                            var_27 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)65520)))) || (((/* implicit */_Bool) arr_50 [(signed char)18] [i_13] [i_15] [i_11] [i_5])))))) >= (((((/* implicit */_Bool) arr_44 [i_5] [i_5] [i_12])) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_4))))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1600427793)))))) : (arr_34 [i_11] [i_12] [i_15])));
                            var_29 = ((/* implicit */unsigned int) max((((long long int) arr_30 [i_5] [i_12] [i_13] [i_15])), (((/* implicit */long long int) ((signed char) arr_46 [i_5] [i_5] [i_5])))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_56 [i_5] [i_15] [i_12] [19] [i_12]), (((/* implicit */unsigned char) arr_49 [i_5] [i_5] [i_5] [i_5]))))) >> (((/* implicit */int) min(((signed char)18), (((/* implicit */signed char) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) arr_52 [i_5] [i_11] [i_5] [i_12] [i_13] [i_15])) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_15] [i_5] [i_15] [i_13]))))))) : (((((arr_25 [i_5] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [21ULL] [i_11] [10ULL]))))) ? (min((((/* implicit */unsigned long long int) arr_33 [i_5] [15ULL] [i_5] [i_13] [i_15])), (var_10))) : (max((((/* implicit */unsigned long long int) (signed char)127)), (5ULL))))))))));
                        }
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
                        {
                            arr_59 [4] [(unsigned short)16] [(unsigned short)16] [i_13] [i_13] [i_11] = ((/* implicit */unsigned int) max((((unsigned long long int) 7326442364580956528ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_5] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_5] [i_11])))))));
                            var_31 = ((/* implicit */long long int) min((min((((unsigned long long int) var_3)), (max((arr_50 [(short)5] [(short)5] [i_13] [i_13] [i_13]), (arr_50 [i_5] [i_11] [i_13] [i_13] [i_16]))))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -6046591947410925299LL))))), (arr_46 [i_5] [i_13] [i_16]))))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                        {
                            arr_63 [(_Bool)1] [(_Bool)1] [i_13] [i_12] [7ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(short)13])) ? (31ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_17] [i_17] [1U]))))))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)44422)) : (((/* implicit */int) (short)127)))))));
                            arr_64 [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned char) arr_51 [i_5] [i_11] [i_11] [i_5] [i_12] [i_13] [i_17]);
                        }
                    }
                } 
            } 
        } 
        arr_65 [12LL] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_5]))))) || (((/* implicit */_Bool) (short)-9471))))), (min((min((((/* implicit */unsigned int) arr_47 [i_5] [11U] [i_5] [(short)8])), (604161578U))), (((/* implicit */unsigned int) arr_45 [i_5]))))));
    }
    for (int i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                for (int i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    {
                        arr_79 [i_21] [i_19] [i_19] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_21 [i_21]) - (arr_21 [i_18])))) ? (((((/* implicit */_Bool) arr_38 [i_18] [i_18] [i_18] [13LL] [i_21])) ? (8430251435792565367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_19] [i_19] [i_19] [(unsigned short)2] [i_19]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_18] [i_19] [i_20] [i_18] [i_21]))) : (arr_21 [i_18]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            var_33 += ((/* implicit */signed char) arr_45 [8ULL]);
                            var_34 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 4053916555U))))));
                            var_35 = ((/* implicit */unsigned char) ((unsigned short) 2376566526U));
                            var_36 = ((/* implicit */signed char) var_11);
                        }
                        arr_82 [i_19] [i_21] [i_21] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_4))) && ((!(((/* implicit */_Bool) 8457255889646357312ULL)))))))));
                    }
                } 
            } 
        } 
        arr_83 [i_18] = ((/* implicit */signed char) ((int) ((unsigned int) ((unsigned long long int) var_2))));
    }
    var_37 = ((/* implicit */short) var_9);
}
