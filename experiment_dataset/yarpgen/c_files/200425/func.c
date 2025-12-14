/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200425
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
    for (int i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        arr_10 [i_2] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_7 [i_3 + 3] [i_3 + 2] [i_3 + 3] [i_3 + 3]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (min((3696620765U), (((/* implicit */unsigned int) arr_6 [i_3 + 1] [i_2] [(short)1])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
                        arr_11 [i_0] = (+(((/* implicit */int) var_14)));
                        arr_12 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2])) / (arr_7 [i_0] [i_0 - 1] [(signed char)8] [i_0])))));
                    }
                    arr_13 [i_0] [(_Bool)1] [(unsigned short)12] [10U] = min((((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_0 - 3] [i_1 + 2])) ? (arr_5 [6U] [i_1] [i_0] [i_2]) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0 - 2] [i_1 + 3]) : (arr_8 [i_0 - 1] [i_1 + 1]))));
                    arr_14 [i_2] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_6 [i_0] [i_2] [i_1 + 2])) | (((/* implicit */int) var_15)))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (~(12U)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((491520) == ((-(((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)(-127 - 1)))))))));
}
