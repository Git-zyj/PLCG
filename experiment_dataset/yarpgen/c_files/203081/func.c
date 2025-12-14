/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203081
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0 + 2] [i_1 - 3] [i_1 - 3] [i_2 - 1] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_8 [i_0 + 4] [i_1]))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_2 - 1] [i_3 - 2] [i_3 - 2] [i_4 + 1] [i_4] [i_3])))));
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) + (0LL)));
                            arr_16 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_14 [i_0 + 3] [i_1] [i_1] [i_1] [i_3 - 2] [i_1])) < (((/* implicit */int) arr_2 [i_0 + 4])))))));
                        }
                    } 
                } 
            } 
        }
        arr_17 [i_0] &= ((/* implicit */long long int) ((int) (-(arr_1 [i_0 + 3] [i_0 + 3]))));
        var_22 = ((/* implicit */int) min((var_17), (((/* implicit */long long int) var_10))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_3 [i_0] [i_0])))), (((/* implicit */long long int) (_Bool)1))));
                        var_24 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_4)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((max(((-(arr_0 [i_7]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [i_6] [4U] [i_6])), (arr_11 [(signed char)7] [8] [i_6] [i_6])))))), (((max((((/* implicit */long long int) (short)-24781)), (arr_0 [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0 + 4] [i_0 + 4]))))))));
                            var_26 = ((/* implicit */unsigned short) ((signed char) ((var_10) & (((arr_21 [(unsigned char)9] [(unsigned char)9] [i_7]) ? (((/* implicit */int) arr_7 [i_0 + 3])) : (arr_4 [i_8] [i_6] [i_5]))))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 13; i_9 += 4) 
                        {
                            var_27 = var_8;
                            var_28 |= ((((arr_12 [i_0 + 1] [i_0 + 4] [i_0 + 3] [i_6 - 1] [i_9 - 2]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((/* implicit */int) var_7))));
                            arr_34 [i_9 - 2] [i_7] [i_6] [i_5] [(short)2] = ((arr_19 [i_0 + 4] [i_5]) / (((((/* implicit */_Bool) arr_19 [5ULL] [i_6 + 1])) ? (arr_19 [i_0 + 3] [i_5]) : (arr_19 [i_5] [i_5]))));
                        }
                        var_29 *= ((/* implicit */short) (-((-(((/* implicit */int) arr_27 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 4] [i_0 + 2]))))));
                    }
                } 
            } 
            arr_35 [i_0] [i_0] = (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_5] [i_0 + 2] [i_5] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (((arr_32 [i_0] [(unsigned char)10] [(unsigned char)10] [i_5] [(short)12] [(signed char)13]) ^ (((/* implicit */long long int) arr_30 [i_0] [i_0] [(short)3] [i_5] [i_5])))))));
            var_30 += ((/* implicit */unsigned char) arr_0 [3]);
            var_31 = ((((/* implicit */_Bool) (short)-24781)) || (((/* implicit */_Bool) arr_31 [i_0] [(short)0] [i_0] [i_0 + 4] [i_0] [i_5])));
        }
    }
    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        var_32 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_37 [i_10])) / (((/* implicit */int) var_16)))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                {
                    var_33 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) * (8191))) * (((var_12) * (((/* implicit */int) arr_42 [i_10] [10LL] [i_11] [i_12]))))))) ? (((/* implicit */long long int) 360416123)) : (max((((/* implicit */long long int) max((((/* implicit */int) (_Bool)0)), (var_12)))), (((arr_38 [i_10]) - (7083772694456366396LL))))));
                    var_34 = ((/* implicit */long long int) min((max((arr_36 [i_10]), (arr_36 [i_10]))), (((arr_36 [i_10]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13899)))))));
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (short)511))))), (((-7083772694456366397LL) ^ (-7083772694456366397LL)))))))));
                    var_36 = ((/* implicit */signed char) arr_38 [i_10]);
                }
            } 
        } 
        var_37 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (-8LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_10] [(unsigned short)16] [i_10]))) : (arr_38 [i_10])))));
    }
    for (unsigned char i_13 = 1; i_13 < 11; i_13 += 1) 
    {
        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_27 [i_13] [i_13] [(signed char)4] [i_13] [i_13 + 2] [i_13 - 1])) : (((/* implicit */int) (signed char)-4))))))) ? (((/* implicit */int) (unsigned short)20596)) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_13 + 1])), (var_18)))) < (((((/* implicit */int) var_13)) << (((/* implicit */int) (_Bool)1))))))))))));
        var_39 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) max((((/* implicit */long long int) arr_9 [i_13] [i_13 - 1])), (var_8))))), (arr_29 [i_13])));
    }
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        arr_51 [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_47 [i_14]))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 19; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                {
                    arr_58 [i_14] [i_14] [i_15] = ((/* implicit */unsigned short) ((_Bool) var_18));
                    var_40 &= ((/* implicit */int) (((-(var_17))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)21324))))))));
                    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_56 [i_15 - 1] [i_15] [i_15 - 1]))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */int) min((var_42), ((-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_10)))))))))));
}
