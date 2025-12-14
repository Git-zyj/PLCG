/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201545
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
    var_11 = ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)50539)))) % (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) >= (((/* implicit */int) (unsigned short)28672))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [15] [i_2] [i_1] [(short)3] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)50541)) != (((/* implicit */int) arr_11 [i_0] [i_0]))))) << (((arr_12 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4]) - (8554483086496439613ULL))))) > (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)49105)))) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_1])))))));
                                var_13 = ((/* implicit */short) max((((((arr_13 [i_4 - 3] [i_4 + 1] [i_4] [i_1] [i_1]) + (2147483647))) << (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_3 [i_1])) : (arr_10 [i_0] [i_1] [i_4 - 2]))) < (((((/* implicit */int) (unsigned short)50527)) | (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
