/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225084
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-91)), (var_0)))) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)65518))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) 743130614U)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3119571979566301452LL))))) : (((/* implicit */int) ((unsigned short) var_14)))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((5148736848797080080LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_10);
}
