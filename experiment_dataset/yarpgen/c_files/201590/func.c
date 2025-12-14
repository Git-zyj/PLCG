/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201590
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
    var_16 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned long long int) max((var_14), (((var_15) <= (879992691682372342LL))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1133434325U)) || (((/* implicit */_Bool) -8))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))) ? (max(((~(-1371707460))), (((/* implicit */int) ((((/* implicit */long long int) 496284900)) == (13510798882111488LL)))))) : (((/* implicit */int) var_0))));
    var_18 = (+(((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_0))))) - (min((((/* implicit */unsigned long long int) -784470446)), (var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) 17489451808192179850ULL)) | (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_1]), (var_2))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned long long int) (+(max((arr_7 [i_0] [i_1]), (((/* implicit */long long int) var_5)))))))));
                arr_10 [8LL] [i_1] |= ((/* implicit */int) max((((/* implicit */unsigned int) ((-1LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145)))))), (65535U)));
                var_19 -= ((/* implicit */int) arr_3 [12]);
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((int) var_10)) : (max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) var_4))))));
}
