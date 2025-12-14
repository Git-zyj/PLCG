/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48455
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
    var_16 = var_0;
    var_17 = min(((((~(((/* implicit */int) (unsigned char)192)))) + (((((/* implicit */int) (signed char)39)) / (-687738867))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)5)) > (var_5)))) < (((/* implicit */int) ((unsigned char) var_11)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) arr_5 [i_1] [i_0]);
                    var_19 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 11296870419826839454ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4102)))), (((/* implicit */int) ((arr_3 [i_1 + 2] [i_1]) != (arr_3 [i_1 + 3] [(signed char)18]))))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) min((var_1), (((((/* implicit */int) var_7)) >= (((/* implicit */int) max((var_6), (var_6))))))));
}
