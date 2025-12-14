/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226210
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    arr_7 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (39142715481737623LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_4))))));
                }
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (signed char i_5 = 4; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -39142715481737612LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? ((~(((((/* implicit */_Bool) -39142715481737623LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_9 [i_1 + 1] [i_3] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                var_15 = ((/* implicit */signed char) var_10);
                                arr_18 [i_0] [i_0] [i_0] [i_4] [i_5] [i_3 - 2] = arr_5 [i_0];
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_12)))) && (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_13)))) || (((/* implicit */_Bool) (short)9516))))));
                }
                var_17 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]);
                arr_19 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) (short)20637))))) ? (((((/* implicit */int) (unsigned char)93)) * (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) var_9))))))));
                arr_20 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0 + 2] [i_0]);
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    var_18 ^= arr_3 [i_1 - 1] [i_1] [i_6];
                    var_19 = ((/* implicit */short) var_0);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1376085885U)), (var_6)))) ? (((/* implicit */int) (short)20944)) : (((/* implicit */int) var_1))))) * (var_6))))));
}
