/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234206
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
    var_10 &= ((/* implicit */unsigned long long int) var_3);
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) 16285774013351094549ULL)))))) << (max((((/* implicit */int) var_0)), (((var_3) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) ((unsigned long long int) max(((~(var_2))), (((/* implicit */unsigned int) arr_3 [i_0])))));
                    var_13 = ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_2 - 2] [i_2 + 2])), (arr_5 [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                            var_14 = ((/* implicit */long long int) ((unsigned long long int) min(((~(arr_1 [i_3]))), (((16285774013351094560ULL) & (7091273763300108064ULL))))));
                            arr_12 [i_4] [i_3] [i_2] = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_3] [i_0])))), (((/* implicit */int) var_1))))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) -349600520)) : (4294967295U))) : ((-(max((var_5), (((/* implicit */unsigned int) var_4)))))))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            arr_15 [i_5] [i_5] [i_0] |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2 + 2]))));
                            var_16 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (int i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            var_17 = (~(((/* implicit */int) (short)-10174)));
                            arr_19 [i_0] [i_1] [i_6 + 2] [i_3] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)69)) ? (2160970060358457056ULL) : (18296194993640847316ULL))))));
                        }
                        arr_20 [i_0] [i_0] [i_3] [6ULL] [i_0] = ((/* implicit */_Bool) ((((long long int) ((arr_7 [i_0] [i_3] [i_2] [i_3 + 3] [i_0] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_3])))))) | (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    }
                    arr_21 [i_0] [(short)9] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_2 + 1])), (((unsigned long long int) arr_5 [i_2 - 2] [i_2 - 1]))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */long long int) var_8);
    var_19 -= ((/* implicit */long long int) ((signed char) var_3));
}
