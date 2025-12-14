/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194229
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
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */short) (((-(arr_4 [i_0] [i_0]))) < (((/* implicit */long long int) (+((+(((/* implicit */int) arr_2 [i_0])))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max(((((+(var_9))) / ((-(arr_4 [i_0] [(unsigned char)11]))))), (((/* implicit */long long int) arr_1 [i_1]))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) ((unsigned short) 6380041751599445285ULL)))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_7))));
                var_16 *= ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_0])))) - (((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                var_17 -= ((/* implicit */unsigned char) min(((-(((((/* implicit */int) var_10)) + (arr_1 [(signed char)1]))))), (((/* implicit */int) ((arr_1 [(_Bool)1]) > (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
}
