/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228916
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
    var_16 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2]))) - ((~(((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) var_13)) : (17065433493683056939ULL)))))));
                var_18 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (short)18)) : (((/* implicit */int) (short)18))))) != (var_1)))), (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)19))))));
                var_19 = ((/* implicit */unsigned int) (~((-(((((/* implicit */_Bool) (short)-21423)) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) arr_2 [i_0] [4LL]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            {
                arr_12 [i_3] [1] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (short)-6)), (((((/* implicit */_Bool) -1)) ? (5LL) : (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((_Bool) arr_10 [(short)19] [i_3 - 1] [i_3 + 1])))));
                var_20 += ((/* implicit */short) max(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) ((short) var_0)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) var_15)) <= (((unsigned long long int) var_6)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))))))));
}
