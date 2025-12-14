/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235374
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
    var_12 = ((/* implicit */signed char) max((var_12), (((signed char) ((((/* implicit */int) var_0)) <= (((((/* implicit */int) (unsigned char)200)) >> (((((/* implicit */int) (unsigned char)56)) - (43))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [(signed char)21] &= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 7820165530909282222LL)) ? (11ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
                    arr_8 [(_Bool)1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_3 [i_1 - 1]), (((/* implicit */long long int) (unsigned char)55)))));
                    var_13 = ((/* implicit */unsigned int) (-(((6ULL) | ((~(18446744073709551608ULL)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) var_1);
}
