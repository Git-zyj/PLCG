/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204778
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
    var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12105223893694467133ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) min((var_8), (var_5))))))));
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((unsigned long long int) arr_3 [i_0]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65521)) ? ((-((~(((/* implicit */int) (unsigned char)168)))))) : (((/* implicit */int) arr_5 [i_3] [i_2] [3ULL]))));
                            var_18 = ((unsigned long long int) var_8);
                            var_19 = ((/* implicit */unsigned short) 6341520180015084467ULL);
                        }
                    } 
                } 
                var_20 = ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_8 [i_0] [i_0] [6ULL] [i_0] [6ULL])))), ((+(((/* implicit */int) (signed char)5))))))) ? (max((6341520180015084482ULL), (6341520180015084467ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_1 + 1] [i_0]), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_9)), (arr_7 [i_0])))))))));
            }
        } 
    } 
}
