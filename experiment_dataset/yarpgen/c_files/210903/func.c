/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210903
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((var_7) << (((((/* implicit */int) ((unsigned char) var_1))) - (98))))))));
    var_17 = ((/* implicit */unsigned char) (-(min((var_14), (((/* implicit */int) var_3))))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned long long int) var_8))))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_12))) : (((/* implicit */long long int) ((var_5) - (((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (549755813376LL)))))))));
        var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_0 [(unsigned char)1] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (unsigned char)227))))))), (var_10))))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) var_6);
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22935)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 80752640U)) ? (549755813376LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))))))))), (max((980245888U), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2788166338U) | (((/* implicit */unsigned int) arr_12 [(short)4] [i_2] [(short)4] [(_Bool)1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (max((8452817061299903339LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -999936547)) : (arr_11 [i_1] [20] [i_3] [i_3] [i_2] [i_1]))))))));
                    }
                } 
            } 
            var_24 *= ((/* implicit */_Bool) 5LL);
            var_25 = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_7)))))), ((!(((/* implicit */_Bool) var_14))))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned int) ((int) var_3))))));
        }
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
        {
            var_27 -= ((((arr_14 [12U] [12U]) == (arr_14 [22LL] [i_5]))) ? (((((((/* implicit */_Bool) 262142U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32548))) : (arr_3 [i_1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) var_10)));
            arr_15 [i_5] [i_5] = ((/* implicit */int) (-(arr_3 [i_5])));
            arr_16 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */long long int) min((var_8), (((/* implicit */int) arr_9 [i_5] [i_1] [(short)10]))))) : (var_12)));
        }
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        arr_25 [i_7] [i_6] [19LL] [19LL] [(signed char)13] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1270730722U)) ? (((/* implicit */int) arr_19 [i_1] [i_6] [i_7])) : (arr_17 [i_1])))))) ? (((/* implicit */unsigned long long int) (((~(var_10))) ^ (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (arr_14 [i_7] [i_7]))))))) : (((((/* implicit */_Bool) ((short) -549755813358LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8] [i_6] [i_1]))) : (min((((/* implicit */unsigned long long int) var_5)), (21ULL))))));
                        var_28 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 1198478663U)) ? (((/* implicit */int) (_Bool)1)) : (920926922))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_6])), (var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_17 [(signed char)1])) : (var_12)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) >> (((arr_23 [i_1] [2U] [i_6] [(short)4]) - (3372594645U))))))))));
            var_30 = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_31 = ((((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_3 [i_9])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11728)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [(_Bool)1] [i_9] [i_9]))))), (min((var_11), (((/* implicit */unsigned int) var_1)))))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) min(((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)22]))) | (-549755813336LL)))))), (((var_7) <= (((/* implicit */int) var_3)))))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned char i_12 = 3; i_12 < 21; i_12 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) arr_13 [i_11 - 1] [i_12 + 1] [i_11 - 1])) ? (var_6) : (((/* implicit */unsigned long long int) var_14))))));
                            var_34 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_9] [i_10] [i_11] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_9] [i_9])))))) * (((((/* implicit */_Bool) var_5)) ? (var_13) : (15849479464865443838ULL))))) != (((max((var_6), (((/* implicit */unsigned long long int) arr_17 [i_1])))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_17 [i_9]) : (var_8))))))));
                            arr_36 [i_12] [(_Bool)1] [i_10] [(_Bool)1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_12] [i_9] [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) | (204237969)))) ? (var_4) : (-134217728LL))))));
                            var_35 = ((/* implicit */long long int) min(((+(((/* implicit */int) arr_13 [i_9] [i_9] [i_12])))), (((/* implicit */int) min((arr_10 [i_11 - 2] [i_11] [i_12 - 2] [i_12 + 1]), (((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)))))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_10 [i_9] [i_9] [(unsigned char)6] [i_1])) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_9] [i_9])) : (((/* implicit */int) (_Bool)1))))));
                arr_37 [i_1] [i_1] [i_1] [i_1] = var_3;
            }
            for (unsigned long long int i_13 = 4; i_13 < 20; i_13 += 3) 
            {
                arr_40 [i_1] [i_1] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) 32767ULL))));
                var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 17299605233328867543ULL))))), (((((/* implicit */int) arr_4 [i_13 - 4])) ^ (((/* implicit */int) arr_4 [i_13 - 1]))))));
            }
        }
        var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32765)) * (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_14 = 1; i_14 < 16; i_14 += 3) 
    {
        arr_43 [(unsigned char)1] = ((/* implicit */unsigned long long int) arr_13 [i_14] [i_14] [i_14]);
        /* LoopSeq 1 */
        for (short i_15 = 3; i_15 < 18; i_15 += 3) 
        {
            arr_47 [i_14] [i_15 + 1] [i_15] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (short)-24727)) ? (arr_21 [i_14] [i_14]) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) arr_21 [i_14 - 1] [i_15 - 2])) ? (((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_17 [19ULL])) ? (((/* implicit */unsigned long long int) arr_44 [i_14] [(unsigned char)16])) : (65520ULL)))))));
            var_40 -= ((/* implicit */unsigned long long int) var_7);
        }
    }
    var_41 = var_9;
}
