/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47092
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 620064587156064236LL)) ? (max((min((((/* implicit */unsigned long long int) var_11)), (var_6))), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) min((var_9), (var_7))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_15 [6ULL] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_1]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            var_13 ^= ((/* implicit */unsigned int) ((long long int) arr_17 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]));
                            var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) 620064587156064236LL)) ? (((/* implicit */int) arr_17 [(unsigned char)12] [i_2 + 2] [i_2 + 1] [(unsigned char)12] [(unsigned char)12] [i_3] [i_4 + 4])) : (((/* implicit */int) arr_17 [i_0] [i_2 + 3] [i_2 + 1] [i_3] [i_3] [i_3] [i_4 + 2]))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_15 -= ((/* implicit */_Bool) var_10);
                            arr_20 [i_0] [(short)4] [i_5] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (-620064587156064239LL)))) && ((!(((/* implicit */_Bool) var_11))))));
                            arr_21 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) arr_16 [i_5] [(unsigned short)9] [i_1])) : (1368340229U)))) ? (min((var_4), (((/* implicit */unsigned long long int) arr_8 [(signed char)7] [i_2])))) : (((/* implicit */unsigned long long int) ((var_11) - (((/* implicit */long long int) arr_1 [i_0]))))))) <= (((/* implicit */unsigned long long int) arr_3 [12] [12]))));
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_1] [0ULL] [i_1] [i_1] [i_6] [i_6] = ((/* implicit */unsigned char) min((((((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) (signed char)82)) - (51))))) % (-1))), (arr_6 [i_0] [i_2 + 1] [i_2 + 1])));
                            arr_25 [i_6] [i_6] [i_1] [i_6] [1ULL] = ((/* implicit */short) min((var_6), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))));
                            var_16 = ((/* implicit */unsigned char) arr_19 [i_1] [i_1]);
                        }
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1637641670)) & (-620064587156064237LL))))));
                        var_18 = ((((/* implicit */_Bool) var_0)) ? (0) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [10] [i_0] [i_0])));
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_5), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
}
