/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206228
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
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) var_17)), ((~(var_16)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) var_12);
                            arr_10 [(short)10] = ((/* implicit */short) var_15);
                            arr_11 [i_1] = ((/* implicit */unsigned long long int) var_10);
                            arr_12 [i_0] [i_0] [i_0] [2ULL] = ((/* implicit */unsigned short) arr_5 [i_3] [i_2] [(signed char)8] [7ULL]);
                        }
                    } 
                } 
                var_21 &= min((max((arr_6 [i_0]), (arr_6 [i_0]))), (((/* implicit */signed char) ((_Bool) arr_6 [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) 2250916369869443616ULL)) ? (2250916369869443626ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    var_23 = ((/* implicit */short) var_6);
}
