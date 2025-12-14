/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196488
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
    var_12 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_2]))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))))));
                    var_14 = ((/* implicit */unsigned long long int) arr_1 [4LL] [4LL]);
                    arr_8 [3] [i_1] = ((/* implicit */unsigned short) min((4259360401553843800ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_1)) ? (2552431154806360895ULL) : (((/* implicit */unsigned long long int) -840703225)))))));
    var_16 = ((/* implicit */unsigned short) (-(min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_10)))))));
    var_17 = ((/* implicit */signed char) (~(9043996348422468465LL)));
}
