/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234546
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
    var_19 = ((/* implicit */short) ((_Bool) var_18));
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1091946862))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) (+((~(9688691619263310989ULL)))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)0)))) + (618645935))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) var_10);
                        var_24 -= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) -1091946862)));
                        var_25 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) / (1091946861)));
                    }
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_2 [i_2] [i_2]))))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) var_8))) & (((/* implicit */int) ((short) var_2)))));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((+(((/* implicit */int) var_9)))) + (((((/* implicit */int) (short)-2658)) / (((/* implicit */int) var_16)))))))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1091946861)) ? (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_17)))) : (1362410868)));
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((1091946862) + (max((((var_6) + (((/* implicit */int) arr_15 [i_4])))), (((/* implicit */int) var_17))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_6 [i_4] [i_4] [7U]))));
        arr_17 [(unsigned short)6] = ((/* implicit */_Bool) -1091946862);
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
    {
        var_29 &= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) ((int) arr_15 [i_5])))), (((((((/* implicit */int) var_4)) >= (((/* implicit */int) var_9)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1091946862)))))))));
        arr_20 [2U] [i_5] = ((/* implicit */unsigned int) 1091946861);
    }
}
