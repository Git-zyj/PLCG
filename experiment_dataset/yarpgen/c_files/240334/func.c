/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240334
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
    var_20 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) 4540791951279691358ULL))));
            arr_5 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            arr_17 [i_2] [i_2] [i_3] [i_3] [i_5] = (short)-1;
                            arr_18 [i_0] [i_4] [(signed char)10] [i_2] [i_2 - 1] [i_0] |= (+(var_17));
                        }
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_22 [i_2] [i_4] [i_4 - 1] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_20 [i_0] [(_Bool)1] [i_3] [i_0] [(_Bool)1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_7 [i_3] [i_2])));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_13 [i_2 - 1] [i_4] [i_6]))));
                            arr_23 [i_3] [i_2] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_2])) ? ((-(arr_4 [i_2] [i_2]))) : ((-(((/* implicit */int) (short)11590))))));
                            var_23 += ((/* implicit */short) 356925746);
                        }
                        arr_24 [i_2] = ((/* implicit */unsigned int) arr_9 [i_0] [i_2] [i_3] [i_4]);
                    }
                } 
            } 
            arr_25 [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_14 [2] [i_2] [i_0 - 1] [i_0] [i_2] [i_0])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0] [i_2]))) & (arr_8 [9U] [i_2])))));
            var_24 = ((/* implicit */unsigned short) arr_4 [i_0] [i_2]);
        }
        for (unsigned short i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            var_25 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 2])) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 - 2] [i_0 - 2]))) >= (arr_4 [i_0 + 1] [i_0 - 1])));
            arr_29 [i_0] [i_7] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((long long int) arr_16 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_7]))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (min((((/* implicit */long long int) arr_9 [i_7] [(short)16] [i_0] [i_0 - 2])), (arr_1 [i_0]))))));
            var_26 = max((((((var_14) + (2147483647))) << ((((((+(arr_4 [i_0] [i_7]))) + (164328876))) - (30))))), (((/* implicit */int) (((-(((/* implicit */int) var_16)))) > (((((arr_4 [i_0] [i_7]) + (2147483647))) >> (((((/* implicit */int) (unsigned short)57651)) - (57634)))))))));
        }
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_0])))) : ((+(0LL))))))))));
    }
    for (int i_8 = 3; i_8 < 14; i_8 += 2) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (short)1)), (((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_3 [i_8] [i_8])))))) << (((((((/* implicit */_Bool) (signed char)-29)) ? ((~(13480294711715169262ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8 + 2] [i_8] [i_8] [i_8]))))) - (4966449361994382297ULL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_36 [i_8] [i_8] [i_9]);
            arr_38 [i_8] [i_9] = ((/* implicit */signed char) arr_26 [i_8] [i_9]);
            var_28 = ((/* implicit */signed char) var_4);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        arr_44 [i_8] [i_8] [i_8] = arr_34 [i_8] [i_10] [i_8];
                        arr_45 [i_8] [i_11] [i_8] [i_11] [i_8] [0U] = (i_8 % 2 == zero) ? (((/* implicit */short) (((-(arr_4 [i_9] [i_10]))) << (((arr_31 [i_8]) - (977274995)))))) : (((/* implicit */short) (((-(arr_4 [i_9] [i_10]))) << (((((arr_31 [i_8]) - (977274995))) - (488383195))))));
                        arr_46 [i_8] [(signed char)13] [i_8] = ((/* implicit */int) ((unsigned long long int) ((354645040495604587ULL) != (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_12 [i_8] [(_Bool)1] [i_8] [(_Bool)1]))));
    }
}
