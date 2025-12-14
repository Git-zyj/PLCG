/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211210
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */_Bool) max((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [2U])))), (arr_0 [i_0] [i_0])));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [11ULL] [i_0] = ((/* implicit */short) (!((_Bool)1)));
            var_11 = ((/* implicit */unsigned int) arr_1 [i_0]);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_12 *= ((/* implicit */unsigned int) (unsigned short)29097);
                        var_13 = ((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_2]);
                        arr_13 [i_0] [10LL] [i_2 + 2] [i_2] [i_3 + 2] [i_4] = ((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_3 - 1]);
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2]))));
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_2 + 1]);
        }
        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
        {
            var_15 += ((/* implicit */unsigned short) arr_7 [i_5] [i_5 + 1] [i_5 - 2] [i_5 - 1]);
            var_16 -= ((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]);
            var_17 = ((/* implicit */_Bool) max((arr_15 [22LL]), (((/* implicit */unsigned int) (_Bool)1))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 4) 
        {
            var_18 |= ((/* implicit */unsigned int) 7361864228453961766ULL);
            var_19 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
            var_20 = ((/* implicit */short) (~(arr_17 [i_6 - 2] [i_0] [(unsigned short)1])));
        }
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((-2147483622), (arr_20 [i_0] [i_0]))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 3; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_31 [i_9 - 1] [i_8] [i_8] [i_9 - 1] = ((/* implicit */int) arr_23 [i_8]);
                        arr_32 [i_7] [i_8] [i_8] [(unsigned short)10] = ((/* implicit */unsigned short) arr_22 [i_9] [i_9]);
                        arr_33 [i_7] [i_7] [i_8 + 2] [i_9] [i_10] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [i_7] [11LL] [11LL] [i_10])), ((-(((/* implicit */int) arr_22 [i_8 - 1] [i_10 - 1]))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_9 [8LL] [8LL] [i_9] [i_10]))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned char) arr_7 [i_7] [i_7] [22] [i_7]);
        var_24 ^= ((/* implicit */unsigned int) arr_7 [i_7] [i_7] [i_7] [i_7]);
        arr_34 [i_7] [i_7] = ((/* implicit */unsigned short) max((arr_24 [(unsigned char)0] [(unsigned char)0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_2 [i_7]), (arr_23 [i_7])))), (arr_3 [21U]))))));
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_27 [13] [13]))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_26 = (+(arr_0 [i_11] [i_11]));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_19 [i_11] [i_11]))));
        var_28 = arr_0 [i_11] [i_11];
    }
    for (int i_12 = 2; i_12 < 15; i_12 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (+(arr_28 [i_12 + 2] [i_12] [i_12] [i_12 + 1] [i_12] [i_12 + 3]))))));
        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-25457)))))));
    }
    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
}
