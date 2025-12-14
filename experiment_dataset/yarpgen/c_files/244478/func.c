/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244478
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
    var_15 = var_6;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_4] [i_4] [i_0] [i_4] = ((short) ((arr_9 [i_4 + 1] [22ULL] [22ULL] [i_3] [9]) % (((/* implicit */int) arr_4 [i_0] [i_1]))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_3 [i_0] [i_1])), (1638875086))), (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) (short)-19559)))))))) : (var_10))))));
                                var_17 = ((/* implicit */short) ((long long int) max((-2055734335), (((int) -2055734322)))));
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-19567)) & (((/* implicit */int) ((-2055734322) >= (((/* implicit */int) (short)19545))))))) << ((((-(var_14))) + (1854304173)))));
                            }
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_3])))))))));
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) (short)-19560)) <= (((/* implicit */int) (short)-19558))))))))));
                        }
                    } 
                } 
                var_21 -= ((/* implicit */short) ((long long int) min((((/* implicit */int) (signed char)-112)), (2055734349))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max(((short)18961), (((short) -405765431))));
    var_23 = ((/* implicit */signed char) (+(min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20705)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))))));
}
