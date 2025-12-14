/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245472
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
    var_18 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_8))))) : (23ULL)));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_16))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) var_4))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7063507618859850642LL)) ? (-7063507618859850656LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1433)))))) < (arr_6 [i_1]))));
                    var_22 = ((/* implicit */unsigned char) ((short) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [(unsigned char)8] [i_1] [(unsigned char)12] [i_1] [i_2])))))));
                                arr_14 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (8122158994031079065ULL)));
                            }
                        } 
                    } 
                    var_23 ^= (short)-1342;
                }
            } 
        } 
        var_24 *= ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0])))));
    }
}
