/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224295
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (short)-23846);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_12)))))))) - (min((((/* implicit */int) max((var_8), ((signed char)-33)))), ((~(((/* implicit */int) (unsigned short)46216))))))));
                        arr_14 [i_0 - 1] [i_0] [i_2] [i_3] [i_3] [(signed char)5] = ((/* implicit */unsigned char) -759373950);
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */long long int) (-(-301390180)))) ^ (var_5))))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)73)) + (var_9)))))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) var_6))));
    var_15 = -1895825571;
}
