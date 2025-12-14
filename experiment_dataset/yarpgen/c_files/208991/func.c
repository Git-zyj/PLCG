/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208991
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((var_1), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1])))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)140))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))));
                            var_21 = ((/* implicit */int) max((var_21), ((((-(((/* implicit */int) (unsigned char)116)))) / (((((/* implicit */_Bool) (unsigned short)2047)) ? (arr_12 [i_1] [i_1] [i_3] [i_4] [i_5]) : (((/* implicit */int) arr_3 [i_4]))))))));
                        }
                        for (int i_6 = 4; i_6 < 22; i_6 += 4) 
                        {
                            var_22 &= ((/* implicit */int) var_3);
                            var_23 = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_3] [i_4] [21LL] [i_4]))) : (arr_16 [i_4] [(short)2] [i_4] [i_4] [i_6 + 1])));
                            var_24 = ((/* implicit */unsigned long long int) arr_7 [(unsigned short)22] [i_1 + 2] [i_6 + 1] [15]);
                        }
                        arr_18 [i_4] [i_2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */int) ((_Bool) var_15));
                    }
                } 
            } 
        } 
        arr_19 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (arr_14 [i_1 + 2])));
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            arr_22 [i_1] = ((/* implicit */unsigned short) arr_17 [i_7]);
            arr_23 [i_7] [i_1 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [(unsigned char)6] [i_1 + 2] [(unsigned char)6] [i_7]))));
        }
        for (int i_8 = 4; i_8 < 22; i_8 += 3) 
        {
            arr_26 [i_8] = ((/* implicit */unsigned char) arr_9 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2] [i_1]);
            arr_27 [i_8] [i_1 - 1] [(unsigned short)20] = ((/* implicit */int) var_16);
        }
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    {
                        arr_34 [13] [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */unsigned long long int) var_9);
                        var_25 = ((((/* implicit */int) var_4)) % (arr_4 [i_1 - 2]));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1838648789U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_33 [i_1] [i_1] [i_1] [i_1]))))));
        }
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 23; i_12 += 3) 
        {
            var_27 |= ((/* implicit */long long int) arr_3 [i_1 - 1]);
            var_28 = ((/* implicit */unsigned long long int) ((long long int) arr_12 [i_1] [i_1] [i_1 + 2] [i_1] [i_1]));
            var_29 = ((/* implicit */long long int) ((short) ((arr_1 [(short)9] [(short)9]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_14 [i_1]))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1] [i_12 - 1])) ? (arr_20 [i_12] [i_12 - 1]) : (arr_20 [i_1] [i_12 - 1])));
        }
    }
    var_31 -= ((/* implicit */_Bool) (+(var_1)));
}
