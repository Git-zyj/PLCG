/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205970
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) 887387642)) != (-6143480105220665579LL)))) : (((/* implicit */int) arr_4 [i_0] [i_3]))));
                        arr_9 [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((var_4) & (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0]))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((_Bool) arr_7 [(_Bool)1] [i_2] [i_1] [(_Bool)1])))));
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [5] [i_1] [i_0] = ((/* implicit */signed char) (~((-(max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))))));
                        var_19 = ((/* implicit */unsigned short) ((short) var_6));
                    }
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [7LL] [(short)8])) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_0])))))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) ((var_1) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)1] [(unsigned char)13] [i_2])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_14)))))))))))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (max(((~(var_1))), (((((/* implicit */unsigned long long int) -6143480105220665592LL)) % (var_1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_8 [(short)3] [i_1] [i_1] [i_2] [i_2] [i_2])), (arr_10 [10U] [10U] [i_0])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max(((short)-30280), (var_0)))) : (((/* implicit */int) var_14)))) * (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (447416502)))) || (((/* implicit */_Bool) var_6)))))));
    var_23 = ((/* implicit */long long int) var_2);
}
