/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36000
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (arr_3 [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) (signed char)-107))))));
                var_18 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107))))), (min((8387584), (((/* implicit */int) (short)22176))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)107)))))))))));
    var_20 = ((((/* implicit */int) var_6)) + (((/* implicit */int) var_8)));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))), (((/* implicit */long long int) var_7)))))));
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [7LL] [7LL])) ? (((/* implicit */int) (unsigned char)248)) : ((-(((/* implicit */int) arr_8 [i_2]))))));
    }
}
