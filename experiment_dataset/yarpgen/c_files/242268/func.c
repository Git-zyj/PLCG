/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242268
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_5 [(_Bool)1])))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1))));
        }
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_10 [(signed char)17] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (2147483624)));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(min((arr_8 [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [i_2 - 1]))))))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_19 &= ((/* implicit */int) max((((/* implicit */long long int) var_13)), (((long long int) arr_11 [i_3]))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (max((var_5), (((/* implicit */unsigned long long int) (signed char)83)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_22 ^= ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
                    }
                    arr_22 [(signed char)7] [i_4] [(signed char)7] = ((/* implicit */long long int) var_15);
                }
            } 
        } 
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_23 ^= 9223372036854775801LL;
        var_24 *= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) (~(arr_23 [i_7])))) : (min((var_2), (((/* implicit */long long int) (_Bool)1))))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_15))));
    var_26 += ((/* implicit */short) var_0);
}
