/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44102
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_5 [i_0] [(short)12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) var_17))));
            var_19 = ((/* implicit */long long int) var_5);
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                var_20 = ((/* implicit */int) ((unsigned long long int) (signed char)-2));
                arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (var_14))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_18)))))));
                var_21 = ((/* implicit */short) var_9);
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    for (signed char i_4 = 4; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                            var_23 = ((/* implicit */short) max((var_23), (var_16)));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            arr_28 [i_8] [i_6] [i_6] [(unsigned short)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((var_6) ? (min((var_17), (((/* implicit */unsigned int) var_5)))) : (var_17)))) : (0LL)));
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */short) min(((+(var_1))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_7))))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((-(((/* implicit */int) (short)(-32767 - 1))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (var_2))))))));
                            var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))), (((var_6) ? (((/* implicit */int) (unsigned short)16)) : (var_2)))));
                            arr_30 [i_0] [i_0] [(unsigned char)23] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((var_8), (var_8))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1341715841)) ? (((/* implicit */int) var_3)) : (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (signed char)-11))))))))));
                        }
                    } 
                } 
                var_26 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_18)) ? (var_0) : (var_17))) >> (((min((((/* implicit */unsigned long long int) var_2)), (9494078728542952022ULL))) - (9494078728542952019ULL)))));
                arr_31 [i_0] [i_5] [i_6] = ((/* implicit */short) max(((-(var_0))), (((/* implicit */unsigned int) 10))));
            }
            for (int i_9 = 3; i_9 < 20; i_9 += 3) 
            {
                var_27 &= var_7;
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    var_28 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) (unsigned char)8))))));
                    arr_36 [i_0] [i_5] [i_5] [i_0] &= ((/* implicit */unsigned long long int) var_1);
                    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_13)), (var_8))))))));
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_11))))))))));
                }
                for (short i_11 = 3; i_11 < 23; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_45 [i_0] [i_5] [i_9 + 1] [i_9] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_16))))));
                        var_31 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) - (((((/* implicit */_Bool) var_1)) ? (3754423320U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 17883085871174936698ULL))))))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) / (var_1)))) : (min((((/* implicit */unsigned int) var_11)), (var_17))))))))));
                        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                    }
                    for (short i_13 = 4; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        arr_48 [i_9] [i_11] [i_9 - 3] [i_9] [i_5] [i_5] [i_9] = var_3;
                        var_34 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 17575006175232ULL)) && (var_6))))));
                    }
                    for (short i_14 = 4; i_14 < 21; i_14 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_12))));
                        arr_53 [i_0] [i_0] [4ULL] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) min((var_11), (((/* implicit */unsigned short) (_Bool)1)))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((var_1) | (((/* implicit */int) var_13)))) : (((/* implicit */int) var_5))));
                    }
                    arr_54 [i_9] [i_9] = ((/* implicit */long long int) 17575006175232ULL);
                }
                for (short i_15 = 4; i_15 < 22; i_15 += 1) 
                {
                    arr_57 [i_9] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> ((((~(var_17))) - (2194985874U)))))) ? (((/* implicit */unsigned int) var_2)) : (var_17)));
                    arr_58 [i_5] [i_9] [i_15] = ((/* implicit */unsigned long long int) var_15);
                }
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) 23U)))))))) : (((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_6)) : (var_1))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
            }
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((unsigned char) min(((short)15978), (((/* implicit */short) var_5))))))));
        }
        for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 3) 
        {
            var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_3)))));
            arr_62 [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_18))));
            /* LoopNest 2 */
            for (unsigned int i_17 = 4; i_17 < 23; i_17 += 3) 
            {
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) 8830455184129408734ULL))));
                        arr_68 [i_18] = ((/* implicit */short) ((((((/* implicit */int) var_10)) > (var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2270610685484873409LL))))) : (((/* implicit */int) ((((((/* implicit */int) var_9)) | (((/* implicit */int) var_18)))) < (var_15))))));
                    }
                } 
            } 
            var_41 += ((/* implicit */unsigned long long int) (unsigned char)248);
        }
        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) min((min((var_15), (((/* implicit */int) var_11)))), (((/* implicit */int) (!(((_Bool) var_8))))))))));
        arr_69 [i_0] |= ((/* implicit */unsigned char) max((((((/* implicit */int) (signed char)108)) | (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) 178251966U)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
    {
        for (long long int i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            {
                arr_74 [(short)4] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) >= (var_14))))) : (min((var_14), (var_14)))));
                var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) var_15))));
                arr_75 [i_20] = ((/* implicit */short) ((var_14) % (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) var_3)))))));
            }
        } 
    } 
}
