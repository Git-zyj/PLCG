/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26672
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_3)) : (((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (8896819268698638677LL))))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) 18446744073709551607ULL);
        var_16 += ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned char) var_12))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) arr_3 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) 8896819268698638677LL);
                                arr_21 [i_2] [i_2] [i_3] [(_Bool)1] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -868116714)), (-8896819268698638679LL)));
                                arr_22 [i_2] = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3])))))) ? (((((/* implicit */int) (short)-3430)) * (((/* implicit */int) ((signed char) 8940485068171975360ULL))))) : (((/* implicit */int) ((_Bool) 8940485068171975344ULL)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) arr_8 [i_2] [i_2] [i_3]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-868116698), (((/* implicit */int) arr_16 [i_1] [i_1] [i_2 + 4] [i_1]))))) ? ((~(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_18 [i_2 - 1] [i_2 - 1] [(unsigned char)9] [i_2] [i_2 - 1] [i_2 + 4] [i_2 + 1]))))));
                }
            } 
        } 
        arr_23 [i_1] [i_1] = ((/* implicit */signed char) (((((_Bool)1) || (((/* implicit */_Bool) 1557129689)))) || (((/* implicit */_Bool) arr_4 [15ULL]))));
        var_20 += ((/* implicit */signed char) (+(((unsigned int) 868116713))));
    }
    var_21 += ((/* implicit */short) (~(((unsigned int) 18446744073709551615ULL))));
}
