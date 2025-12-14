/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37729
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 -= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 268435456)) ? (2620300368U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (max((((/* implicit */unsigned int) (unsigned char)189)), (arr_2 [7ULL] [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) ((int) var_10))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_3] = (unsigned char)38;
                                arr_16 [i_3] [i_3] [i_2] [i_3] [i_1] [i_0] [i_1] = (~(arr_4 [i_0]));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((min((2620300372U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) >= (2620300368U)))))) ^ (((((/* implicit */_Bool) arr_3 [i_0] [(short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2]))) : (2620300339U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_23 [i_5] [i_1] = (~(((int) arr_13 [i_5 - 2])));
                                var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_18 [11LL] [i_5] [(unsigned short)4] [i_6 + 3] [i_0] [i_2]))))));
                                arr_24 [7] [i_5] [i_5] [i_5] = ((/* implicit */short) ((_Bool) ((unsigned long long int) max((arr_5 [i_1] [i_1]), (2620300368U)))));
                                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-(516096U))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_0] [i_5] [i_2] [i_1] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_1] [i_2] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 4) 
                    {
                        arr_28 [14LL] [i_1] [i_1] [i_1] [i_1] = ((int) 2620300368U);
                        arr_29 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2]))))) && (((/* implicit */_Bool) max(((short)21731), (((/* implicit */short) arr_12 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_7]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(7858886664437560269ULL)))) ? (((int) var_6)) : ((+(((/* implicit */int) (unsigned char)146)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_8] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)63)) ? (arr_2 [i_0] [i_1]) : (2620300368U)));
                        var_19 = ((/* implicit */int) ((arr_1 [i_0] [i_1]) + (9221120237041090560LL)));
                        var_20 &= ((/* implicit */unsigned short) (+(arr_32 [i_2] [i_0])));
                        var_21 -= ((/* implicit */int) 9221120237041090560LL);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_13)), (var_3))))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
