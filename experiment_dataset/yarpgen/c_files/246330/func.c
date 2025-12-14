/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246330
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (65535ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (65535ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) 65535ULL)) ? (18446744073709486072ULL) : (65535ULL))))));
    var_18 = ((/* implicit */_Bool) 65535ULL);
    var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (65544ULL)))) ? (min((var_1), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 65539ULL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_3)))) ? ((~(18446744073709486080ULL))) : ((~(min((65540ULL), (65540ULL)))))));
                            var_21 = 65550ULL;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) 18446744073709486075ULL)) ? (18446744073709486075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned short)17] [(unsigned short)17] [(unsigned short)17]))))), (((/* implicit */unsigned long long int) arr_4 [i_0]))))));
                            arr_18 [i_5] [i_5] [i_4] |= ((/* implicit */long long int) var_11);
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((min((((/* implicit */long long int) arr_7 [i_5] [i_5] [i_5] [i_5])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (arr_8 [i_0] [i_1] [i_0] [i_5]))))), (((/* implicit */long long int) min((arr_5 [i_5] [i_4] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_13 [i_0] [i_1]) : (((/* implicit */int) var_5))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((65552ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (65535ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [6U] [i_0])))))) ? (((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1])))))) : (((/* implicit */int) var_6))))));
                arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_16)))))), (((((((/* implicit */int) arr_10 [i_1] [i_1] [(short)16] [i_0] [i_0] [i_1])) <= (((/* implicit */int) var_15)))) ? (min((((/* implicit */unsigned long long int) var_5)), (18446744073709486075ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(short)4])) : (var_3))))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_7] [(short)21] [i_7] [i_8] [(unsigned short)18] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) arr_29 [i_8] [i_7] [i_6] [(short)11] [16ULL] [i_1] [i_0])), (((var_16) ? (65540ULL) : (18446744073709486098ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_8] [i_1])))));
                                var_24 = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 3; i_13 < 7; i_13 += 4) 
                        {
                            {
                                arr_46 [i_9] [i_10] [i_11] [(short)6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_2))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709486066ULL)) ? (65576ULL) : (18446744073709486063ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (65573ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (min((18446744073709486066ULL), (65553ULL)))))));
                                var_25 = ((/* implicit */_Bool) 18446744073709486073ULL);
                                var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 18446744073709486064ULL)) ? (((/* implicit */int) arr_41 [1] [i_12] [1LL] [i_13 + 3] [(_Bool)1] [i_13 - 1])) : (((/* implicit */int) arr_41 [i_11] [(short)2] [i_11] [i_13 - 2] [(short)2] [i_13 - 3]))))));
                            }
                        } 
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) arr_8 [i_10] [i_10] [i_10] [i_9]);
                var_28 = (!(((/* implicit */_Bool) min((min((65564ULL), (65543ULL))), (((/* implicit */unsigned long long int) arr_24 [i_9] [i_10] [(signed char)19]))))));
                var_29 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_10])) : (18446744073709486064ULL)))) ? (65543ULL) : (18446744073709486068ULL))), (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
}
