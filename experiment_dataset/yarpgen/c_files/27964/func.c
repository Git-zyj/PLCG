/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27964
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
    /* vectorizable */
    for (short i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_0] [i_0 + 3] [i_0] [i_3] [i_3 - 2]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_3] [i_2] [i_1]))))) : (3561109822U)));
                        var_12 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_3]);
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) arr_0 [i_2] [i_3 + 1]))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] |= ((/* implicit */_Bool) (signed char)30);
        arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) 3561109822U)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 6570395228638770079LL)) : (arr_4 [i_0 + 2] [i_0])))));
        var_14 -= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            var_15 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (var_3)))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
                            arr_25 [i_0] [i_4 + 1] [i_5] [i_4] [i_5] [i_7] = ((/* implicit */long long int) (~(-1946212904)));
                            arr_26 [i_6] [i_4] = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_22 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */unsigned int) -1946212915)) : (var_4)))))))));
        arr_32 [i_8] = ((/* implicit */unsigned long long int) -6570395228638770056LL);
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 4) 
        {
            for (int i_11 = 3; i_11 < 19; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_45 [i_12] [i_10] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) arr_3 [i_9]);
                        arr_46 [i_10] [i_10] [i_10] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_10 + 1]))));
                        arr_47 [i_12] = ((/* implicit */int) 78271945273161966LL);
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_35 [i_9] [i_9]))) ? (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_10] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_23 [i_9] [i_9] [i_9] [18LL] [(signed char)20]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) /* same iter space */
                        {
                            arr_62 [i_9] [i_9] [i_14] = ((/* implicit */short) arr_59 [i_14]);
                            arr_63 [i_14] = ((/* implicit */int) 6570395228638770078LL);
                        }
                        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
                        {
                            arr_66 [i_9] [(unsigned char)0] [i_14] [i_15] [i_15] [i_9] = ((/* implicit */short) var_8);
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_15] [i_13])) ? ((-(arr_21 [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_13] [i_13] [(unsigned char)7] [i_15] [i_13] [i_13] [i_15])))));
                        }
                        var_20 = ((/* implicit */_Bool) arr_18 [i_9] [i_9] [(_Bool)1]);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        arr_70 [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_60 [(signed char)2] [i_18] [i_18] [18ULL] [i_18] [i_18] [i_18]))));
        var_21 = ((/* implicit */unsigned char) (+((((_Bool)0) ? (((/* implicit */long long int) 1038145550U)) : (-6570395228638770080LL)))));
        var_22 = 6570395228638770080LL;
    }
    var_23 = ((/* implicit */_Bool) var_10);
}
