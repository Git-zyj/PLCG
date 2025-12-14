/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30013
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
    var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (arr_4 [i_0])))) ? ((+((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_7 [15U] [i_1] [(_Bool)1])))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 4] [i_0] [(_Bool)1] [i_0]))) * (arr_5 [i_2] [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_3] [i_3 + 3]))))));
                        arr_13 [i_2] [14] [i_2] [(unsigned char)5] [12U] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) arr_6 [16] [i_1] [i_2 + 2] [i_3])), (arr_4 [i_3 - 1]))));
                        arr_14 [i_0 - 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_1] [i_2 + 4] [i_3 + 3]), (((/* implicit */unsigned short) (unsigned char)255))))) ? (max((arr_4 [i_3]), (((/* implicit */unsigned int) (unsigned short)49152)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_3 + 3] [i_2 + 2] [i_2] [i_2] [i_2]))))));
                    }
                }
            } 
        } 
    } 
}
