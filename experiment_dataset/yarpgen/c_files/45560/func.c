/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45560
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) (((((~(arr_5 [i_0 - 1] [i_1] [7U]))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((var_6) + (1765035060920663566LL)))))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)28025)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (arr_0 [i_0]))), ((+(arr_9 [11LL] [i_4] [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))))));
                                var_19 = ((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)-17)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1])))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_0] [i_1])))) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((9703340918922702346ULL) - (9703340918922702339ULL)))));
}
