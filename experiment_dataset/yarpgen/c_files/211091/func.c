/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211091
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) max((1284820470U), (((/* implicit */unsigned int) -1843013043))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_10);
    }
    var_15 = ((/* implicit */int) var_12);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)6)) ^ (((/* implicit */int) (unsigned short)18030)))) & (((/* implicit */int) var_3))))) ^ (var_10)));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (min((((/* implicit */unsigned int) 924673991)), (1284820470U))))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [(signed char)3] = ((/* implicit */short) max((4598798948258449052LL), (((/* implicit */long long int) min((var_5), (((/* implicit */short) arr_6 [i_1 + 1])))))));
        var_18 = ((/* implicit */int) (~(max((arr_5 [i_1 + 1]), (((/* implicit */long long int) var_4))))));
        arr_8 [i_1] = ((/* implicit */_Bool) max(((-(arr_5 [i_1 + 1]))), (((/* implicit */long long int) ((((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >> (((/* implicit */int) ((4038100854U) == (((/* implicit */unsigned int) 1843013027))))))))));
    }
}
