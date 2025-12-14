/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38261
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
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) var_7))));
    var_13 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((int) var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_1] &= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1936715986)))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_1 - 1])))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) arr_6 [i_2 - 1] [i_0] [i_0 + 2] [i_0 + 2])))))))))));
                    var_15 += ((/* implicit */signed char) (!(((((/* implicit */int) ((signed char) (unsigned short)58120))) == (((arr_4 [i_0] [i_1] [i_2]) / (arr_4 [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
    {
        var_16 += ((int) ((long long int) min((arr_8 [i_3]), (arr_11 [i_3]))));
        arr_12 [i_3] = ((/* implicit */long long int) max(((unsigned short)58120), ((unsigned short)7411)));
        var_17 = ((/* implicit */_Bool) ((int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) * (-1427074190)))));
    }
}
