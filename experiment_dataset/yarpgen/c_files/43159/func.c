/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43159
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
    var_17 += ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((1090890730) + (((/* implicit */int) (unsigned char)120)))), (-1234749095)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)120)) | (((/* implicit */int) (unsigned char)141)))))));
                arr_5 [i_0] [(unsigned short)15] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((1090890719) | (((/* implicit */int) (unsigned char)115))))) ? (max((2736581517990441886LL), (((/* implicit */long long int) 260132909)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140))))));
            }
        } 
    } 
}
