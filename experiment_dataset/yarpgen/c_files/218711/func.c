/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218711
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
    var_14 = ((/* implicit */unsigned short) var_3);
    var_15 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */signed char) (unsigned short)61554);
                var_17 += ((/* implicit */long long int) (unsigned short)6300);
                arr_7 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned short) 437778248779862979ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [(unsigned short)0] [7]))), (((/* implicit */unsigned int) var_10))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((short) var_7)), (var_0)))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (-1694248162)))))))));
                var_19 = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [(unsigned short)11]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) (-(var_7)));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_3])))))))));
                    arr_15 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [10U])) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)26)))))));
                }
            } 
        } 
    } 
}
