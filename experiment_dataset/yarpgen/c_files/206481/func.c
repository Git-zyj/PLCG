/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206481
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
    var_19 -= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_12)) == (((((/* implicit */int) var_7)) * (var_18))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (10757066411790716391ULL))) >= (((/* implicit */unsigned long long int) var_14)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_4 [i_1 + 1] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (-2244500424432435449LL))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_1 - 1] [i_0]) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_3 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_1 + 1])) + (66))))), (((/* implicit */int) arr_2 [i_1 - 1]))));
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))) + (var_4)));
            }
        } 
    } 
}
