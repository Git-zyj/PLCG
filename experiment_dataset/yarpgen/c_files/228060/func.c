/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228060
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) var_11)));
                var_19 = ((long long int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65522)))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_4))));
                var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((unsigned short) (short)28006))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) * (min((var_9), (((/* implicit */long long int) var_8))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_6 = 4; i_6 < 19; i_6 += 4) 
                        {
                            arr_21 [(_Bool)1] [i_3] [i_4] [i_5 - 1] [i_6] = var_17;
                            var_22 = ((/* implicit */long long int) ((signed char) arr_10 [i_6] [i_6] [i_6 + 1]));
                        }
                        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            var_23 = var_2;
                            var_24 = ((-7129244953017420797LL) != (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]))));
                            var_25 = (+(((/* implicit */int) arr_11 [i_4] [i_4 - 1] [i_4 + 1])));
                            var_26 = ((((/* implicit */_Bool) (unsigned short)41060)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_22 [i_7] [i_7 + 2] [i_7 - 1] [i_7] [i_7 - 3])));
                        }
                        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_6)));
                            var_28 = ((/* implicit */long long int) var_2);
                        }
                        for (signed char i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            arr_29 [i_2] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_2 - 2] [i_5 - 1])) + (((/* implicit */int) arr_15 [i_2 + 1] [i_5 + 1]))));
                            var_29 = ((/* implicit */long long int) var_12);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_14 [i_3]))));
                            var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_3] [i_4 + 1] [i_5] [(_Bool)1] [i_3])) ? (arr_18 [i_2] [i_3] [i_4 - 1] [i_5] [i_5] [i_10]) : (var_9)));
                            arr_33 [i_2] [i_2] [i_10] [i_2] [15LL] [i_2] [i_2] = ((/* implicit */long long int) arr_13 [i_3] [i_4 - 1] [i_5] [i_5]);
                            arr_34 [i_10] [i_3] [i_4 - 1] [i_3] [i_10] = ((/* implicit */signed char) ((arr_10 [i_5] [i_3] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(_Bool)1] [i_3] [(_Bool)1] [i_4 + 1] [i_10])))));
                        }
                        var_32 = ((/* implicit */long long int) ((48ULL) << (((((/* implicit */int) arr_16 [i_4 - 1])) + (4220)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_11 = 1; i_11 < 19; i_11 += 1) 
            {
                var_33 = ((/* implicit */unsigned long long int) arr_25 [i_2 + 4] [i_11] [i_2 + 4] [(unsigned char)11] [i_11 - 1]);
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 18; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) var_2);
                            var_35 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_11 + 1] [i_12 - 1] [i_13 + 1]))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) ((((_Bool) arr_30 [i_3])) ? (((/* implicit */int) ((var_12) != (arr_24 [i_2] [i_3] [i_3] [i_3] [i_11] [i_3])))) : (((/* implicit */int) (_Bool)0))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_47 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_14 - 1] [i_14] [i_3] [i_2 - 2] [i_2] [i_2]))));
                arr_48 [i_2] [(unsigned char)10] [i_14] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) var_11))))));
                arr_49 [i_14 - 1] [i_14 - 1] [i_14 - 1] = ((/* implicit */_Bool) var_2);
            }
        }
        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_37 = ((/* implicit */long long int) (!(((_Bool) arr_37 [i_2] [i_2 - 1] [i_2 + 4]))));
            var_38 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_13 [8ULL] [i_15] [i_15] [17LL])))));
        }
        arr_53 [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_2 - 3] [i_2])) ? (((/* implicit */unsigned long long int) arr_50 [i_2 + 4] [i_2 + 1])) : (var_7)));
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_52 [(short)8] [4LL]))) ? (((arr_26 [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2] [i_2]) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((((/* implicit */_Bool) arr_32 [i_2] [10ULL] [10ULL] [10ULL] [i_2 + 4])) ? (2092621444524156636LL) : (var_9)))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_40 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
        var_41 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) ((short) arr_30 [i_16]))), (arr_35 [i_16] [4] [4]))));
    }
}
