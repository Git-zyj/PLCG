/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248791
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_15 ^= ((((/* implicit */_Bool) (+(((4364597252815207369LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (2147483647) : (2147483647));
                        var_16 = max((((((/* implicit */_Bool) -903128264)) ? (-1) : (-1213352164))), (131071));
                    }
                    var_17 = ((/* implicit */unsigned short) ((long long int) ((-1961982455229109703LL) / (((/* implicit */long long int) -1861196043)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_3);
    var_19 = ((/* implicit */long long int) 0);
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
}
