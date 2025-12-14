/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49895
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
    var_14 = ((/* implicit */signed char) var_9);
    var_15 ^= ((/* implicit */long long int) (((-(((var_8) >> (((((/* implicit */int) var_4)) - (30))))))) ^ (var_11)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))))))) ? (min((var_10), (max((var_5), (var_10))))) : ((+(var_13)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_2 [i_0])))))))) : (((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_2 [i_0])))) ^ ((-(((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_18 = (+(((/* implicit */int) (!(((/* implicit */_Bool) 17910906946204179915ULL))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                var_19 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 17910906946204179915ULL)) ? (17910906946204179915ULL) : (17910906946204179915ULL)))));
                var_20 = ((/* implicit */unsigned char) (+((-(((17910906946204179896ULL) * (535837127505371699ULL)))))));
                arr_10 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (((~(arr_4 [i_1 - 1]))) >= (min((arr_4 [i_1 - 2]), (arr_4 [i_1 + 1])))));
            }
        }
    }
}
