/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37762
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
    var_11 |= ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) 3018570887U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >> (((var_5) + (8829389327372373406LL))))));
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) 8297229713606683068ULL))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */short) ((((((4055627062U) | (239340233U))) | (((/* implicit */unsigned int) ((int) var_10))))) & (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? ((~(2078309632U))) : (4055627062U)))));
                arr_5 [i_0 + 2] |= ((/* implicit */int) ((((/* implicit */_Bool) -3630614560729344063LL)) ? (-3630614560729344080LL) : (-3630614560729344038LL)));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) 4055627063U))), (max((-3630614560729344059LL), (((/* implicit */long long int) (signed char)13))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -3630614560729344080LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3630614560729344060LL)))) : (var_10)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    arr_9 [i_2] = ((/* implicit */unsigned int) -3630614560729344063LL);
                    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) 3630614560729344063LL)) ? (var_10) : (((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 - 2])))) | (-3630614560729344080LL)));
                }
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    var_16 *= ((/* implicit */unsigned long long int) ((unsigned char) 3702989161U));
                    arr_14 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_7 [3U] [(signed char)13] [i_0] [i_0 + 2]))) ? (((1625125963U) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) / (max((1629776862U), (((/* implicit */unsigned int) (unsigned char)31))))))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? ((((((_Bool)0) ? (1276396402U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            }
        } 
    } 
}
