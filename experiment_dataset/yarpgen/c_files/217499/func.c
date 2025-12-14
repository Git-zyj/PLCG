/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217499
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
    var_12 = ((((/* implicit */int) (signed char)54)) & (((((/* implicit */_Bool) 21U)) ? (((/* implicit */int) ((_Bool) 7705581993302209139LL))) : ((~(var_3))))));
    var_13 |= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)4309)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_3)) : (var_4))));
    var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 738046310517349799LL)))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) min(((short)-32433), (((/* implicit */short) var_1))))))) : (-1068911053)));
    var_15 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */long long int) (signed char)82))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1])))), (arr_5 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))) : (738046310517349788LL))))));
                    var_17 = ((/* implicit */short) min(((signed char)53), (((/* implicit */signed char) ((((/* implicit */_Bool) 1695759412)) && (((/* implicit */_Bool) 1313024365)))))));
                    var_18 *= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (738046310517349799LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6710))))) == (((/* implicit */long long int) (+(25U)))))))));
                }
            } 
        } 
    } 
}
