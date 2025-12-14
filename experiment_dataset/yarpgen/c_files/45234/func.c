/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45234
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3301538303U)) ? (((/* implicit */long long int) 1218758077U)) : (-982421097065579385LL))) << ((((~(min((-982421097065579359LL), (((/* implicit */long long int) var_10)))))) - (982421097065579338LL)))));
                    var_16 |= ((/* implicit */unsigned short) (-(((8236254180789634338ULL) - (((/* implicit */unsigned long long int) 262143))))));
                    var_17 = ((/* implicit */signed char) -33554432);
                }
            } 
        } 
    } 
}
