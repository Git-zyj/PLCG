/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234647
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
    var_14 = ((/* implicit */signed char) ((unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) var_5)) : (var_7))), (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) -895575349)) : (536870911U)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((((/* implicit */_Bool) 1152921435887370240ULL)) ? (((/* implicit */unsigned int) 895575363)) : (3541158368U));
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_2 - 2] [i_2])) ? ((~(3729061060U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_1 + 1])))))) : (((max((((/* implicit */unsigned long long int) var_1)), (arr_6 [i_0] [i_1] [i_0]))) | (((/* implicit */unsigned long long int) (-(-895575349))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_12);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6058928826996934267LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_13))))))) : (((/* implicit */int) var_1))));
}
