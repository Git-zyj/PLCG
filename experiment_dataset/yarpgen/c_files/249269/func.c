/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249269
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */int) arr_6 [20LL] [i_1] [i_2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) arr_1 [(short)12] [i_2])))))) : (((/* implicit */int) ((signed char) 7168)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) ((_Bool) var_2)))))));
                                var_14 = ((/* implicit */_Bool) max(((-(min((((/* implicit */unsigned long long int) arr_6 [i_1] [(signed char)2] [i_2])), (arr_9 [i_0] [i_1] [i_2] [i_1] [9ULL] [i_4]))))), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) (unsigned short)65511)), (var_5)))))));
                                arr_12 [i_0] [i_1 + 2] [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) ((var_5) << (((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_2])), (-9223372036854775788LL)))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_3 [i_0] [(short)7] [i_1])))) : (16298334232597892467ULL))) - (16298334232597892412ULL)))));
                                var_15 = ((/* implicit */unsigned long long int) min((((unsigned short) ((unsigned short) arr_6 [i_0] [i_0] [i_4]))), (((/* implicit */unsigned short) ((_Bool) max((arr_8 [i_0 + 1] [i_1] [i_2] [i_1]), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -9223372036854775775LL)) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) (unsigned short)55105)))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_17 += ((/* implicit */long long int) (signed char)28);
                        var_18 -= ((/* implicit */int) (unsigned char)7);
                        var_19 = ((/* implicit */unsigned short) ((int) var_2));
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [7ULL]) ? (arr_10 [i_0] [i_1 - 1] [(unsigned short)6] [12U] [(unsigned short)6]) : (((/* implicit */unsigned long long int) arr_8 [(short)10] [i_1] [i_1] [(signed char)18]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((+(2006091192578720628ULL))))))));
                        arr_16 [i_0] [i_0] [(signed char)12] [8] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5595080230749070360ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31274))) : (3580376520U)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        arr_21 [i_1] = ((/* implicit */unsigned short) ((var_7) <= (((/* implicit */unsigned int) (+(min((((/* implicit */int) (short)(-32767 - 1))), (16777215))))))));
                        arr_22 [i_0] [6U] [i_2] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_1] [i_6] [i_2] [i_2] [i_1] [i_0] [i_2]))), ((-(15491962579434127340ULL)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-32764)) ? (10758092224420467519ULL) : (((/* implicit */unsigned long long int) 1029867542U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10758092224420467519ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [20U] [i_1] [i_0] [i_6])))) ? ((-(((/* implicit */int) (unsigned char)73)))) : (((/* implicit */int) ((unsigned char) var_11))))))))));
                        arr_23 [i_0 + 1] [2] [i_6] [(_Bool)1] &= ((/* implicit */long long int) (unsigned short)33871);
                    }
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) (short)-32765)));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */short) (unsigned short)16);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 + 2])) % (((/* implicit */int) arr_13 [i_1] [(_Bool)1] [(_Bool)1] [17] [i_1 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_8)))))))) : (((/* implicit */int) (signed char)-80))));
                            arr_31 [i_1] [9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_2] [i_1 + 2] [i_0 + 1] [i_1] [i_1 + 2] [i_7]) > (arr_15 [i_1] [i_1 + 2] [i_0 + 1] [i_1] [i_1 + 1] [i_8]))))) == ((~(arr_15 [i_0] [i_1 + 1] [i_0 + 1] [i_1] [i_1 + 1] [i_8])))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            arr_34 [(signed char)14] [i_9] [i_9] [i_1] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [18U] [i_1] [i_9])) ? (((/* implicit */int) (short)31280)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))));
                            var_25 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2] [i_1])) : (((/* implicit */int) (short)-21162))));
                            var_26 -= ((arr_18 [i_9] [i_9] [(unsigned short)5] [i_9] [i_1] [i_1 + 1]) ? (7911589474169778779ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43524))));
                            arr_35 [i_1 + 1] [i_1] [10U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2696007389U))));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        arr_40 [i_0 + 1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)165))))) ? (((((/* implicit */_Bool) -9223372036854775778LL)) ? (2147483645) : (((/* implicit */int) (short)1023)))) : (min((var_0), (((/* implicit */int) var_3))))));
                        var_27 = ((/* implicit */short) 12U);
                        arr_41 [i_0] [i_0] [i_1] [9LL] [i_2] [i_10] = ((/* implicit */_Bool) max(((-(((((/* implicit */int) arr_26 [(unsigned short)0] [i_0 + 1] [i_0 + 1] [(unsigned short)0] [i_0])) + (((/* implicit */int) (unsigned short)58583)))))), (((/* implicit */int) arr_38 [i_1] [i_2]))));
                        arr_42 [i_1] [i_1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))));
                    }
                }
            } 
        } 
    } 
    var_28 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), ((~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) -795567113246839136LL)) : (var_2)))))));
    var_29 = ((unsigned short) max(((+(458860200))), (((/* implicit */int) (unsigned char)148))));
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) min((((/* implicit */short) ((0U) < (var_7)))), (var_9))))));
}
