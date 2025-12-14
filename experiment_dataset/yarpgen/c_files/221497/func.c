/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221497
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_12 [(short)11] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (min((var_15), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0] [18])), (12U))))));
                            arr_13 [(unsigned char)19] [i_0] [i_2] [(signed char)0] [i_2] = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (short i_5 = 4; i_5 < 19; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0 + 1] [i_1] [i_1] [i_0] [i_5 - 4] [i_4] [i_5 - 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0 + 1] [i_5 - 2] [i_0] [i_6 + 3]))) || (((/* implicit */_Bool) ((unsigned int) var_12)))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_7))));
                                var_21 = ((/* implicit */long long int) min((var_21), (var_15)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_35 [i_7] [i_8] [0] [i_10] = ((/* implicit */unsigned int) ((_Bool) arr_0 [i_9] [i_8]));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_19))));
                            var_23 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(max((arr_2 [i_7] [i_10] [i_7]), (((/* implicit */int) arr_7 [i_7]))))))) != (((unsigned int) 2511407849U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            arr_42 [i_7] [(unsigned char)11] [i_11] &= ((/* implicit */short) max((var_18), (((/* implicit */unsigned int) arr_2 [i_11] [i_11] [i_11]))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (arr_1 [i_12])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (short)-28227))), (((long long int) var_16))))) ? (min((max((var_18), (18U))), (((/* implicit */unsigned int) arr_0 [i_8] [i_8])))) : (min((((((/* implicit */_Bool) arr_5 [i_8] [i_8] [i_8] [i_8])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((arr_1 [i_8]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)2] [i_8] [i_14] [(short)14]))))))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_4 [i_14] [i_14] [i_14] [i_14])), (arr_37 [i_8] [8LL] [1U] [8LL]))), (((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_6 [i_8] [i_8] [i_8] [i_8])))))) < (min((((long long int) 4294967267U)), (((/* implicit */long long int) (+(((/* implicit */int) (short)-20816)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
