/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4380
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
    var_17 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1930124378)) & (4464774816107054229ULL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)5)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (var_7)))))));
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [6LL] [6LL] [(_Bool)1] = ((((/* implicit */_Bool) arr_1 [9] [9])) ? (((((/* implicit */_Bool) min(((signed char)-3), ((signed char)-28)))) ? (((((/* implicit */_Bool) 396640935251368643LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)10)))) : (((/* implicit */int) min(((unsigned short)12), (arr_1 [i_0] [i_0])))))) : ((~(((/* implicit */int) (unsigned short)0)))));
                var_19 -= ((/* implicit */long long int) (short)29478);
                var_20 -= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((_Bool) (_Bool)0))), (var_11))), (((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) > (var_6))))));
                arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12)) * (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (((((/* implicit */_Bool) (signed char)0)) ? (17U) : (((/* implicit */unsigned int) arr_3 [i_0 - 1]))))));
            }
        } 
    } 
}
