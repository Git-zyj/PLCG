/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24917
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) -2280237749377636460LL)) ? (-495424712413582001LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((((((((/* implicit */_Bool) (short)1024)) ? (var_2) : (var_6))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 31525197391593472LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))))) / (min((-1LL), (min((((/* implicit */long long int) (short)1005)), (31525197391593488LL))))));
                arr_6 [i_0] = ((/* implicit */_Bool) var_16);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)16915))) == (15LL)))) < (((((/* implicit */_Bool) (short)16915)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1039))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4096))))) ? (-235514954145248826LL) : (min(((-9223372036854775807LL - 1LL)), (((-5714435457832753064LL) / (17179869183LL)))))));
}
