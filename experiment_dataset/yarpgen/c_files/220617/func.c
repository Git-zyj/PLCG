/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220617
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
    var_13 &= ((/* implicit */unsigned short) var_9);
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) arr_2 [(signed char)10] [i_0])) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (arr_1 [i_0]))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))))))) ? (((unsigned int) (-(((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)67)))))))))));
        var_16 *= ((unsigned int) (+(((/* implicit */int) (_Bool)1))));
    }
    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) min((-8196732230998933993LL), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))));
}
