/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3117
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_3 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                        var_12 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    arr_12 [i_2] [i_0] [i_1] [(unsigned char)10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3119)) ? (9992354310474072905ULL) : (8454389763235478714ULL)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) (short)-32764);
}
