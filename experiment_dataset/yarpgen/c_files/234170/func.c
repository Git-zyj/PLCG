/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234170
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
    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_11)))))) : ((-((-(((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1])))) ^ (((/* implicit */int) (unsigned char)255)))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0 - 1]))))) : (4290772992U)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) > (((/* implicit */int) var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    var_21 = ((/* implicit */unsigned char) var_1);
}
