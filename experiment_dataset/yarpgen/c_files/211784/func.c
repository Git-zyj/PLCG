/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211784
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
    for (short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [3LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0 - 1] [i_3 - 1] [i_3 - 1])))) ? (min((((unsigned long long int) 1434755023U)), (((/* implicit */unsigned long long int) (+(2220674429U)))))) : (((/* implicit */unsigned long long int) ((var_7) - (min((var_6), (((/* implicit */long long int) arr_5 [(unsigned short)7] [i_0 + 1])))))))));
                            arr_13 [i_3] [i_2] [i_1 + 3] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))) : ((-9223372036854775807LL - 1LL))))) ? ((+((+(arr_9 [i_0 - 4] [i_1]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (var_7) : (-9129699321124035914LL))), (max((9129699321124035914LL), (9129699321124035913LL))))))));
                            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0]) - (var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9129699321124035914LL)))) : (max((var_9), (((/* implicit */unsigned long long int) 9129699321124035913LL))))))) ? (9129699321124035913LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            var_13 -= ((/* implicit */unsigned short) 1014587035);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_1] [i_4 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned short)6] [i_4 + 1] [i_4 + 1]))) : (arr_15 [i_0 + 3] [i_1] [i_4 + 1] [i_0 + 2]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_4 + 1])))))));
                            arr_18 [i_0] [i_1 - 1] [i_4 + 1] [i_1 - 1] = ((min((((((/* implicit */_Bool) var_5)) ? (arr_16 [i_0] [(_Bool)1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) arr_14 [i_0 + 2] [i_5 + 1] [i_4 - 1] [i_1 + 1])))) << (((max((arr_0 [i_4 + 1] [i_1 + 3]), (arr_0 [i_4 - 1] [i_1 + 3]))) - (838224358158458095ULL))));
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_6 [i_6 - 1]) : (arr_6 [i_6 - 1]))));
                                arr_21 [0LL] [i_1] [0LL] [(unsigned char)14] [i_6 - 2] = ((/* implicit */short) arr_17 [9] [i_6] [i_0]);
                                arr_22 [i_0] [i_5] = ((/* implicit */unsigned long long int) -9129699321124035914LL);
                            }
                            for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                            {
                                arr_25 [(unsigned char)14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((9129699321124035913LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * ((-(var_6)))))) == (((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1] [i_1] [i_1] [i_1])) ? (arr_16 [i_1 + 4] [17LL] [i_1 - 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                                var_16 = ((/* implicit */long long int) ((arr_3 [i_0]) % (((unsigned long long int) (~(var_7))))));
                                var_17 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_6 [i_5]))) <= (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_7] [i_5] [i_4] [i_1 + 4] [i_0])), (var_4)))))))));
                                var_18 = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_0 - 1] [i_1] [i_4] [3ULL] [i_1])), ((unsigned short)8192)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) var_10)), (-9129699321124035915LL))))));
                            }
                            var_19 = ((/* implicit */unsigned long long int) (~(((arr_14 [i_0 - 3] [i_0 - 3] [i_0] [i_5]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) ((unsigned short) arr_17 [i_0] [(unsigned short)15] [i_0]));
                arr_26 [i_1] [i_0] = ((((/* implicit */_Bool) min((arr_23 [i_0 - 3] [i_0 - 4] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 4] [i_1 - 1]), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 + 2] [i_0]))) | (var_7)))) ? ((+(arr_3 [i_1]))) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 4] [i_1] [i_1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -9129699321124035914LL)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -9129699321124035914LL)))))))) ? (((/* implicit */int) (!(((var_0) || (var_0)))))) : (((/* implicit */int) var_5))));
}
