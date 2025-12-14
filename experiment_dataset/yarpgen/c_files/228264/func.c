/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228264
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) (short)28672)) & (((/* implicit */int) (short)-29977)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        var_21 = arr_1 [i_0];
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1 + 1])) == (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 + 2]))));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))) : (var_11)));
            var_24 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [(short)10] [(short)10]))))));
        }
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                var_26 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) var_6)) : (arr_7 [i_0] [i_2] [i_3]));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((var_0) | (arr_6 [i_0] [i_2] [i_3]))))));
                arr_10 [i_2] [(signed char)9] = ((/* implicit */int) arr_8 [i_3]);
            }
            for (short i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            arr_19 [i_4] [0LL] [i_4] [0ULL] [(short)18] [i_2] = ((/* implicit */int) (+(var_6)));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_4 + 2] [i_4 + 1] [i_4 + 2])) == (((/* implicit */int) arr_3 [i_4 + 2] [i_4 + 1] [i_2])))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1] [i_4 + 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1])))));
            }
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_6 [i_2] [i_2] [i_2]))));
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (short)25380)) | (((/* implicit */int) (signed char)40))));
        }
        for (long long int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        var_32 += (+(arr_11 [i_8] [i_8] [i_8 - 1] [i_8 + 1]));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((var_11) & (arr_12 [i_7] [i_8]))) : (((/* implicit */long long int) arr_22 [i_8 - 1])))))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
            /* LoopSeq 2 */
            for (int i_10 = 1; i_10 < 22; i_10 += 4) 
            {
                arr_31 [i_0] = ((/* implicit */unsigned int) arr_7 [i_10 + 1] [i_10 + 1] [i_10]);
                arr_32 [16U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)10))));
            }
            for (short i_11 = 4; i_11 < 24; i_11 += 4) 
            {
                var_35 = ((/* implicit */unsigned char) (~(var_3)));
                arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_11] [i_7] [i_7] [i_11 - 3]))));
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_7 [i_11 - 1] [i_11 - 2] [i_11 - 3]))));
            }
        }
    }
    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) var_15))));
}
