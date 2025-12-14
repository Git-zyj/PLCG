/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237839
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
    var_12 |= ((/* implicit */_Bool) 2069454820U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_7)) : ((~((-2147483647 - 1))))))));
                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2147483647)) ? (2147483647) : (arr_1 [i_1 + 2] [i_0 - 3]))), (((var_2) - (2147483647)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((max((var_4), (((/* implicit */long long int) var_3)))) / (((/* implicit */long long int) ((2147483647) / (((/* implicit */int) var_10))))))))))));
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 18; i_2 += 4) 
    {
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 17655490208265040213ULL)) ? (((/* implicit */int) (_Bool)0)) : (arr_5 [i_2]))) >> (((((/* implicit */int) var_1)) - (13228)))))) != (((unsigned long long int) var_3))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)48))))) > (((((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 4])) >> (((/* implicit */int) (_Bool)0))))));
    }
    var_18 = ((/* implicit */unsigned int) ((((_Bool) 1835008U)) ? (((var_4) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
