/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25238
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned short) min((((unsigned int) arr_3 [i_0 + 2] [(unsigned char)12] [i_1])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1015758920)) ? (-1015758920) : (-1015758920))))));
                var_11 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)15)), (-1978677517))) > (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 1978677505)))))));
                var_12 = ((/* implicit */signed char) arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) var_2);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_2)), (8765697636269403845LL))), (((/* implicit */long long int) min((((/* implicit */int) var_0)), (-1015758922))))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) var_9)))), ((~(var_2)))))) : ((+(min((1847872884771660585LL), (((/* implicit */long long int) var_7))))))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 &= (+(((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)61143)))), ((!(((/* implicit */_Bool) var_6))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_3] [(unsigned short)6] = min((max((1978677485), ((+(((/* implicit */int) var_9)))))), (((/* implicit */int) var_1)));
                                arr_19 [(short)10] [i_4] [i_2] [i_6] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-10400)), (var_9))))))), (arr_12 [i_2] [14] [i_2]));
                                arr_20 [i_2] [i_2] [i_3] [i_5 - 1] = ((/* implicit */short) (+(((((((/* implicit */_Bool) var_3)) ? (arr_12 [i_4] [i_4] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_2 + 3] [i_2 + 3] [11U] [i_2]))) > (arr_13 [i_2] [i_4] [i_2] [i_2] [16LL] [(unsigned short)15])))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) var_7);
                }
            } 
        } 
    } 
    var_16 = (~(((int) ((1978677524) ^ (((/* implicit */int) var_1))))));
    var_17 = ((/* implicit */signed char) max((((/* implicit */long long int) max((var_8), (var_6)))), (((((/* implicit */_Bool) (short)10397)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-8765697636269403846LL)))));
}
