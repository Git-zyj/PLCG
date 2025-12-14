/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235267
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
    var_20 = (unsigned short)52919;
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((/* implicit */int) max((max((var_8), (var_10))), (min((var_11), (((/* implicit */short) var_9))))))))))));
    var_22 &= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) max((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) >= (var_6))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_23 = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (arr_0 [i_0] [i_0])))) - (((/* implicit */int) ((_Bool) arr_1 [i_0]))))) >= (((/* implicit */int) (!(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_24 = ((((/* implicit */int) arr_6 [i_1] [i_1])) > (((/* implicit */int) arr_0 [i_1] [(_Bool)1])));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1] [i_1])) < (((/* implicit */int) arr_7 [i_1]))));
        var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1]))));
        arr_9 [i_1] = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) ((unsigned int) (!((_Bool)1))));
        var_27 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-115)) + (((/* implicit */int) (signed char)-97))))), (4294967265U))) > (((/* implicit */unsigned int) (+(((((/* implicit */int) var_2)) / (((/* implicit */int) arr_10 [i_2])))))))));
    }
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    var_28 = max((arr_11 [i_5]), (arr_11 [i_3]));
                    /* LoopNest 2 */
                    for (short i_6 = 3; i_6 < 23; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((2187704645U) << (((2400182308U) - (2400182293U)))))) && (min(((_Bool)1), ((_Bool)0))))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (_Bool)1))));
                                var_30 -= ((/* implicit */short) ((((/* implicit */int) var_15)) + (((/* implicit */int) arr_16 [i_5] [i_5] [i_7]))));
                            }
                        } 
                    } 
                    arr_28 [21U] [(unsigned short)20] [i_4] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) (!(arr_13 [i_3])))), (((((/* implicit */int) arr_10 [i_5])) | (((/* implicit */int) arr_13 [7U]))))));
                    var_31 -= ((unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3] [i_4] [i_4] [i_5] [i_5]))))), (((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [(short)12] [i_5]))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) arr_24 [i_3] [i_3] [(unsigned short)10]);
        var_33 = var_13;
    }
}
