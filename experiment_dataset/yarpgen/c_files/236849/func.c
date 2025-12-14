/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236849
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((min(((~(262136U))), (((/* implicit */unsigned int) var_3)))), (((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_3] [i_3 - 3])) ? (min((((/* implicit */unsigned int) var_8)), (4294705160U))) : (max((262152U), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1]))))))));
                                var_12 = min((((/* implicit */short) (_Bool)1)), ((short)-2985));
                                var_13 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_3 - 2] [i_3 + 3] [i_3 + 4] [1U]))))) ? (((/* implicit */int) ((signed char) ((unsigned char) (signed char)-120)))) : (((-2040863559) - (((/* implicit */int) ((unsigned short) var_0))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (max((((((/* implicit */_Bool) arr_3 [i_1])) ? (1613006912) : (((/* implicit */int) (short)-21311)))), (arr_9 [(_Bool)1] [(signed char)6] [i_2]))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)16351)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(signed char)2])) || (((/* implicit */_Bool) var_9)))))))))));
                    arr_11 [2ULL] = ((/* implicit */_Bool) min((2017289551), (((/* implicit */int) (short)-21311))));
                    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-79)), (2192090645U)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (short)2984)))));
}
