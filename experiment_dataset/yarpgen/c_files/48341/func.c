/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48341
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_15)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) ((unsigned char) var_4))))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)18)), (-2147483643)))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7697))) - (var_6))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7697)))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)17139)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (unsigned short)57839)))) >> (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 4] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_11))))));
            var_20 = ((/* implicit */unsigned char) ((2419954564103401972ULL) | (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) var_13))), (((((/* implicit */unsigned int) arr_5 [i_0] [(unsigned char)8] [i_0])) % (var_6))))))));
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (var_8)))) ^ (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (14889079460042711835ULL)))));
            /* LoopNest 2 */
            for (long long int i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_21 ^= ((/* implicit */_Bool) ((signed char) var_10));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_17))))), (2419954564103401977ULL))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_14)) : (18446744073709551615ULL)))))));
                        arr_16 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)13742)) ? (arr_5 [i_0 - 4] [i_3 - 1] [i_0]) : (arr_5 [i_0 + 1] [i_3 + 1] [i_0]))) < (max((arr_5 [i_0 - 2] [i_3 + 1] [i_0]), (arr_5 [i_0 - 1] [i_3 + 1] [i_0])))));
                        var_23 = max((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) min((arr_0 [i_0]), (arr_0 [i_0])))));
                    }
                } 
            } 
            var_24 |= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 3] [(unsigned short)2] [i_0 - 2] [i_0])), (16026789509606149655ULL))) >> (((((/* implicit */int) var_15)) + (138)))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
        }
        arr_17 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0 + 1]), (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(0ULL)))) ? (((((/* implicit */_Bool) (unsigned short)57861)) ? (arr_4 [i_0]) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (short)-20043))))) : (min((var_18), (arr_15 [i_0] [i_0 + 1] [(unsigned char)4] [i_0 - 1] [i_0 - 1])))));
        arr_18 [(signed char)4] [i_0 - 2] &= ((/* implicit */short) ((unsigned short) (unsigned short)57839));
    }
    for (int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_26 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)7697)) >= (((/* implicit */int) (short)25150))))), (var_6)));
        var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 449914334403009382ULL)) ? (arr_9 [i_5]) : (((/* implicit */int) (unsigned char)229))))));
        var_28 = ((/* implicit */unsigned char) ((var_4) <= (((/* implicit */int) (signed char)-12))));
        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (max((((unsigned char) var_18)), (((/* implicit */unsigned char) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
                        {
                            {
                                arr_33 [2LL] [i_7] [i_8] [i_9] [i_10 - 3] &= 16838063633573311255ULL;
                                arr_34 [i_10 + 1] [i_9] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) min((var_13), (((/* implicit */long long int) var_9))))))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((min((((unsigned long long int) arr_30 [i_6 + 1] [(short)4] [i_7] [i_7])), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (var_6)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) ((_Bool) arr_20 [4])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 9; i_13 += 1) 
                        {
                            {
                                arr_44 [(_Bool)1] [i_7] [(unsigned short)6] [i_7] [i_6] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (~(-1)))), (var_0))), (((/* implicit */unsigned long long int) 65535U))));
                                arr_45 [i_6] [i_7] [8ULL] [i_11] [i_13] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)57850))));
                                var_30 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_32 [i_6 - 1] [(_Bool)1] [i_6 - 1] [i_13 + 1] [i_13 + 2] [i_13 - 2])) ? (((/* implicit */unsigned long long int) 2137191528)) : (var_18))) & (((/* implicit */unsigned long long int) (~(var_8))))));
                                var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (min(((+(2419954564103401952ULL))), (max((((/* implicit */unsigned long long int) -1625566207)), (var_12)))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) (((~(arr_20 [i_6 - 1]))) << (((((((/* implicit */_Bool) arr_22 [i_6 + 1])) ? (13268053180921837401ULL) : (arr_22 [i_6]))) - (13268053180921837401ULL)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (unsigned int i_15 = 4; i_15 < 10; i_15 += 4) 
                    {
                        {
                            var_33 += ((/* implicit */signed char) (_Bool)1);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_16 = 1; i_16 < 10; i_16 += 3) 
                            {
                                var_34 = ((/* implicit */short) arr_22 [i_16 - 1]);
                                arr_53 [i_16] [i_7] [i_7] [(unsigned short)7] = ((/* implicit */unsigned short) var_14);
                                var_35 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) 0U)) < (18446744073709551615ULL))));
                            }
                            /* LoopSeq 2 */
                            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 2) 
                            {
                                arr_57 [i_17] [i_15 - 1] [i_7] [(unsigned char)3] [i_6] = ((/* implicit */long long int) arr_27 [i_15 - 3] [i_15 - 4] [i_15] [i_6 + 1]);
                                var_36 = ((/* implicit */unsigned long long int) min((var_36), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (5027358074921308782ULL) : (((/* implicit */unsigned long long int) arr_24 [i_6 - 1] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-14)))) : (arr_20 [i_6 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 17U)), (var_14)))) ? (arr_51 [i_15] [i_15 + 1] [(_Bool)0] [i_15 - 1] [i_15 + 1] [i_17]) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_16)))))))))));
                            }
                            for (signed char i_18 = 1; i_18 < 9; i_18 += 3) 
                            {
                                var_37 = ((/* implicit */_Bool) var_3);
                                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((min((var_12), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)82))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) var_13)) : ((+(arr_41 [i_6] [i_15] [i_6]))))))))));
                                var_39 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) -65643906)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((arr_1 [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6920073372240367758LL)))))));
                            }
                            arr_60 [i_7] [i_15] = ((/* implicit */long long int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
}
