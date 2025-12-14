/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40058
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
    var_16 = ((/* implicit */unsigned short) ((int) ((((((/* implicit */unsigned int) 1920663511)) | (0U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))));
    var_17 = ((/* implicit */unsigned int) ((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) - (var_5)))) || (((/* implicit */_Bool) var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) min((((/* implicit */unsigned int) (unsigned char)186)), (var_5))))) * (((((/* implicit */long long int) ((/* implicit */int) ((18446744073709551605ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))))))) * (var_10)))));
                var_18 = ((/* implicit */int) arr_4 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(((int) (-(var_8))))));
}
