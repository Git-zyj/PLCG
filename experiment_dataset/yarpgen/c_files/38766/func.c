/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38766
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((var_9) ? ((((-(var_14))) / (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1 + 4] [i_1])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3214483803728680069LL)))))) != (((((/* implicit */_Bool) (short)29967)) ? (3214483803728680050LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_3] [i_1] [i_0] = (unsigned short)11490;
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) < (((/* implicit */int) arr_9 [i_4] [i_2 + 3] [i_2 + 3] [i_0])))))) ^ (arr_4 [i_0] [i_1] [i_0])));
                        }
                        var_21 = ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (min((((/* implicit */long long int) (_Bool)1)), (-8958208880581001896LL))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) arr_10 [(_Bool)1]);
    }
    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)54035)))))));
        var_23 = ((/* implicit */int) arr_20 [(_Bool)1]);
    }
    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
}
