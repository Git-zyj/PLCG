/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44714
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
    var_12 = ((/* implicit */long long int) (unsigned short)3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (-2147483647 - 1));
        var_14 = ((/* implicit */signed char) ((unsigned short) (short)19269));
        var_15 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1245)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (var_11)))) ? (((/* implicit */int) (short)-3198)) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) arr_0 [i_0 - 1]))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) 2453335099U);
        var_18 = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) (unsigned short)29149)) ? (var_7) : (-9223372036854775782LL))))) < (((/* implicit */long long int) ((unsigned int) ((unsigned short) (short)-10414))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
        var_19 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8853918609748403218LL)) ? (((/* implicit */int) (short)-15911)) : (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_15 [(unsigned short)8] [i_2] [i_5] &= ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) -8853918609748403221LL)) ? (arr_7 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))));
                                var_21 = ((/* implicit */_Bool) arr_11 [i_3] [i_2 - 1] [i_2] [i_2]);
                                var_22 = ((/* implicit */_Bool) 2453335078U);
                                var_23 = ((/* implicit */signed char) ((arr_3 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (short)-15598))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3)) ? (((3006540168U) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (var_5)))) : (((((/* implicit */unsigned long long int) var_6)) - (((unsigned long long int) var_4))))));
    var_25 = ((/* implicit */signed char) 1567461409984402370LL);
}
