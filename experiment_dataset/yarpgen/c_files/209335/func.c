/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209335
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
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) min(((+(var_9))), (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) 133169152)))))))) ? (((var_3) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (var_0)))))) : (var_3)));
    var_18 = ((/* implicit */unsigned long long int) (signed char)108);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            arr_4 [i_0 + 2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */int) arr_3 [i_0 + 1] [i_1 - 1] [i_1])) ^ (((/* implicit */int) arr_3 [i_0] [i_0 + 2] [i_1]))))));
            var_19 = ((/* implicit */short) arr_3 [i_0 + 1] [i_0] [i_1 + 2]);
            arr_5 [i_0 + 2] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1574351907))))) / (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_1 - 1])) ? (arr_2 [i_0] [i_1] [i_1 + 2]) : (arr_0 [i_0 - 1])))));
        }
        var_20 = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (2147483647) : (((arr_2 [i_0] [i_0] [i_0]) - (arr_0 [i_0 + 2]))))) + (((/* implicit */int) ((arr_2 [i_0 - 1] [i_0 + 2] [i_0 - 1]) >= (((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    for (unsigned int i_2 = 1; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((int) min((var_8), (arr_0 [i_2])))) ^ (((/* implicit */int) ((unsigned char) ((int) arr_6 [i_2 - 1] [i_2]))))));
        var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_7 [i_2]), (1574351907))))))) != (1574351907)));
    }
    var_23 = ((/* implicit */short) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((var_8) + (142320542))) - (13)))));
    var_24 = ((/* implicit */int) ((short) (((!(((/* implicit */_Bool) var_13)))) ? ((~(var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
}
