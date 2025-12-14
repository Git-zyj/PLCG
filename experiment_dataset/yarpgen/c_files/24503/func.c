/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24503
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) var_3);
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_12 = ((/* implicit */unsigned char) ((int) (short)-2642));
        var_13 = ((/* implicit */long long int) ((((((/* implicit */int) (short)2642)) - (((/* implicit */int) (unsigned char)3)))) < (((/* implicit */int) var_6))));
        arr_2 [i_0] = ((/* implicit */signed char) var_1);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((-2104593845) + (2147483647))) >> (((arr_3 [i_4 + 3] [i_2]) + (8788274147697795585LL))))))));
                                arr_17 [(short)7] [i_2] [i_3 + 2] [i_4] [i_5] = ((/* implicit */unsigned short) ((short) min((9223372036854775789LL), (((/* implicit */long long int) (signed char)125)))));
                                var_15 += arr_14 [i_1] [i_2] [i_3] [i_2] [i_5];
                                arr_18 [i_1] [i_1 + 2] [i_1] [5LL] [i_5] = ((/* implicit */short) min(((~(4294967295U))), (((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) var_7))) + (2147483647))) << (((((/* implicit */int) var_6)) - (32))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) arr_7 [i_3 - 3] [11LL] [i_1 - 2]);
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)81)) << (((/* implicit */int) (unsigned char)4))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_9);
}
