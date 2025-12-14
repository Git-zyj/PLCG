/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244578
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
    var_15 ^= ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) && (((/* implicit */_Bool) arr_3 [i_0] [i_3] [i_2]))));
                        arr_9 [i_0] [4U] [i_2] [i_0] = min((((((/* implicit */int) var_2)) * (((/* implicit */int) var_4)))), (((arr_1 [i_3] [i_2]) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1])))));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
                    }
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_7 [i_0] [i_2]))))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [(unsigned short)0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1] [3LL]);
                                arr_18 [4ULL] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_9);
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) var_8);
                                var_18 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [(_Bool)1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */short) min((7607549003847506706LL), (((/* implicit */long long int) arr_14 [i_0] [i_1] [i_0] [0U] [i_1] [(_Bool)0]))));
                                arr_26 [i_0] [i_0] [i_2] [i_6] [(unsigned char)7] [i_6] = ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_7] [i_6] [(unsigned char)0])), (((((/* implicit */_Bool) min((arr_23 [i_0] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1] [i_6] [i_7]))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((-7607549003847506710LL) | (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
