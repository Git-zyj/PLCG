/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249474
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)848)))) % (((((/* implicit */_Bool) (signed char)0)) ? (-1317716703087365364LL) : (((/* implicit */long long int) var_4))))))) ? (15972067737779495644ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49)))));
    var_13 &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min(((short)18436), (((/* implicit */short) (unsigned char)255)))))))));
    var_14 |= ((/* implicit */short) (unsigned short)65530);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [4]), (arr_3 [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-18422))))) : (arr_3 [i_0])));
                arr_7 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((signed char) ((arr_4 [i_0] [i_1] [i_1]) - (arr_4 [i_0] [i_1] [i_0]))));
                var_15 = ((/* implicit */signed char) arr_4 [7ULL] [i_0] [i_1]);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)24);
            }
        } 
    } 
}
