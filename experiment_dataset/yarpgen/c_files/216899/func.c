/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216899
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
    var_16 = ((/* implicit */unsigned short) (~(var_10)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_3 + 1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) var_8)))) > (((((/* implicit */int) (!(((/* implicit */_Bool) 6ULL))))) << (((/* implicit */int) (_Bool)1))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_2]))))), (max((((/* implicit */unsigned char) (signed char)-54)), (var_8)))))) < (((/* implicit */int) min((((unsigned char) arr_6 [i_0] [i_1] [i_2 + 1] [i_0])), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [8])) < (arr_2 [i_2])))))))));
                        arr_16 [i_0] [i_2] = ((/* implicit */int) ((unsigned char) min((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_8 [13] [i_1] [(_Bool)1] [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 4) 
                        {
                            arr_23 [i_0] [i_5] [i_2 + 1] [(unsigned char)14] [(unsigned char)14] [i_0] = ((/* implicit */unsigned long long int) var_14);
                            var_17 += arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 2];
                            arr_24 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((min((arr_14 [i_2 - 1] [i_5] [i_5] [i_5]), (arr_14 [i_2 + 1] [(signed char)15] [i_2 + 2] [i_6 + 3]))), (((/* implicit */unsigned long long int) ((arr_14 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) <= (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_18 &= ((/* implicit */signed char) ((((arr_26 [i_2 + 2] [i_0 - 2] [i_2 + 2] [i_2 + 1] [i_0 - 2] [(unsigned char)13]) == (((/* implicit */int) (unsigned short)18403)))) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (((+(arr_0 [i_2]))) < (10684281569845451496ULL))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) (signed char)-54))), (1438290723)))) ? ((-(var_1))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (202953257)))) ? (arr_2 [i_2 - 1]) : (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)51))))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) % (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (var_5)))) ? (((/* implicit */unsigned long long int) 928738397951160994LL)) : (min((288230376151711743ULL), (((/* implicit */unsigned long long int) (signed char)57)))))))))));
                        }
                    }
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (((((((/* implicit */_Bool) 18446744073709551589ULL)) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [(unsigned short)10])) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) var_3)) & (((/* implicit */int) var_6))))))));
                    arr_28 [i_0] [i_0] [i_0] [i_2] = min((((/* implicit */long long int) ((arr_26 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_1] [i_2 - 2]) < (((arr_26 [(unsigned char)3] [i_1] [(unsigned char)3] [12LL] [i_0] [12LL]) - (((/* implicit */int) (_Bool)1))))))), (max((max((var_7), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) min((var_15), (((/* implicit */signed char) var_3))))))));
                }
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_15)), (arr_2 [i_0 - 3])))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */short) arr_31 [(unsigned short)4])))))) & ((-(4810575634794505103LL))))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_25 [(unsigned short)14]))) ? ((+(((/* implicit */int) (unsigned char)2)))) : ((-(((/* implicit */int) (signed char)-46))))))) ? (2596026259U) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_10)))))))));
                            var_24 *= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) 255)) || (((/* implicit */_Bool) var_15))))) & (((/* implicit */int) (signed char)98)))) > (((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((((/* implicit */int) (unsigned char)12)) * (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (unsigned char)192))))));
                        }
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                        {
                            var_25 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                            arr_41 [i_9] [i_11] [i_9] [i_0] [i_1] [i_1] [i_0] = min((((arr_20 [i_11] [i_0] [i_0] [1] [7U] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1091087266828767660ULL)))))))), (((/* implicit */unsigned long long int) (+(min((arr_33 [13ULL] [(unsigned char)15] [i_9] [13ULL]), (((/* implicit */int) arr_11 [i_0] [i_9] [i_0]))))))));
                        }
                        arr_42 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) 288230376151711759ULL))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) var_10)) ? (14LL) : (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_12] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [10ULL] [10ULL] [i_12] [i_0]))))))));
                        arr_49 [i_0] [i_0] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((int) arr_2 [i_0])), (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_6))))))))));
                        var_27 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)183)) % (17)))) | (var_12)))), (((arr_48 [i_0] [i_1] [i_12] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_44 [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67)))))))))));
                        var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) & (max((var_1), (((/* implicit */int) arr_12 [i_12] [i_13 - 1] [(signed char)12] [i_13 + 3]))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            arr_57 [i_0 - 3] [(unsigned char)4] [i_0] = ((/* implicit */signed char) ((var_4) * (((((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_0] [i_1] [i_0] [i_14] [i_14])))))) ? (((/* implicit */int) ((var_1) > (((/* implicit */int) (signed char)67))))) : (max((896126812), (((/* implicit */int) var_6))))))));
                            var_29 = ((/* implicit */unsigned int) var_4);
                            arr_58 [(signed char)1] [(unsigned short)11] [(unsigned short)11] [i_1] [(signed char)1] [i_14] [i_0] = ((/* implicit */unsigned short) ((var_10) >= (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) (unsigned short)11)))))));
                        }
                        arr_59 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 370405020489362432LL)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (signed char)-86))))), ((~(arr_46 [i_0] [i_0] [(short)6] [i_14])))));
                        arr_60 [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) -5389224343236445874LL))) ? (((/* implicit */int) ((unsigned char) min(((signed char)57), (arr_39 [i_0] [i_0] [i_12] [i_14] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3]))))) : (((/* implicit */int) (short)0))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        arr_63 [12] [12] [i_0] = ((/* implicit */unsigned char) ((max(((-(0ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_31 [i_16])), (var_13)))) ? (arr_6 [i_0] [i_0] [i_0 - 3] [i_0]) : (((/* implicit */int) arr_13 [6U] [6U] [i_0 - 1])))))));
                        arr_64 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_52 [i_0] [i_0] [i_1] [i_0] [12U] [i_0]) ? (arr_21 [i_0] [6ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58)))))) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) var_15)))) : (((/* implicit */int) ((23LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) + (min((((((/* implicit */_Bool) 3205769730092268397LL)) ? (((/* implicit */unsigned long long int) 4898374576245856216LL)) : (18446744073709551596ULL))), (((/* implicit */unsigned long long int) ((signed char) 11467613370099070369ULL)))))));
                        var_30 = 27LL;
                    }
                    arr_65 [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)53)), (((((/* implicit */int) var_8)) % (((((/* implicit */int) var_3)) + (((/* implicit */int) var_11))))))));
                    arr_66 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)65524)), (-3205769730092268394LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) arr_47 [i_12] [i_1] [(_Bool)1] [i_0])), (arr_17 [i_0] [i_0] [(unsigned short)2] [(unsigned short)2]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)126))) ^ (min((-3205769730092268423LL), (((/* implicit */long long int) 2014193668)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            {
                                arr_74 [13] [i_1] [i_12] [i_0] = ((/* implicit */long long int) arr_50 [(unsigned char)0] [(_Bool)1] [(unsigned char)0] [(unsigned char)0] [(unsigned short)2] [i_18]);
                                var_31 = (-(((int) min((((/* implicit */long long int) arr_18 [(_Bool)1] [i_0] [i_0] [i_1])), (1167664446196367772LL)))));
                                arr_75 [i_0 + 1] [i_0] [(unsigned char)0] [11ULL] [6LL] [i_18] = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) min((var_12), (-3205769730092268394LL)));
                }
            }
        } 
    } 
}
