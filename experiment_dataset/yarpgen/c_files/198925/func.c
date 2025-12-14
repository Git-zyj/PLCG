/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198925
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0]))));
                var_13 = ((/* implicit */short) var_7);
            }
            for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
            {
                var_14 = ((/* implicit */int) var_8);
                arr_13 [i_0] [(_Bool)1] [i_0] [i_3] = ((/* implicit */long long int) var_5);
            }
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
            var_16 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_6))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (arr_17 [i_0] [i_4]) : (((/* implicit */int) arr_14 [i_0]))));
            arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_4]) : (arr_0 [i_0] [8ULL])));
        }
        arr_20 [i_0] [i_0] = var_1;
        arr_21 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((~(var_0))) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
        arr_22 [i_0] [i_0] = ((/* implicit */long long int) var_7);
    }
    for (int i_5 = 3; i_5 < 15; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_5])))))));
        var_18 = ((/* implicit */long long int) arr_24 [i_5 + 1]);
    }
    var_19 = ((/* implicit */unsigned int) var_4);
    var_20 = ((/* implicit */_Bool) var_3);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) min((((7018609857088349180LL) >= (((/* implicit */long long int) 1040464262)))), ((!(((/* implicit */_Bool) var_9)))))))));
}
