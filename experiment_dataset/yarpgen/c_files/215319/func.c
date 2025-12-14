/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215319
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (unsigned short)672))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */int) ((unsigned short) arr_0 [i_1]))) ^ (((((/* implicit */_Bool) (unsigned short)39225)) ? (-321913080) : (267997736)))))));
            arr_5 [(unsigned short)9] [(unsigned short)9] = arr_0 [i_0];
        }
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1472102585)) ? ((-(((/* implicit */int) (unsigned short)7217)))) : (-267997736))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 21; i_3 += 3) 
            {
                for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    {
                        arr_15 [i_0] [i_2] [(unsigned short)5] [i_4] = (((!(((/* implicit */_Bool) 569682169)))) ? ((+(arr_7 [i_0]))) : (min((827467780), (((/* implicit */int) (unsigned short)24720)))));
                        arr_16 [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63295)) / (((/* implicit */int) ((unsigned short) min(((unsigned short)59826), (arr_8 [i_2] [i_4])))))));
                        arr_17 [13] [(unsigned short)2] [i_3] [(unsigned short)19] [i_3 - 3] [0] = ((/* implicit */int) ((unsigned short) min((((/* implicit */int) (unsigned short)34803)), (-321913076))));
                    }
                } 
            } 
            var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((1), (((/* implicit */int) (unsigned short)50337)))))));
            arr_18 [i_2] [i_0] = min((((/* implicit */int) arr_10 [i_2] [i_0])), ((+((-(-2147483623))))));
            arr_19 [i_0] [i_2] &= var_0;
        }
    }
    var_14 = min(((~(1793724370))), (((max((var_8), (((/* implicit */int) var_7)))) / ((-(var_2))))));
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_2), (var_8))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24691)) ? (-1532988136) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((var_0) < (((/* implicit */int) var_3))))) : (((var_5) % (((/* implicit */int) (unsigned short)24717)))))) : (((/* implicit */int) var_4))));
}
