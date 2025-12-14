/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37231
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
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [i_2] = ((/* implicit */unsigned short) (+(min((var_3), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
                    var_13 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)26513)), ((unsigned short)0)))))))));
                                var_15 = ((/* implicit */short) (unsigned short)28515);
                                arr_16 [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) 1))))) ? (((((/* implicit */_Bool) var_6)) ? (2462091260U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16553))))) : (((((/* implicit */_Bool) (short)-10917)) ? (((/* implicit */unsigned int) var_3)) : (arr_0 [i_0 - 2] [i_1]))))));
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) var_10)))))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+(arr_0 [i_0 + 1] [i_1]))))));
                arr_17 [8U] [i_0] = (!(((/* implicit */_Bool) (short)24576)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_18 = ((/* implicit */signed char) var_7);
        var_19 = ((/* implicit */short) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~((~(var_2)))))), (min((max((arr_7 [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32756)) ? (var_3) : (86021448))))))));
    }
    var_21 = ((/* implicit */unsigned int) var_3);
}
