/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51694
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_16 = var_3;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) (short)25679);
                            var_17 ^= max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (+(var_3)))) ? (9223372036854775807LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_3]))))))));
                            arr_16 [i_4] [i_1 - 1] [i_0] [i_4] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1 - 1])) <= (arr_4 [i_0])))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) 1059088215U))))), (max((((/* implicit */unsigned int) arr_14 [i_4] [i_1] [i_2] [i_3] [i_1])), (var_3)))))));
                            arr_17 [i_1 - 1] [i_1 + 1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_1 - 1]);
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (var_6) : (var_6))))))));
                            var_19 += ((/* implicit */unsigned short) var_13);
                            var_20 = ((/* implicit */int) (-(9223372036854775807LL)));
                            var_21 = ((/* implicit */short) (-(((arr_4 [i_0]) & (arr_4 [i_0])))));
                        }
                        arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_18 [i_0] [i_0 + 2] [i_0]), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_13 [i_1] [i_1] [i_0] [i_0] [i_1 + 1] [i_1] [i_1])))) : (max((arr_11 [i_0] [i_0]), (((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1 - 1] [i_0] [i_1 - 1] [(short)6] [i_1 + 1]))))));
        }
        var_22 = ((/* implicit */unsigned short) arr_5 [i_0]);
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        arr_33 [i_8] [i_9] = ((/* implicit */unsigned char) 529434459U);
                        arr_34 [i_6] [i_7] [(unsigned char)9] [i_9] = max((((/* implicit */int) ((_Bool) var_7))), (var_6));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_10 = 1; i_10 < 13; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    {
                        arr_41 [i_10] [i_10] [i_10 + 1] = var_1;
                        var_23 = (((~(arr_30 [i_10 - 1] [i_6]))) <= (min((arr_30 [i_6] [i_6]), (arr_30 [i_6] [i_7]))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 4) /* same iter space */
        {
            arr_45 [i_6] [i_6] = ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_31 [i_6] [i_6] [i_12] [i_12])), (var_6)))));
            var_24 += arr_5 [i_12];
        }
        arr_46 [i_6] = ((/* implicit */long long int) min((1255303916U), (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6])))), (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                {
                    arr_53 [i_14] [i_14] [i_13] [i_6] = ((/* implicit */unsigned short) (short)-28398);
                    var_25 = ((/* implicit */unsigned int) arr_0 [(short)19]);
                }
            } 
        } 
    }
    for (int i_15 = 1; i_15 < 13; i_15 += 4) 
    {
        arr_56 [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_15]))));
        arr_57 [i_15] = ((/* implicit */int) arr_11 [i_15] [i_15]);
        arr_58 [i_15] [i_15 - 1] = min((((((/* implicit */unsigned int) arr_30 [i_15] [i_15 + 1])) * (var_12))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) ^ (arr_40 [i_15 + 1] [i_15] [i_15])))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_30 [i_16] [i_16]), (var_11)))))) ? (((((/* implicit */_Bool) 5686245911768186273LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((var_5) ? (arr_25 [i_16] [i_16]) : (var_1)))))) : ((-(min((((/* implicit */long long int) var_14)), (-9223372036854775807LL)))))));
        arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_16] [i_16] [i_16])) ? (arr_30 [i_16] [i_16]) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
        var_27 = ((/* implicit */long long int) var_15);
    }
    var_28 = ((/* implicit */unsigned int) (short)-25370);
}
