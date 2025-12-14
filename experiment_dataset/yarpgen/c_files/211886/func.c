/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211886
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
    var_11 += ((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_9)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0] [i_0])))));
        var_13 = ((_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_6 [i_2] = ((/* implicit */short) (-(3720665696U)));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    arr_13 [i_2] = ((/* implicit */unsigned short) ((long long int) (-(1914324556))));
                    arr_14 [i_3] [i_2] [12U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)5)) ? (2076156341) : (((/* implicit */int) (_Bool)1))));
                }
                var_14 = ((/* implicit */long long int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 + 1]);
                var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)111)) ? (-2017157651) : (((/* implicit */int) arr_0 [i_1] [5ULL]))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (~(arr_10 [i_5 - 1] [i_5 - 2] [i_5] [i_5 + 2] [i_5 - 2])));
                        arr_21 [(unsigned char)10] [(unsigned char)10] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_6] [i_5 - 3] [i_5 - 3] [i_6]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (int i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_29 [i_8] [i_2] [i_1] = ((/* implicit */int) arr_2 [i_2]);
                        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) arr_11 [i_1] [i_8 - 2] [i_2] [(unsigned short)3]))));
                    }
                } 
            } 
        }
        arr_30 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_28 [i_1] [(unsigned short)19] [i_1] [i_1] [i_1]))));
    }
    for (int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (arr_22 [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9] [16LL])))))) ? (((int) arr_4 [i_9] [i_9] [i_9])) : (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_32 [(signed char)0] [i_9]))))));
        arr_34 [i_9] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_9] [i_9])) ? (5553412137276853170ULL) : (((/* implicit */unsigned long long int) arr_9 [(unsigned short)18] [i_9]))))));
    }
}
