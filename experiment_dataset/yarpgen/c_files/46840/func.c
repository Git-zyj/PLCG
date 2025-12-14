/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46840
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_2] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_7 [i_0 - 1] [i_0 + 3])))) >= (arr_2 [i_1] [(short)22])));
                        arr_13 [i_1] [(signed char)3] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) - (805306368U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_16 [(unsigned char)19] [(signed char)9] [i_4] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((arr_0 [i_0]) ? (var_6) : (var_11)))))));
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483645)) ? (((var_4) | (((unsigned long long int) arr_10 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (~(var_11)))))))));
        }
        for (long long int i_5 = 2; i_5 < 24; i_5 += 2) 
        {
            var_14 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1090974029)) && (((/* implicit */_Bool) 262016)))))) / (max((var_6), (((/* implicit */long long int) var_3))))))));
            var_15 -= (+((+(arr_15 [i_0] [i_0] [i_5]))));
        }
    }
    for (int i_6 = 1; i_6 < 24; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */int) (!(var_1)))) : (((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_6 [i_6] [i_6])) : (((/* implicit */int) (short)31063))))))) % ((~(((((/* implicit */_Bool) 1090974035)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (int i_9 = 2; i_9 < 21; i_9 += 3) 
                {
                    arr_31 [i_7] [i_8] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_4 [i_7] [i_9])) & (((/* implicit */int) var_1))))))) : (max((((arr_21 [(unsigned char)12] [i_7]) >> (((-33554432) + (33554462))))), (((/* implicit */unsigned long long int) -1090974021))))));
                    arr_32 [i_6] [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((1090974015), (((/* implicit */int) (_Bool)1))))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6 - 1] [i_6 - 1]))) : (arr_27 [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
                    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_7] [i_8] [(_Bool)1])) ? (((/* implicit */long long int) arr_7 [i_7] [i_7])) : (arr_9 [i_6 + 1] [i_8] [i_9])))));
                }
            }
            for (int i_10 = 2; i_10 < 24; i_10 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) var_6);
                arr_36 [8] [i_6] [i_10] [(_Bool)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_21 [i_6 - 1] [i_10 - 1]) >= (arr_21 [i_6 - 1] [i_10 - 1]))))));
            }
            arr_37 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_6 + 1] [i_6 - 1] [i_7])))))) ? (((/* implicit */int) ((((/* implicit */int) (short)31063)) > (15)))) : (((/* implicit */int) min((arr_26 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_7]), (arr_26 [i_6] [i_6 - 1] [i_6 - 1] [i_7]))))));
            var_19 |= ((/* implicit */int) ((_Bool) (unsigned char)178));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 22; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            var_20 = ((/* implicit */int) arr_24 [i_7] [i_12] [i_13]);
                            var_21 -= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 2626735333U)) ? (arr_30 [i_11 - 1] [i_11 - 1] [i_7]) : (-1785798721))));
                            var_22 ^= ((/* implicit */int) arr_43 [i_6] [i_7] [i_6] [i_7] [i_13]);
                        }
                        var_23 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)8308)), (var_4))), (((/* implicit */unsigned long long int) 33554433))))) ? (((/* implicit */int) ((short) arr_15 [i_6 + 1] [i_11 + 2] [i_6]))) : (18));
                    }
                } 
            } 
        }
        for (int i_14 = 1; i_14 < 22; i_14 += 2) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)80)) ? (arr_21 [i_6] [i_14]) : (((/* implicit */unsigned long long int) arr_1 [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)96))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (arr_27 [i_6] [i_14] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) -1788695469)) >= (arr_23 [i_6 - 1] [i_6 - 1])))))));
            arr_48 [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31064)))))) ? (((((/* implicit */_Bool) (unsigned short)2443)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_35 [i_6] [i_6] [i_6])))) : (((((/* implicit */_Bool) (short)-31041)) ? (((/* implicit */int) arr_6 [(signed char)20] [i_14 - 1])) : (134217727)))))) ? (((/* implicit */unsigned long long int) min((min((var_9), (-9024385528248410901LL))), (((/* implicit */long long int) var_8))))) : (arr_21 [i_6] [i_6])));
            arr_49 [12] [i_6] [(unsigned char)22] = ((/* implicit */unsigned int) var_4);
        }
        arr_50 [i_6] = ((unsigned char) min((arr_25 [1ULL] [i_6] [i_6 + 1]), (arr_25 [i_6] [i_6 - 1] [i_6 + 1])));
        arr_51 [i_6] = (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 32766)) ? (arr_45 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6] [i_6] [i_6]))))))));
        var_25 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6 - 1])))))) && (((/* implicit */_Bool) ((long long int) arr_41 [i_6] [(_Bool)1] [i_6 - 1] [i_6] [i_6]))))) ? (((/* implicit */int) (!(arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1])))) : (((/* implicit */int) (short)-31041))));
        arr_52 [i_6] [i_6] = ((((((((/* implicit */_Bool) (unsigned char)80)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6 - 1]))))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_35 [i_6] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) arr_0 [i_6 - 1])))));
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((_Bool) min((max((((/* implicit */long long int) var_10)), (var_6))), (((/* implicit */long long int) var_3))))))));
}
