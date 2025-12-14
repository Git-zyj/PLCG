/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197303
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
    var_17 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) 2147483647))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-671309629) : (arr_0 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) + (671309624))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((671309626) % (671309633))))));
        var_21 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (signed char)85)))) <= (var_15)));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] = ((((_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) arr_3 [i_1] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) ((unsigned char) 773647675))))))) : (((11200859553188300023ULL) >> (((1277684930004716080LL) - (1277684930004716024LL))))));
        arr_6 [i_1] [i_1 + 3] = ((/* implicit */unsigned long long int) var_16);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 671309626)) != (11200859553188300014ULL)))) > (var_15)))) == (((/* implicit */int) ((((/* implicit */int) ((_Bool) (signed char)91))) > ((~(((/* implicit */int) arr_3 [i_1] [i_1])))))))));
    }
}
