/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41246
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
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) var_1);
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10)))) ? (var_4) : (arr_1 [18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_5))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_5)))))))));
            var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((long long int) var_8)) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) << (((var_12) - (13063519736698247753ULL))))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (((/* implicit */long long int) var_5)) : (var_8))))) : (((int) ((var_3) >= (((/* implicit */unsigned long long int) var_5)))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 3]))))) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_20 = ((((int) arr_4 [i_1 - 1] [i_0 - 1])) >> (((((((/* implicit */long long int) arr_11 [i_0] [i_2 + 1] [i_2] [i_0 - 1] [i_4] [i_2] [i_0])) + (var_11))) + (726518118120034303LL))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                arr_16 [(unsigned short)16] [i_0] [i_5] = (i_0 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned long long int) var_7)) << (((((((/* implicit */_Bool) arr_7 [i_1] [13])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (2746821091867086986LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1))))))) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [11LL] [i_0])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned long long int) var_7)) << (((((((((/* implicit */_Bool) arr_7 [i_1] [13])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (2746821091867086986LL))) - (1276872870499938024LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_1))))))) : (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [11LL] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        {
                            arr_21 [i_1] [i_1] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */int) ((long long int) ((unsigned long long int) (+(arr_15 [i_0])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((int) ((_Bool) arr_10 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 1]));
                            var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                        }
                    } 
                } 
                var_22 = (-(((long long int) arr_10 [i_0] [18ULL] [i_0 - 3] [3LL])));
            }
        }
        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_3)));
            var_24 &= ((/* implicit */long long int) var_13);
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned short) arr_15 [i_0 + 1]))))) : (var_12)));
        }
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                arr_35 [i_0] [i_9] [i_9] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((long long int) arr_7 [(unsigned short)17] [(unsigned short)17])) >> (((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_25 [i_0 + 1] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_25 [i_0 - 2] [i_0] [i_0 + 1]))))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_4))) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_0)) : (var_9)))))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                arr_39 [i_0 - 2] [18] &= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) ((unsigned short) var_9))))));
                var_27 += ((/* implicit */unsigned short) (~((+(arr_23 [i_0] [i_0 - 2] [16ULL])))));
            }
            for (int i_12 = 1; i_12 < 17; i_12 += 2) 
            {
                var_28 = (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0] [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) var_1)))) : (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 3]))))))));
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_24 [i_0] [i_9]))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (arr_23 [i_0 - 3] [i_12 + 3] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                var_30 = ((/* implicit */int) var_0);
            }
            for (int i_13 = 1; i_13 < 19; i_13 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_14 = 3; i_14 < 19; i_14 += 4) 
                {
                    var_31 = ((/* implicit */int) ((unsigned short) (-(var_1))));
                    var_32 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_3)))));
                    var_33 = ((/* implicit */int) arr_46 [i_14] [i_13] [i_13] [i_9] [i_9] [i_0 - 2]);
                }
                for (int i_15 = 2; i_15 < 18; i_15 += 4) 
                {
                    var_34 = (i_0 % 2 == zero) ? ((+(((long long int) ((((/* implicit */int) arr_24 [i_0] [i_9])) >> (((arr_42 [i_0] [i_0] [i_13 + 1]) - (14170527353799304955ULL)))))))) : ((+(((long long int) ((((/* implicit */int) arr_24 [i_0] [i_9])) >> (((((arr_42 [i_0] [i_0] [i_13 + 1]) - (14170527353799304955ULL))) - (2745333221791330942ULL))))))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_9] [i_15 + 1] [i_15] [i_15] [(unsigned short)16]))) ? (((/* implicit */int) ((unsigned char) ((int) var_1)))) : (((/* implicit */int) ((unsigned char) var_6)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((unsigned short) var_10)))));
                        arr_55 [i_0] [i_0] [i_13] [i_16] = var_3;
                    }
                    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)9])) : (((/* implicit */int) var_7))))))) ? (var_9) : (((((/* implicit */_Bool) arr_37 [i_15 + 1] [i_13 - 1] [i_13])) ? (((/* implicit */unsigned long long int) arr_37 [i_15 + 2] [i_13 + 1] [i_13 - 1])) : (var_12)))));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) arr_42 [i_15] [i_15] [i_15]))));
                    }
                }
                for (int i_18 = 1; i_18 < 19; i_18 += 4) 
                {
                    var_39 = ((/* implicit */int) var_13);
                    var_40 &= ((/* implicit */unsigned short) var_2);
                    var_41 += ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
                    var_42 ^= ((/* implicit */unsigned short) var_13);
                }
                arr_60 [i_0] [i_9] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_12)))));
            }
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0 - 3] [i_9] [i_9])) ? (var_3) : (((var_4) + (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) var_10)))))))) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0 - 3] [i_0])))))));
            var_44 = ((/* implicit */long long int) arr_42 [i_0] [i_0] [i_9]);
        }
    }
    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        var_45 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_9 [i_19] [i_19] [i_19] [i_19] [i_19])) ^ (((/* implicit */unsigned long long int) ((int) var_11)))));
        arr_64 [i_19] = ((/* implicit */unsigned char) arr_6 [i_19] [i_19] [0] [i_19]);
    }
}
