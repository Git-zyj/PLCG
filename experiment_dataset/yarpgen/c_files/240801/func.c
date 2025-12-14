/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240801
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) -3653432860785376324LL)) ? (var_12) : (4074273568670132768ULL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))) / ((-(3653432860785376316LL))))) : (((max((8128017399684032840LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) ^ (((((/* implicit */_Bool) 8128017399684032825LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_13)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_16 = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
            var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) > (8128017399684032820LL))))) % (((-8128017399684032849LL) % (-3653432860785376320LL))))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 3653432860785376323LL)) : (var_1))) | (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                    var_19 = ((/* implicit */long long int) var_5);
                    arr_12 [i_0] [i_0] [4LL] [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */short) arr_4 [i_0] [i_3])), (var_2))))) ^ (min((((/* implicit */unsigned long long int) 757858500U)), ((+(arr_0 [i_2])))))));
                }
            } 
        } 
    }
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_0))))))) ? (max((((((/* implicit */unsigned long long int) var_13)) ^ (var_12))), (((/* implicit */unsigned long long int) ((-9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) : (var_15)));
}
