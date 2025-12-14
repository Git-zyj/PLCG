/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207153
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7913121933131206908LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (9223372032559808512ULL)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((((((/* implicit */_Bool) 18259376117253572615ULL)) ? (2112499607) : (((/* implicit */int) (signed char)-12)))) - (((/* implicit */int) ((signed char) -443612428)))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)45343))) ? (((((/* implicit */_Bool) 9223372032559808509ULL)) ? (arr_9 [i_0 - 1] [i_1] [i_1] [i_3 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [8LL] [(short)1] [(short)1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31315))) < (2922223432U)));
                            }
                        } 
                    } 
                    arr_13 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) var_17);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)20367)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62437))) : (var_3)))));
        arr_17 [i_5 - 2] [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_5]);
    }
    var_23 = var_0;
    var_24 = ((/* implicit */unsigned char) ((short) var_16));
}
