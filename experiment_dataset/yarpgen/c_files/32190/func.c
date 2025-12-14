/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32190
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) arr_3 [i_2] [i_0]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= ((+((+(7688315044664314168ULL)))))));
                    var_20 -= ((/* implicit */int) max((((((10758429029045237477ULL) - (10758429029045237447ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0 + 2] [i_2]), (arr_3 [i_0 + 1] [i_0 + 1]))))))), ((!(((/* implicit */_Bool) ((unsigned char) var_9)))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) (short)-29481);
                    var_21 = ((/* implicit */long long int) (-(((int) arr_3 [i_1] [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max(((~(10758429029045237473ULL))), (((/* implicit */unsigned long long int) ((long long int) var_9)))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_8))) || (((/* implicit */_Bool) var_5))))) | (1738704796)));
}
