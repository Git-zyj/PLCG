/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229252
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
    var_10 = ((unsigned char) var_4);
    var_11 = ((/* implicit */_Bool) ((((18309696827105236656ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */_Bool) arr_4 [i_0]);
                arr_5 [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0 + 1]) - (arr_1 [i_0 + 1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -90770895256698594LL)) ? (-90770895256698597LL) : (((/* implicit */long long int) 2858222756U))))) ? ((-(((int) var_1)))) : (((/* implicit */int) var_6))));
}
