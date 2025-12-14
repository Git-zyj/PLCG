/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33756
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) % (var_9)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] = ((/* implicit */short) var_7);
                                var_14 = ((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1] [i_4]);
                                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [(unsigned char)16] [i_0] [i_2 - 1] [i_2])) ? (arr_7 [i_2] [i_0] [i_2 - 2] [i_2 - 1]) : (((/* implicit */int) var_1)))), (2147483631)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_10);
                                var_17 ^= max((max((((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))), (2147483608))), (((((/* implicit */_Bool) -2147483632)) ? (2147483636) : (-2147483632))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_0] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1]))) != (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)12)), (var_11))))) : (var_0)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 21; i_9 += 1) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_31 [i_9] [i_8] [(unsigned short)20] [i_9] [i_10] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) arr_7 [i_7] [i_9] [i_9] [i_10 - 1])) + (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_10 - 1])) ? (((((/* implicit */_Bool) arr_13 [i_7] [i_9] [(short)7] [i_10] [i_10] [i_10])) ? (arr_6 [i_7] [i_8] [i_9 - 2] [i_9]) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (_Bool)0)))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_9] [i_10 - 1] [i_10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_22 [i_10] [i_9 + 1]))))))) ? (((((/* implicit */_Bool) arr_30 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_13 [i_7] [i_7] [(short)6] [i_8] [i_9] [16ULL])) : (((/* implicit */int) arr_10 [i_10] [i_9 - 3] [i_9 - 1] [i_8] [i_7])))) : (var_7))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) max((arr_7 [i_7] [i_7] [i_8] [18]), (((/* implicit */int) arr_3 [i_7] [i_8] [(short)2])))))))));
                arr_32 [i_7] [6ULL] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8])))))) ? (((((/* implicit */_Bool) min((var_3), (var_3)))) ? (((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-28)))) : (((/* implicit */int) (signed char)-5)))) : (max((((/* implicit */int) min(((_Bool)1), (arr_19 [i_7])))), (-2147483633)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    for (unsigned char i_12 = 3; i_12 < 20; i_12 += 4) 
                    {
                        {
                            arr_38 [i_11] = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) -2147483612)))));
                            var_21 *= ((/* implicit */short) arr_0 [i_7]);
                            var_22 = ((/* implicit */short) arr_15 [i_8] [i_8] [(unsigned char)18] [i_8] [i_8] [15ULL]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) 2147483592);
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_14] [i_13])) ? (((/* implicit */int) arr_43 [17LL] [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_43 [i_7] [i_7] [i_8] [11U] [(_Bool)1] [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */int) var_8)) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_14]))))) : (((((/* implicit */_Bool) var_8)) ? (arr_15 [i_7] [(short)17] [0ULL] [(unsigned short)4] [i_13] [i_14]) : (((/* implicit */int) (_Bool)1))))))) : (arr_14 [i_7] [i_14] [i_13] [i_7] [i_7] [i_8])))));
                            var_25 = arr_23 [i_7];
                        }
                    } 
                } 
            }
        } 
    } 
}
