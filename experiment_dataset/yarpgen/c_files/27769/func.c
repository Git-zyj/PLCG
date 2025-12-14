/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27769
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) var_3);
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = 5726143774262780794ULL;
                            arr_11 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) var_1)) << (((arr_5 [i_0]) + (948576469))))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_2 - 1] [i_3]))))) && (((/* implicit */_Bool) (signed char)122))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_1 + 1])), ((unsigned short)37433)))) : (((((/* implicit */int) (unsigned short)37451)) / (((/* implicit */int) (unsigned short)59279))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)3584)) ? (((((((/* implicit */int) (unsigned short)20226)) ^ (((/* implicit */int) (short)6976)))) * (((((/* implicit */_Bool) (unsigned short)59279)) ? (((/* implicit */int) (unsigned short)61945)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)-9082)) : (((/* implicit */int) (unsigned short)28103)));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (3169223066420265860LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4])))))) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (unsigned short)57112)) : (((/* implicit */int) arr_14 [i_4])))) : (((/* implicit */int) ((_Bool) (signed char)0))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        var_20 = var_9;
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12253607980352738782ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_14 [i_5]))))) : (((/* implicit */int) min(((unsigned short)65517), (arr_14 [i_5]))))));
    }
}
