/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3571
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), ((signed char)-4)));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_20 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 1])) - (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1])))))));
                        var_21 = ((/* implicit */unsigned long long int) 4611686018427387903LL);
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_15 [i_4] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((long long int) arr_10 [i_1] [i_4] [i_4] [10LL] [i_4])) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_1 - 1] [(unsigned char)9] [i_0 + 1])))))));
                        var_22 = ((/* implicit */unsigned short) (signed char)3);
                        arr_16 [i_0 - 1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)61870))));
                        var_23 = ((long long int) (short)4388);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (unsigned short)61887);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 1; i_5 < 18; i_5 += 3) 
    {
        arr_20 [i_5 - 1] [i_5 - 1] = ((/* implicit */unsigned long long int) arr_18 [i_5] [i_5]);
        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) || (((/* implicit */_Bool) arr_19 [i_5])))));
        arr_21 [5LL] [i_5] = (~(((18446744073709551608ULL) << (((((/* implicit */int) (short)32303)) - (32296))))));
    }
}
