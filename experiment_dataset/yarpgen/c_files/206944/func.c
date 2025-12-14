/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206944
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_8))))) : (((/* implicit */int) ((short) ((var_7) <= (var_7)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2796482851839361686LL)) ? (min((7437654083546514585LL), (2796482851839361683LL))) : (3875918734560901344LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)11456))))) : ((~(0ULL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_2)))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0])) - (((/* implicit */int) var_9)))))))), (var_6)));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) >= (var_6))))))) ? (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) 1330543518)))))) : (max((min((((/* implicit */long long int) var_2)), (var_8))), (min((var_0), (var_8)))))));
}
