/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215258
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)54)) || ((_Bool)1))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)187))))) ? (((((/* implicit */int) (unsigned char)45)) ^ (((/* implicit */int) (unsigned char)42)))) : (((((/* implicit */int) (signed char)124)) >> (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((unsigned int) max((((/* implicit */int) arr_11 [i_0] [14U] [(unsigned char)4] [i_3 + 2] [i_4])), (16252928)))) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_7 [i_1] [i_1] [i_2] [i_1]), (arr_7 [i_3] [i_3 + 1] [i_2 + 1] [i_2 + 1])))))));
                                var_20 ^= ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 9513812548677320286ULL)) ? (((/* implicit */int) arr_1 [i_3 + 2])) : (404396023)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4290772992U))));
                        arr_15 [(unsigned short)14] [(_Bool)1] [i_2 + 1] [(_Bool)1] [i_2] [(unsigned short)14] &= var_15;
                    }
                    arr_16 [i_0] [4U] [i_2 + 1] [i_2 + 1] = ((/* implicit */short) min(((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [3U] [i_2 + 1])))), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) arr_11 [(signed char)16] [(signed char)16] [i_2] [(signed char)16] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 3; i_6 < 20; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)-12), (((/* implicit */signed char) (_Bool)1))))) * (((/* implicit */int) min((arr_5 [i_6]), (((/* implicit */short) (_Bool)0)))))));
        arr_22 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_12 [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 2] [i_6] [i_6 + 1])))) & ((~(((/* implicit */int) arr_1 [i_6 - 2]))))));
    }
}
