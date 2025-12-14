/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43948
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-362725605)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (var_7)))) : (((/* implicit */int) (!((_Bool)1))))));
        var_17 |= ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)9)))));
    }
    var_18 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1] [i_1]) : (var_2))));
        arr_6 [i_1] [i_1] = min((min(((~(arr_0 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_10) : (((/* implicit */int) (unsigned char)16)))))), (min((((/* implicit */int) arr_3 [i_1] [i_1])), (min((-1708839302), (2147483647))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)95))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_3]))));
                            }
                        } 
                    } 
                    arr_18 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((_Bool) (_Bool)1)) && (((/* implicit */_Bool) arr_2 [i_1])))))));
                    var_21 = ((/* implicit */int) (unsigned char)255);
                }
            } 
        } 
    }
}
