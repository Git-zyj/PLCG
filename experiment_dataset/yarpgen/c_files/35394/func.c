/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35394
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max((min((((((/* implicit */unsigned long long int) var_9)) % (12442708550608100591ULL))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((~(var_3))) : (((/* implicit */int) (short)-31248))))))))));
    var_11 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (12442708550608100591ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (var_2))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) var_2))));
                var_13 = ((/* implicit */unsigned short) min(((((((-(((/* implicit */int) (unsigned short)65526)))) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (var_6)))) - (227))))), (((((/* implicit */_Bool) 12442708550608100591ULL)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_0))))));
                arr_5 [i_0] [0LL] = ((/* implicit */unsigned char) (-(((((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0] [1ULL] [i_0])), ((unsigned char)127)))) % (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 7; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    var_14 &= ((((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775805LL))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-100))))));
                    var_15 = ((/* implicit */signed char) 534838061U);
                    arr_12 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) max(((signed char)126), ((signed char)-108))))));
                }
            } 
        } 
    } 
}
