/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201232
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_19))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_14);
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) var_5)))) ? ((~(2147483647))) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((-4571541230085374164LL) / (((/* implicit */long long int) 2147483647))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (_Bool)1);
        var_22 = var_13;
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((4571541230085374163LL) < (-4571541230085374164LL)))))))));
        arr_11 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_2]))))));
    }
}
