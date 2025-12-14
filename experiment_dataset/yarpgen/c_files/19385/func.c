/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19385
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)2844))))))))) % (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(short)3] [i_1] [i_2])) && (((/* implicit */_Bool) var_6))))), ((+(var_2)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 1]))))));
                }
            } 
        } 
        arr_10 [6LL] [6LL] |= ((/* implicit */long long int) (~(max((var_5), (((/* implicit */unsigned int) var_1))))));
    }
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (~((~(((/* implicit */int) (short)19925))))))) / (((max((((/* implicit */long long int) var_4)), (var_2))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
    var_17 = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) var_13))))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) var_6)))))));
}
