/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206774
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
    var_15 = ((/* implicit */_Bool) (-(min((((/* implicit */int) var_8)), (((((/* implicit */int) var_3)) << (((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_4)) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_8 [4] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((var_10) < (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_8)))))))), (max((var_1), (var_1)))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((var_14), (var_14)))) <= (((/* implicit */int) var_8)))))));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) >= (((/* implicit */int) var_8)))))))))))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (var_7)));
        }
    }
}
