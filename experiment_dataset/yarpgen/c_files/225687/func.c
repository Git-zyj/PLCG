/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225687
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
    var_18 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1179671881U)), (0LL)))) || (((var_10) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) != (((/* implicit */int) ((((((/* implicit */_Bool) 5065146046220597945ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) >= ((+(((/* implicit */int) (_Bool)0)))))))));
                arr_4 [i_0] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_0)), (((((((/* implicit */_Bool) (unsigned char)173)) ? (var_15) : (((/* implicit */unsigned long long int) -2030820043)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -966530275)) > (var_3)))))))));
                arr_5 [i_0] [i_1] = max((((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_0])) == (1262263698U))))) : (((7034736063491484546ULL) & (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1698))))) : (137144928U)))));
                arr_6 [i_0] = ((max((2147483648ULL), (18446744071562067968ULL))) >> (((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (18446744071562067968ULL))), (((/* implicit */unsigned long long int) (-(var_8)))))) - (17759579355776376013ULL))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) var_16)) ? (((var_10) + (min((((/* implicit */long long int) (_Bool)1)), (4294967295LL))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
