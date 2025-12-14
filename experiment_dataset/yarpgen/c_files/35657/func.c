/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35657
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
    var_15 = ((/* implicit */long long int) (unsigned short)0);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)10))))) == (((((/* implicit */_Bool) 32704U)) ? (((/* implicit */long long int) 4294934607U)) : (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+((-(2036283126))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508))) - (0U)))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */long long int) var_10);
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 4190999006U)) | (var_7)))) <= (min((((/* implicit */unsigned long long int) 32658U)), (898113930718248228ULL)))))), (((((/* implicit */int) (unsigned short)36788)) << (((((/* implicit */int) ((unsigned short) (short)-1))) - (65524)))))));
}
