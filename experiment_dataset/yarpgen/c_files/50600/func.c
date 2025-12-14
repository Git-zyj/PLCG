/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50600
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
    var_17 = ((/* implicit */unsigned char) ((var_14) > (((/* implicit */long long int) (~(min((((/* implicit */int) var_0)), (var_2))))))));
    var_18 = ((/* implicit */signed char) (unsigned char)192);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)136)))) || (((/* implicit */_Bool) arr_0 [(signed char)2]))))), (((unsigned char) (unsigned char)18))));
        var_20 *= ((/* implicit */unsigned char) (+((~(-5110953784626605677LL)))));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)136))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))) % (36026597995708416LL)));
            var_23 = var_7;
            var_24 = ((/* implicit */unsigned char) (signed char)123);
        }
        var_25 = ((signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [(signed char)3])) : (((/* implicit */int) var_4))));
    }
}
