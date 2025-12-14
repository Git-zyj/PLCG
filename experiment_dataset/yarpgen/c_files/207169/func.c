/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207169
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_11 = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) % (((unsigned int) var_7)))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) 8450590144524960494ULL)) && (((/* implicit */_Bool) arr_0 [i_0])));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1]))));
            var_14 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_0 [i_0])) && (var_6)))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((arr_8 [i_3] [i_3] [i_2] [i_1] [i_0]) && (((/* implicit */_Bool) (unsigned short)10))));
                        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_15 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(arr_6 [i_0] [i_5])));
                var_16 = ((/* implicit */signed char) var_6);
                arr_16 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ ((+(((/* implicit */int) var_2))))));
                var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_4 - 1] [i_0]))));
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_4] [i_5] [i_6] [i_5] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                            var_18 = var_9;
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */long long int) ((int) (short)-13658));
            var_20 = ((/* implicit */int) arr_22 [i_0] [i_4] [i_0] [i_4 - 2]);
            var_21 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_4 - 2] [i_4 + 1] [i_4] [i_4])) ? (3976687569U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)47))))));
            arr_24 [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) arr_21 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4]));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) var_2);
        arr_27 [i_8] = ((/* implicit */unsigned int) (signed char)95);
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 6; i_9 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) 2146573360U);
        var_24 = ((/* implicit */long long int) arr_1 [i_9 + 4]);
        var_25 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_22 [i_9 + 3] [i_9] [i_9] [i_9]))))));
    }
    for (unsigned short i_10 = 1; i_10 < 6; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            arr_36 [i_10 + 4] [i_10] [i_11] = ((/* implicit */long long int) arr_6 [i_10 + 3] [i_11]);
            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10 - 1] [(short)16]))) + (((var_6) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10] [i_10])))))));
        }
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((-3221867820665020104LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)69)) ^ (((/* implicit */int) arr_3 [i_10]))))) ? ((~(-10))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_26 [i_10 + 1] [i_10 + 1])), (var_2))))))))))));
        var_28 = ((/* implicit */unsigned int) arr_5 [i_10 + 2] [i_10 + 1] [i_10] [i_10 + 4]);
    }
    var_29 *= ((/* implicit */unsigned long long int) var_1);
    var_30 = ((/* implicit */short) var_7);
    var_31 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_5))) - (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)160))))))), (var_3)));
    var_32 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) var_2))))));
}
