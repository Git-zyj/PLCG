/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241139
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
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)127))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [(unsigned char)3] [i_0]);
        var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) ((int) (unsigned char)236))), (var_0)));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_3 [i_1])))) <= (((/* implicit */int) var_9))));
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned short) (((((!(arr_5 [10U]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) 16U)) >= (-4785819036217961718LL)))))) % (arr_9 [i_1] [i_2] [i_2 + 1])));
            arr_11 [i_1] = ((/* implicit */unsigned short) ((arr_9 [i_2] [i_2] [i_1]) << (max((((/* implicit */long long int) (!(((/* implicit */_Bool) -252388101))))), (max((-5187343111121191523LL), (((/* implicit */long long int) -252388086))))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_13 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_6), (-252388086)))), (((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (arr_14 [i_3] [0U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_14 = ((/* implicit */unsigned int) arr_12 [i_3]);
    }
}
