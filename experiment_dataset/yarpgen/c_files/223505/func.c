/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223505
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) 3019715617U)) >= (1945527127056146517LL)))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (signed char)-93))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1]))))) : (((/* implicit */int) var_1))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (3866553755U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)38)) * (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) ((unsigned char) var_7));
}
