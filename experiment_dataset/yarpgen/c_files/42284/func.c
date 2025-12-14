/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42284
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) 3145471655U);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1149495622U)) ? (((/* implicit */unsigned int) -662210839)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1149495640U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (1149495640U)))) ? (3145471674U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123)))))));
                arr_4 [i_0 - 2] [i_0 - 2] [i_0] &= ((/* implicit */signed char) ((unsigned short) ((max((((/* implicit */long long int) var_17)), (6323171702335027091LL))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((int) var_15)), (((/* implicit */int) ((var_17) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0 - 2]))))))))) + (max((1149495629U), (3145471636U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-6323171702335027091LL), (((/* implicit */long long int) var_17))))) ? ((~(6323171702335027091LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (((max((((/* implicit */long long int) (unsigned short)35205)), (var_13))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
                arr_13 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_2])), (arr_12 [i_2] [i_2]))))) - (((((/* implicit */_Bool) -6323171702335027065LL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))))) ? ((+(((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) (short)(-32767 - 1))));
                var_21 = (~((~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65535)))))));
                arr_14 [4] [i_3] [i_2 + 1] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)18))))) ? (((((/* implicit */_Bool) arr_12 [i_2] [1U])) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_3])))) : (((var_3) + (-2147483636)))))) - (((((/* implicit */_Bool) arr_10 [i_3])) ? ((+(-6323171702335027093LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_17)))) <= (var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63024))) : (min((((/* implicit */unsigned int) (+(0)))), (((unsigned int) var_10)))))))));
            }
        } 
    } 
}
