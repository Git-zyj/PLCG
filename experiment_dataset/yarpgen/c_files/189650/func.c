/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189650
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) var_12))) <= (var_9)))), (max((var_3), (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (arr_0 [i_0])))))));
            arr_6 [0ULL] &= ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_2 [i_0] [(_Bool)0] [0])));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            arr_11 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) >= (arr_0 [i_2 + 1]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
                        arr_19 [i_0] [i_4 - 1] [1LL] [i_0] [i_0] [i_0] = min((((_Bool) arr_15 [i_2 - 1])), (((((/* implicit */int) arr_12 [i_4 + 1] [i_0])) <= (((/* implicit */int) arr_12 [i_4 - 1] [i_0])))));
                        arr_20 [i_0] = (~((~(12132390757434396689ULL))));
                    }
                } 
            } 
            arr_21 [8U] [0ULL] [i_2] = ((/* implicit */unsigned int) arr_9 [i_0]);
        }
        for (int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            arr_25 [i_0] [(short)7] = ((/* implicit */int) ((signed char) ((signed char) ((((/* implicit */_Bool) var_4)) && (var_8)))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 8; i_6 += 4) 
            {
                for (int i_7 = 4; i_7 < 9; i_7 += 1) 
                {
                    {
                        arr_30 [i_0] [(unsigned short)0] [i_0] [(unsigned short)0] = ((/* implicit */long long int) max((((unsigned long long int) arr_16 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_0])), (((/* implicit */unsigned long long int) ((int) arr_10 [i_5 - 2] [i_7 - 4])))));
                        arr_31 [i_0] = ((/* implicit */int) var_8);
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */short) ((unsigned long long int) var_4));
                            arr_36 [i_0] [i_0] [i_0] [i_6] [i_8] [i_5] [i_6] = (-(((/* implicit */int) arr_15 [i_8])));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_22 [i_7] [i_7]);
                            arr_38 [6LL] [6LL] [i_0] [i_7] [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) arr_9 [i_7 + 1])));
                            arr_39 [i_8] [i_0] [i_7] [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (32256)));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [2U] [i_0] = ((/* implicit */int) ((unsigned int) arr_2 [i_0] [i_0] [3]));
                            arr_43 [i_0] [i_0] [i_0] [i_7] [9LL] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((short) arr_9 [i_7 + 1]));
                            arr_44 [i_0] [i_5] [3U] [i_0] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                            arr_45 [i_0] [i_7] [i_5] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_10)) != (var_3))) || ((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_6]))))));
                        }
                        for (signed char i_10 = 2; i_10 < 8; i_10 += 3) 
                        {
                            arr_49 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [(signed char)1] [i_6])) * (((/* implicit */int) ((var_0) <= (((/* implicit */int) arr_15 [i_10]))))))))));
                            arr_50 [(signed char)1] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */int) (+(var_3)));
                            arr_51 [i_0] [i_5] [i_5] [i_6] [(signed char)8] [i_6] [(signed char)8] = ((/* implicit */unsigned char) max(((~(arr_40 [i_5] [i_10] [i_10 - 2] [i_7] [i_5]))), (((/* implicit */long long int) var_9))));
                            arr_52 [i_7] [i_10] [i_7] [i_0] [i_6] [i_5] [i_0] = ((/* implicit */_Bool) ((long long int) arr_17 [i_0] [i_5 - 2] [i_6] [i_0] [i_0] [i_0]));
                        }
                        arr_53 [i_0] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) (~(((arr_41 [6] [6] [i_7 - 2] [i_7] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_7])))))));
                    }
                } 
            } 
            arr_54 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_0)))) && ((((-(arr_4 [i_0]))) >= (((/* implicit */int) arr_15 [i_0]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        {
                            arr_64 [i_5] [i_11] = ((/* implicit */_Bool) ((signed char) arr_48 [i_0] [i_12] [i_11] [i_0] [i_0]));
                            arr_65 [i_0] [i_5] [5U] [i_0] [i_13] [i_13] = ((/* implicit */long long int) (~(min((arr_28 [i_13] [(short)2] [i_5] [i_0]), (arr_28 [i_13] [i_11] [i_11] [i_5 + 1])))));
                            arr_66 [i_0] [(unsigned char)9] [(unsigned char)7] [(unsigned char)7] [3U] [i_0] = ((/* implicit */short) ((unsigned int) min((arr_28 [4LL] [i_5 + 1] [i_13] [i_13]), (arr_28 [i_0] [i_5 + 1] [i_13] [3]))));
                        }
                    } 
                } 
            } 
        }
        arr_67 [i_0] = ((/* implicit */short) min((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_24 [i_0]))));
    }
    for (unsigned char i_14 = 1; i_14 < 20; i_14 += 2) 
    {
        arr_71 [i_14] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_0)))));
        /* LoopSeq 1 */
        for (long long int i_15 = 2; i_15 < 21; i_15 += 1) 
        {
            arr_75 [13] [i_14] = ((/* implicit */signed char) arr_69 [i_15] [i_14]);
            arr_76 [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [i_15 - 2])))))));
            arr_77 [i_15 - 1] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((short) var_10)), (((/* implicit */short) arr_68 [i_15])))))));
            arr_78 [i_14] [i_14] = ((/* implicit */signed char) var_5);
        }
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        arr_83 [(short)7] = ((/* implicit */unsigned char) arr_79 [5U]);
        arr_84 [i_16] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    }
    var_14 = ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (short)112)) != (((/* implicit */int) (_Bool)1))))), ((short)-31607)));
    var_15 = ((/* implicit */unsigned char) ((var_13) >> ((((~(var_9))) - (3858728942U)))));
}
