/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216748
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
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)244))));
                    var_21 = ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (((/* implicit */long long int) 2408869676U)) : (-1LL)))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_2 - 2])) | (((/* implicit */int) var_17))));
                    var_23 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) + (((/* implicit */int) (signed char)-1))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63396)) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (-3589179119166954988LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33111)))));
    }
    var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((+(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
}
