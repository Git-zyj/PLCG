/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196026
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
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) min(((+(var_4))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) 0))))))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) -9))));
    }
    for (unsigned char i_1 = 1; i_1 < 24; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_13 |= -437819230;
            var_14 ^= (-((~(var_0))));
            var_15 ^= ((/* implicit */unsigned int) -1);
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_2] [i_2] [i_4] [i_5]);
                            var_17 = ((/* implicit */int) arr_14 [i_2] [i_1 + 1] [i_1] [i_1 - 1] [i_3]);
                        }
                    } 
                } 
                arr_16 [i_1 + 1] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]));
            }
            /* vectorizable */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_18 *= (((-(var_9))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)0)))));
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(2))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)3305))))))));
                }
                /* LoopSeq 2 */
                for (int i_8 = 2; i_8 < 24; i_8 += 3) 
                {
                    arr_25 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] [i_1] = ((/* implicit */short) -437819222);
                    arr_26 [i_8] [2] [i_8] [i_8 + 1] &= ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_2] [i_6]))) ? (var_4) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_8 + 1] [i_2] [i_2] [i_2] [i_2] [i_1 - 1])))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]);
                }
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_29 [22U] [i_2] [i_6 - 1] [i_9] [i_9] |= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_1))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(3858459097U))))));
                    var_24 += ((/* implicit */unsigned long long int) ((unsigned char) (-(var_9))));
                }
                var_25 -= ((/* implicit */short) (((+(5596058058135110478LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_6 - 1] [i_2] [i_6 - 1] [i_1] [i_6])))))));
            }
            arr_30 [i_2] = (+(14255228442556631372ULL));
        }
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 23; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    {
                        arr_38 [i_1 + 1] [i_10] [i_10] [i_12] = ((/* implicit */int) ((long long int) 2110769445U));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            arr_42 [i_10] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (+(var_0)))) ? (5596058058135110478LL) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26512))))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_27 [i_1 - 1] [i_11 + 1] [i_11 - 1] [i_10] [i_13])), (arr_15 [i_12] [i_12] [i_10] [i_12] [i_12])))) ? ((+((~(arr_28 [i_10] [i_13] [i_11] [i_12] [i_13]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((-437819219) == (-437819230))))))));
                            var_27 = ((/* implicit */unsigned long long int) 73272326U);
                        }
                        arr_43 [i_1 - 1] [i_10] [i_11 + 2] [i_10] [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_8)))));
                        var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_41 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1])), (arr_13 [i_1 + 1] [i_1] [i_10] [i_11 + 1] [i_12]))))) == (6488254620455239536LL)))), ((~(((unsigned int) arr_2 [i_1 - 1]))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])), (4191515631152920243ULL))));
    }
    /* LoopSeq 1 */
    for (short i_14 = 3; i_14 < 14; i_14 += 3) 
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 437819201)) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_11 [i_14 - 2] [i_14] [4] [i_14])), (arr_10 [(short)8] [i_14 - 3])))) ? (((/* implicit */unsigned long long int) ((2110769445U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_14 - 3] [(unsigned char)8])))))) : ((~(arr_4 [i_14 + 1] [i_14 - 1]))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_31 [i_14 - 1] [i_14])), (2184197847U)))) / (5256411876692545806ULL))))))));
        var_31 -= ((/* implicit */short) (-(min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) -437819230)), (var_3)))))));
        /* LoopSeq 4 */
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
        {
            var_32 = ((/* implicit */unsigned int) min((-437819224), (((/* implicit */int) ((unsigned char) ((_Bool) arr_27 [i_14] [i_14] [i_14 - 3] [i_14] [i_14 + 1]))))));
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) min((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_1 [i_14 - 1] [i_15])), (arr_7 [i_14] [i_15])))), (-1952732535)))))))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) min((arr_48 [i_14 - 1] [i_15]), (((/* implicit */long long int) 3858459119U))))), (var_4)))))));
            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((min((((/* implicit */long long int) (+(arr_47 [i_14 - 1])))), (var_3))), (((/* implicit */long long int) var_7)))))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_36 ^= ((/* implicit */int) arr_36 [i_16] [22ULL] [i_14] [i_14 + 1]);
            var_37 += ((/* implicit */unsigned int) var_8);
            var_38 = ((/* implicit */unsigned long long int) 2184197850U);
            var_39 += ((/* implicit */int) (signed char)-106);
        }
        for (int i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */int) min((var_3), (((/* implicit */long long int) ((unsigned char) min((arr_9 [i_14] [i_17] [i_17] [i_17]), (((/* implicit */unsigned long long int) (unsigned char)13))))))));
            var_41 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_14] [i_17] [i_17] [i_17] [i_17] [i_14 - 2]))));
            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_47 [i_14]))))))));
            /* LoopSeq 2 */
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                var_43 -= ((/* implicit */_Bool) (-(min((24ULL), (((/* implicit */unsigned long long int) var_8))))));
                var_44 = ((/* implicit */unsigned char) (short)-1);
            }
            for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) 
            {
                arr_59 [i_19] [i_14 - 3] [i_19] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_54 [i_17])) ? (((/* implicit */int) arr_11 [i_14] [i_17] [(short)22] [i_19])) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) arr_12 [i_14 - 3] [i_14 - 2] [i_17] [i_19] [i_19] [i_19]))))));
                var_45 ^= ((/* implicit */int) var_2);
            }
        }
        for (int i_20 = 0; i_20 < 15; i_20 += 1) /* same iter space */
        {
            arr_62 [i_20] = (i_20 % 2 == 0) ? (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_17 [i_20] [i_20]) + (arr_17 [i_20] [i_20])))), (min((((/* implicit */unsigned long long int) -6267138339628562874LL)), (14255228442556631372ULL)))))) : (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_17 [i_20] [i_20]) - (arr_17 [i_20] [i_20])))), (min((((/* implicit */unsigned long long int) -6267138339628562874LL)), (14255228442556631372ULL))))));
            arr_63 [i_14] [i_20] = ((/* implicit */long long int) arr_60 [i_14 + 1] [i_20] [i_20]);
            arr_64 [i_14 - 2] [(unsigned char)4] [i_14] &= ((/* implicit */long long int) ((int) (~(min((((/* implicit */unsigned int) arr_50 [i_14])), (var_7))))));
            arr_65 [i_20] [i_20] = ((/* implicit */int) arr_5 [i_14 + 1] [i_14 - 2] [i_20]);
        }
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (min((((((/* implicit */_Bool) arr_49 [(_Bool)1])) ? (((/* implicit */long long int) 3858459119U)) : (9067682029552202681LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((int) var_10)), (((/* implicit */int) var_2))))), (var_6))))));
}
