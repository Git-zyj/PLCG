/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200199
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
    var_12 &= ((/* implicit */unsigned long long int) (unsigned char)0);
    var_13 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (unsigned short)6))));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), ((unsigned char)0)));
                var_16 = ((/* implicit */long long int) (unsigned char)134);
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)250)))))));
            }
            var_18 = ((/* implicit */int) var_9);
        }
        var_19 = ((/* implicit */int) min((max((((/* implicit */short) (unsigned char)250)), (max(((short)11382), (((/* implicit */short) var_9)))))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -625235978)))))) == (2LL))))));
    }
    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((arr_1 [i_4] [i_4]) % (arr_1 [i_4] [i_4]))))));
            arr_13 [i_3] = ((/* implicit */_Bool) arr_6 [i_3] [i_3] [i_3] [i_3]);
        }
        var_21 = ((/* implicit */long long int) (-(11902900075497962126ULL)));
        arr_14 [i_3] [i_3] = ((/* implicit */int) arr_6 [i_3] [i_3 - 1] [i_3] [i_3 - 1]);
    }
    for (int i_5 = 1; i_5 < 10; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_2 [i_5]);
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)238)))))));
            arr_21 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 5LL)))))) || (((/* implicit */_Bool) ((int) arr_2 [i_5])))));
        }
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_7))));
        arr_22 [i_5] = ((int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        arr_25 [i_7 + 1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [(unsigned char)12] [i_7]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            arr_28 [12LL] = ((/* implicit */unsigned short) (+(var_3)));
            arr_29 [i_7] [i_8] = ((/* implicit */unsigned short) var_1);
        }
        for (signed char i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            arr_32 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2406526175U)) ? (((/* implicit */unsigned int) ((int) (_Bool)1))) : (var_5)));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) 2147483645);
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7])) ? (arr_2 [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-84)))))));
                            arr_41 [i_10] [0LL] [i_10] [i_11] [i_12] [0LL] = ((/* implicit */short) (~(((arr_10 [i_7 + 1] [i_7] [i_10]) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            arr_42 [i_10] [i_11] [i_11] [i_10] [i_9] [i_9] [i_10] = ((long long int) 0);
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_13 = 4; i_13 < 11; i_13 += 4) 
            {
                arr_45 [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_7 + 2] [i_13 + 4]))));
                var_27 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) < (arr_34 [i_13 + 3] [i_7 + 1])));
            }
            for (int i_14 = 4; i_14 < 13; i_14 += 4) 
            {
                arr_48 [i_7] [i_7] = ((/* implicit */unsigned int) arr_10 [i_7] [i_9] [i_14]);
                arr_49 [i_7 - 1] [i_9] [i_14] = ((((/* implicit */_Bool) arr_33 [i_7 + 2] [i_7 + 2] [i_9] [i_14])) || (((/* implicit */_Bool) 1594288134)));
            }
            var_28 *= (!(((/* implicit */_Bool) 2328671597934454857LL)));
        }
        arr_50 [i_7 + 2] &= ((/* implicit */unsigned long long int) ((-7) % (arr_39 [i_7 + 2] [i_7] [i_7 - 1] [i_7 - 1])));
    }
    var_29 *= ((/* implicit */unsigned long long int) (-(((long long int) (unsigned char)248))));
}
