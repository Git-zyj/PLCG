/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41291
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
    var_18 = ((/* implicit */unsigned long long int) -5007688291516283034LL);
    var_19 = ((((/* implicit */_Bool) 5007688291516283033LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((((((_Bool)1) ? (-5007688291516283034LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)168))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned char) (short)32757);
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5007688291516283046LL)) ? (((/* implicit */int) (short)11969)) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) max((arr_2 [i_1] [i_1]), ((short)-18018)))), ((+(arr_4 [i_1] [i_1])))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned char)161))));
        var_24 = (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 5007688291516283033LL)))) ? ((~(arr_4 [i_1] [i_1]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [i_1])))))))));
    }
}
