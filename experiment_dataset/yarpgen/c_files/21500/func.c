/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21500
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
    var_18 += ((/* implicit */unsigned long long int) (short)-13132);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 2250249675U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)8] [i_1] [(unsigned char)2]))) : (var_17))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (10943833387772725963ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)13131)) == (((/* implicit */int) (short)-13150))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (short)-21285);
}
