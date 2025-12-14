/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248724
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
    var_17 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_7 [15] [(unsigned short)1] [i_2] [i_1] = ((/* implicit */unsigned int) (unsigned char)31);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)53936)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (unsigned short)53949)) ? (-516875368) : (((/* implicit */int) (unsigned short)11587)))));
                    arr_9 [(short)0] [i_2] = ((/* implicit */int) var_3);
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [13ULL] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)3))))) : (max((((/* implicit */int) (unsigned short)65535)), (-838426057)))))) ? ((-(var_16))) : (((/* implicit */int) var_4))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) ((signed char) var_16))) : (var_15))) : (((/* implicit */int) ((unsigned short) var_12)))));
    }
}
