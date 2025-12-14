/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244166
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)168)) | (((/* implicit */int) (_Bool)0))))) ^ (((long long int) -1583431450917625046LL))))) ? (((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))) : (max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [9]))), (((/* implicit */int) arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [(unsigned char)4]))))));
                                arr_14 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)26011)) || (((/* implicit */_Bool) 110226046U))));
                                var_16 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -311114354)) ? ((~(35184372088831ULL))) : (((/* implicit */unsigned long long int) (-(2147483647)))))) >> ((((-((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26011))))))) - (10910628681968783031ULL))))))));
                            var_18 |= ((/* implicit */short) arr_17 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] [(unsigned char)13]);
                            arr_19 [i_0] [5U] [i_5] [5U] = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)73))))) + (min((0U), (541311891U)))))), (max((max((((/* implicit */unsigned long long int) -8725107009392588859LL)), (var_8))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_6])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (signed char i_8 = 4; i_8 < 13; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 3; i_9 < 13; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)92))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_32 [i_9] [i_11] [i_11] [12LL] [(unsigned char)4] [(short)8]) == (((/* implicit */int) var_0)))))));
                                var_21 *= ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_11] [i_11]))));
                                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) ((_Bool) (_Bool)1)))), (arr_20 [i_8] [i_8])));
                                var_23 = (short)29735;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_7] [(_Bool)1] [i_12])) ? (((/* implicit */int) arr_36 [i_13] [i_12] [i_8])) : (((/* implicit */int) (signed char)12))))), (((unsigned long long int) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [2U] [i_7] [i_7]))))))));
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (0U) : (arr_25 [(short)12])))) ? (((((/* implicit */_Bool) arr_38 [0] [0] [0] [0ULL])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18900))))) : (arr_25 [(signed char)6]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [4ULL] [(short)8] [i_7] [(short)1] [i_7])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((int) (+(var_13)))))));
}
