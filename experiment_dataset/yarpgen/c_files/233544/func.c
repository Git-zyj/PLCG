/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233544
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
    var_14 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)22130)) : (((/* implicit */int) var_12)))) & (var_0))) >> (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) ((6638926152119514619ULL) % (11807817921590036996ULL))))))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((unsigned long long int) min((arr_4 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1]), (arr_4 [i_2] [i_2 - 1] [i_2] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) var_5);
}
