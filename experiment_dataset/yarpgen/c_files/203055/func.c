/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203055
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned short) arr_2 [i_0 + 2] [i_0 + 2]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) && (((/* implicit */_Bool) arr_1 [i_0 + 4])))))) * (arr_1 [i_0 + 4]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned int) (short)31)), (arr_1 [i_0 + 4]))) + (((/* implicit */unsigned int) ((-1221398133) / (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((((arr_1 [i_3 - 3]) << (((arr_1 [i_3 - 3]) - (3661503463U))))), (((arr_1 [i_3 - 3]) ^ (arr_1 [i_3 - 1])))));
                        arr_11 [i_2] [i_2] [i_1] [i_0] [i_2] = ((unsigned short) arr_7 [i_3] [i_3] [i_3] [i_2]);
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((-6463699743151333985LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))) + (var_10))))));
                        arr_12 [i_0] [i_1] [i_2] [(signed char)1] = ((/* implicit */unsigned int) ((((((arr_9 [i_0] [8ULL] [i_1] [i_2] [5U] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(arr_5 [i_0] [i_1] [i_2]))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_24 += ((/* implicit */long long int) var_15);
        arr_16 [i_4] [i_4] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_4])) / (((((/* implicit */int) arr_13 [i_4])) * (((/* implicit */int) arr_15 [i_4]))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))) ^ (min((((/* implicit */long long int) (unsigned char)0)), (-6463699743151333985LL))))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((6849226126693181800ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
        {
            arr_21 [i_4] [9LL] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_4])) >= (((/* implicit */int) arr_13 [i_4]))));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) - (var_1)))) && (((((/* implicit */_Bool) arr_15 [i_4])) && (((/* implicit */_Bool) (short)29661))))));
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)3] [i_6]))) / (-6463699743151333985LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_6] [i_7] [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) arr_23 [i_4] [i_7] [i_8] [i_9])))))) : (arr_18 [i_4] [i_4] [i_4])));
                            var_29 &= ((/* implicit */unsigned char) arr_23 [i_4] [i_8 + 1] [i_7] [i_9]);
                            var_30 = ((/* implicit */unsigned short) var_19);
                            var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_4])) ^ (((/* implicit */int) (signed char)50)))) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))) + (21371LL)))));
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_8] [i_8 - 3] [i_7]))));
                        }
                    } 
                } 
                var_33 |= ((/* implicit */signed char) ((((var_10) / (arr_23 [i_4] [18ULL] [i_4] [i_4]))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [(signed char)2])))))));
                var_34 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [22ULL] [i_6] [i_6] [i_6] [i_6])))))));
                arr_29 [i_4] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_4])) << (((((/* implicit */int) arr_14 [i_4] [i_6])) - (34)))));
            }
            var_35 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_6]))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
        }
        var_36 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_26 [i_4] [i_4] [i_4] [i_4])))) && (((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]))));
        var_37 = ((/* implicit */unsigned int) (((-(((/* implicit */int) max((arr_15 [i_4]), (((/* implicit */unsigned short) var_9))))))) & (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        arr_32 [i_10] = ((/* implicit */unsigned short) var_1);
        var_38 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */int) (short)-9032)) * (((/* implicit */int) arr_17 [i_10]))));
        var_40 = ((/* implicit */unsigned char) ((((long long int) (+(arr_7 [i_10] [i_10] [i_10] [(unsigned char)6])))) / (((/* implicit */long long int) ((((/* implicit */int) arr_25 [15ULL] [15ULL])) ^ (((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_27 [i_10] [i_10] [i_10])))))))));
        var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [(short)12] [(short)12] [i_10]) & (arr_5 [i_10] [i_10] [i_10]))))));
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        var_42 *= ((/* implicit */unsigned char) ((((int) arr_19 [i_11] [i_11])) != (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_11] [i_11]))))))));
        var_43 ^= ((((/* implicit */long long int) (-((-(1848997199U)))))) | (max((((/* implicit */long long int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11] [i_11])))))), ((+(arr_5 [i_11] [i_11] [i_11]))))));
        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_11])))))) * (min((((/* implicit */unsigned long long int) 4043656007U)), (arr_7 [(unsigned char)20] [i_11] [i_11] [(signed char)8]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_11] [i_11] [i_11])) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_11]))) - (arr_36 [i_11] [i_11]))) + (7970349482802961880LL))))))))));
        arr_37 [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_28 [(unsigned char)10] [(unsigned char)10] [i_11] [i_11] [i_11]))));
    }
    var_45 ^= ((/* implicit */unsigned char) (((!(((((/* implicit */int) var_3)) == (((/* implicit */int) var_18)))))) && (((/* implicit */_Bool) var_3))));
    var_46 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)29661)), (4688967627757624042LL)))) && (((/* implicit */_Bool) 14856149907729997995ULL)))))) == (var_8)));
}
