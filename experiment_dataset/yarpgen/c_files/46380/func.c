/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46380
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
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (signed char)-13)), (-1276811218)))))) ? (var_4) : (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (var_3) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_1 [i_0 - 1]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [15ULL])) < (arr_0 [i_1 + 1]))))) ^ (-8045874667496796311LL)));
        arr_6 [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
        var_20 = ((/* implicit */long long int) ((arr_5 [i_1 - 3]) != (arr_5 [i_1 - 2])));
    }
    for (unsigned short i_2 = 4; i_2 < 17; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */signed char) (((~((~(arr_7 [i_2]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) arr_5 [i_2])), (((/* implicit */unsigned short) arr_1 [i_2 - 3]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 3; i_3 < 16; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (unsigned short)16591);
            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_2]))));
        }
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 8045874667496796310LL)), (min((((((/* implicit */_Bool) (unsigned short)46911)) ? (arr_5 [(unsigned char)6]) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))));
    }
}
