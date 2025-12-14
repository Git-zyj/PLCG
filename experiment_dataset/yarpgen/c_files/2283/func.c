/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2283
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
    var_12 = min((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)4)) & (((/* implicit */int) var_9)))) << (((var_1) - (4136902422146420101LL)))))), ((+(var_7))));
    var_13 = ((/* implicit */short) var_5);
    var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))) : (min((((((/* implicit */_Bool) (signed char)68)) ? (11695563672735245570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
        arr_4 [(unsigned short)2] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */int) (unsigned char)7)) : (arr_1 [i_0]))) + (((((/* implicit */_Bool) ((arr_0 [i_0]) + (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (arr_1 [i_0]))) : (((((/* implicit */int) (unsigned char)254)) + (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    var_15 |= ((/* implicit */unsigned short) arr_10 [i_3]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned char) ((int) arr_14 [i_1] [i_5 - 1] [i_3] [i_1] [i_4]));
                                var_17 = ((/* implicit */int) arr_13 [(short)13] [i_1]);
                                var_18 *= ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    arr_18 [(signed char)16] [i_2] [i_1] = arr_10 [i_1];
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)254))));
        var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_12 [i_1]))));
    }
}
