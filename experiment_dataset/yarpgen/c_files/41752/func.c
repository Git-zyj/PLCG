/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41752
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
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((unsigned short) var_15);
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / ((+(var_2)))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            var_17 *= ((/* implicit */unsigned long long int) arr_7 [(unsigned char)12] [(unsigned char)12]);
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                arr_12 [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned int) (+(arr_8 [i_1 - 2] [i_2 - 1])));
                arr_13 [i_0] [9] [i_1] = ((/* implicit */short) (+(var_14)));
            }
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_18 [i_0] [i_4] [i_3] [i_4] &= ((/* implicit */unsigned short) ((unsigned char) -601413722189503920LL));
                        arr_19 [5] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((long long int) -601413722189503920LL));
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            var_18 = ((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */int) arr_6 [i_5] [i_0])))) | ((-(arr_17 [i_5] [i_5] [i_5] [i_0]))));
            var_19 = (~(arr_8 [i_0] [i_5]));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) (!(((arr_20 [i_0] [i_5] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                        var_21 = ((/* implicit */short) (-(arr_15 [0LL] [i_5] [i_6])));
                        var_22 = (i_6 % 2 == 0) ? (((/* implicit */signed char) ((arr_26 [i_6]) << (((arr_23 [i_6] [i_6] [i_5] [i_6]) - (14259705598086586199ULL)))))) : (((/* implicit */signed char) ((arr_26 [i_6]) << (((((arr_23 [i_6] [i_6] [i_5] [i_6]) - (14259705598086586199ULL))) - (1383029670843613494ULL))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_22 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                        var_24 = ((/* implicit */short) ((((arr_15 [i_0] [i_6] [i_7]) < (601413722189503933LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_7]))) : (-601413722189503930LL)));
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            var_25 = ((/* implicit */int) arr_2 [i_8]);
            var_26 = ((/* implicit */int) arr_14 [i_0] [i_8] [i_8]);
            arr_30 [i_8] [i_8] [i_8] = (-(arr_15 [i_8] [i_0] [i_0]));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_27 = ((/* implicit */int) (-(601413722189503953LL)));
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                        arr_36 [i_0] [i_8] [i_8] = ((/* implicit */signed char) var_14);
                        arr_37 [i_9] [(signed char)4] |= -601413722189503934LL;
                    }
                } 
            } 
        }
    }
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
    {
        var_29 = min(((~(((/* implicit */int) arr_39 [i_11] [i_11])))), (var_11));
        var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8887500334004464379LL)) ? (601413722189503933LL) : (601413722189503915LL)));
        var_31 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((arr_8 [i_11] [i_11]) | (((/* implicit */int) var_5)))) ^ (var_8)))), (((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11] [i_11]))) : (((((/* implicit */_Bool) -601413722189503938LL)) ? (((/* implicit */unsigned long long int) var_15)) : (arr_28 [i_11] [(short)12] [i_11])))))));
        var_32 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) (signed char)-3))))))));
        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) -601413722189503938LL))));
    }
}
