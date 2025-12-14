/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49160
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5054787356692134440ULL)) ? (((((/* implicit */_Bool) (short)-32738)) ? (-3522369003371775383LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_8)))))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)4833)) == ((-2147483647 - 1)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
                    var_12 &= ((/* implicit */_Bool) (short)32738);
                    arr_8 [i_0] [2] [i_0] &= (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_6)));
                    var_13 = ((/* implicit */int) (+(((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)60690)), (987204421)))) & ((~(var_0)))))));
                    arr_9 [i_0] [i_0] [(signed char)5] [i_0] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) : (var_0))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (var_5)))))), (((/* implicit */long long int) max((((((/* implicit */int) var_4)) % (((/* implicit */int) arr_0 [i_2] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
