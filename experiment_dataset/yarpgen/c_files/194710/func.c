/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194710
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
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (8894127870543656726ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_4 [i_0] [i_1])))) : (((/* implicit */int) var_2)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_12 [(unsigned short)20] [i_1] [i_2 - 2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_2] [i_2])) * (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) -1776648025349242377LL)) : (arr_0 [i_2]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4 + 2] = ((/* implicit */long long int) (unsigned short)5531);
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) 2147483633));
                                arr_17 [i_4] [19U] [i_0] [i_0] [i_1 + 3] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_1 - 2] [i_2 - 1] [i_4 + 1]);
                                var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_2 + 1] [(unsigned short)10] [i_5 + 2] [(unsigned short)5] = ((/* implicit */long long int) max(((_Bool)1), (((((/* implicit */int) min((((/* implicit */short) (signed char)48)), ((short)15360)))) == (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_0] [i_3])) : (((/* implicit */int) (short)14145))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_3] [i_3] [i_5] = ((/* implicit */_Bool) (unsigned short)40228);
                                arr_23 [i_0] [(short)15] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                                var_19 ^= ((/* implicit */short) arr_19 [i_5] [1U] [i_2 - 1] [1U] [1U] [i_0]);
                            }
                            var_20 = ((/* implicit */short) arr_14 [i_0]);
                        }
                    } 
                } 
                arr_24 [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                {
                    arr_34 [i_7] [i_7] [i_6] &= ((/* implicit */int) max((((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [(_Bool)1] [i_7] [15LL] [15LL]))));
                    arr_35 [i_6] [i_6] [i_7] [i_6] = arr_3 [20LL] [i_6] [i_6];
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -316692979))))), (var_15))))));
}
