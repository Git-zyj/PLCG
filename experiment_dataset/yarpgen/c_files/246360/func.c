/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246360
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_0 + 3] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) ^ (var_2)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0]))) : (var_11)))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) var_7);
                var_16 = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) var_0);
                            var_18 = ((/* implicit */long long int) var_7);
                            var_19 = min((((/* implicit */int) (unsigned char)255)), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)14)) : (-11))), (((((/* implicit */int) (unsigned short)4095)) << (((-11) + (28))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_2] [i_2])) << (((((((long long int) arr_4 [i_2] [i_3])) + (2320087272090933056LL))) - (18LL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-27)) + (2147483647))) << (((((/* implicit */int) (unsigned char)246)) - (246)))))), (var_13))));
    var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (var_13)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (unsigned char i_8 = 3; i_8 < 20; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            {
                                var_23 -= arr_2 [i_6] [7] [7ULL];
                                var_24 -= ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((var_12) || (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) <= (min((((/* implicit */int) var_4)), (arr_23 [i_6] [i_6]))))))))));
                                var_26 *= ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 1; i_13 < 20; i_13 += 2) 
                    {
                        for (long long int i_14 = 4; i_14 < 21; i_14 += 2) 
                        {
                            {
                                arr_41 [i_14] |= ((/* implicit */long long int) ((int) ((var_2) != (((/* implicit */unsigned long long int) ((long long int) arr_19 [i_13]))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_21 [i_7] [i_7] [i_7]))))) : (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
