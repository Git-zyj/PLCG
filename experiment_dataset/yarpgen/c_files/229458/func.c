/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229458
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((max((max((2047ULL), (((/* implicit */unsigned long long int) -5130440475264958905LL)))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0 - 1])), (-1)))) ^ (-5130440475264958906LL))))));
                var_16 = ((((/* implicit */_Bool) (unsigned short)39863)) && ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((max((var_4), (((/* implicit */long long int) var_8)))) - (((/* implicit */long long int) (-(((/* implicit */int) (short)-32760))))))) - (((/* implicit */long long int) (+(((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_0))))))))));
}
