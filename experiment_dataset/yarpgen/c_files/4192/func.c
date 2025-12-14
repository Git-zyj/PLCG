/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4192
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) (short)8271)) - (8257)))));
    var_15 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (3523831461U)))) || (((/* implicit */_Bool) (+(var_10))))));
                                var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                arr_15 [i_1] [i_2] [i_3] [i_4] = (+((~(((/* implicit */int) var_5)))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) 980828139)) : (arr_6 [i_1 + 1] [i_0]))))));
                                var_19 = ((/* implicit */short) ((long long int) arr_6 [i_0] [i_1]));
                            }
                        } 
                    } 
                    arr_16 [17U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_0)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0]);
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) 1344114381U)) + (((((/* implicit */_Bool) (unsigned short)18947)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15855260000940054716ULL)) ? (281718736U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    }
}
