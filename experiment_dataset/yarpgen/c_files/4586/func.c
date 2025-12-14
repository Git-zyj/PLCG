/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4586
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) <= (var_2)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 1])) / (((/* implicit */int) (unsigned short)28619))));
                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (max((((/* implicit */unsigned int) arr_1 [i_1])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [(unsigned char)7] [i_0]), (arr_3 [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_8 [i_3] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) (-((~(((/* implicit */int) arr_3 [i_0 + 1] [i_0]))))));
                            var_14 = ((/* implicit */unsigned char) (((-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)0)))))) != ((+(((/* implicit */int) (unsigned short)65535))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
                            {
                                arr_11 [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_7 [i_0 + 1] [(unsigned char)10] [i_2] [i_0 + 1]))));
                                var_15 = ((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_2] [i_4] [i_4]);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
