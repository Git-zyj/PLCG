/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242642
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
    var_16 -= ((/* implicit */unsigned int) min((((/* implicit */int) (short)-31430)), (((int) ((_Bool) (-9223372036854775807LL - 1LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((arr_3 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (short)32759))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17617)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_3 [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [20ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((unsigned int) 18446744073709551615ULL)))) ? (((((/* implicit */_Bool) min((var_7), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21171))) : (((((/* implicit */_Bool) arr_0 [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (9997333041505903249ULL))))) : (min((((/* implicit */unsigned long long int) (unsigned short)16383)), (arr_1 [i_0]))))))));
                var_19 -= ((/* implicit */unsigned char) min(((+(max((6958602903749669533ULL), (((/* implicit */unsigned long long int) 2919593563447625661LL)))))), (((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (1798877928U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21)))))))));
                arr_6 [i_1] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) 6958602903749669542ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7311)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1677517432U)))) : (((unsigned long long int) (_Bool)0))))));
            }
        } 
    } 
}
