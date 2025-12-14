/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196714
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((-(-10))) + (((/* implicit */int) var_0))));
        var_18 -= ((/* implicit */signed char) var_12);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) -201484063);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((int) var_5));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) ((signed char) ((unsigned char) arr_7 [i_3] [i_1])));
                        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(unsigned char)9] [(signed char)1] [i_2] [(unsigned char)9]))))) ? (arr_10 [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 3]))));
                    }
                    for (short i_4 = 2; i_4 < 10; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151)))));
                        arr_18 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12321673914572712431ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-1))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)155)) < (-201484063)));
                        var_23 += ((/* implicit */short) ((((((/* implicit */int) (signed char)-84)) + (2147483647))) << (((((/* implicit */int) (short)17)) - (17)))));
                    }
                    for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        arr_23 [i_1] = ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_2 + 1] [i_0] [i_5 - 2] [i_2]);
                        arr_24 [i_0] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned short) arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 1]);
                        arr_25 [i_0] [i_0] [i_0] [i_0] = 4279527521752927243ULL;
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) min(((-(((/* implicit */int) min((var_7), (var_4)))))), (var_5)));
}
