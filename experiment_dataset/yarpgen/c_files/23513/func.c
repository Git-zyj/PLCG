/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23513
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-25427)) ? (4404079575898125956LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 &= arr_0 [i_0];
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_0 [i_1]);
                    var_14 = ((/* implicit */int) max((var_14), (arr_3 [i_0])));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((6177215074582928872LL) == (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)62)), (arr_7 [6ULL] [i_1 - 1] [i_2])))))))));
                    arr_8 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) arr_1 [i_0 - 2] [i_0 - 1]);
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    var_16 *= ((/* implicit */_Bool) 2147483647);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        arr_20 [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_3 + 2] [i_6 - 1])));
                        var_17 = ((/* implicit */int) arr_14 [i_5] [i_3]);
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((((arr_7 [i_4] [i_4] [i_5]) >> (((((long long int) arr_2 [i_3 - 1])) - (3522320712LL))))) == (((/* implicit */int) var_1))))));
                        var_19 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 2) 
                        {
                            arr_26 [i_3] [i_5] [i_5] [i_3] [i_3] [i_8] [i_8] = (~(((arr_25 [i_4] [i_5] [i_5] [i_5]) << (((4294967292U) - (4294967284U))))));
                            var_20 = 2147483647;
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3 + 2] [i_3] = ((/* implicit */long long int) var_3);
                        }
                        var_21 = ((/* implicit */unsigned long long int) min((1302804544), ((+(((/* implicit */int) var_6))))));
                        var_22 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))))));
                    }
                }
            } 
        } 
        arr_28 [i_3 + 1] |= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_12 [i_3 + 1])))) != (((/* implicit */int) (short)11385))));
    }
}
