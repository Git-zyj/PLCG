/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222404
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)65125))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) -9197061954623214811LL);
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (-((((+(var_11))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_18 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2397680796U)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1]))) * (11036548829785282612ULL)))));
                    var_19 = ((/* implicit */signed char) arr_7 [i_3]);
                    var_20 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_10))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) (-(((long long int) arr_10 [i_4] [i_2]))));
                                arr_22 [i_1] [(unsigned short)0] [i_3] [i_1] [i_1] [i_5] = ((/* implicit */long long int) var_9);
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((((/* implicit */unsigned long long int) (signed char)-123)), (var_7)))));
                            }
                        } 
                    } 
                    var_23 = ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17778))) : ((+(7318299375146501819LL))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) var_6);
}
