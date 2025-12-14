/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231467
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((unsigned int) 11713984748232982048ULL);
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */int) (unsigned short)65535)), (var_5))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))) ? (((134086656U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3)))))) : (var_6)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((unsigned short) min(((unsigned short)65535), (((/* implicit */unsigned short) (!((_Bool)1)))))));
                    arr_16 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
}
