/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194572
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_15 = ((/* implicit */short) ((int) arr_3 [i_0 + 1] [i_0 + 1]));
            arr_5 [i_0] [i_1] [i_1] = (+(var_4));
            var_16 = ((/* implicit */int) var_6);
        }
        for (int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_6 [i_2 + 2]))));
            var_18 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2] [i_2 - 1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
        }
        var_19 += ((/* implicit */unsigned short) 1652346500U);
    }
    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        arr_12 [i_3 + 3] [i_3 - 2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 315915546)) ? (arr_9 [i_3 + 3]) : (arr_9 [i_3 + 1])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) -2147483636)) ? (arr_11 [i_3 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */short) 15080148022647818420ULL);
        var_20 = ((/* implicit */short) ((((arr_11 [i_3 + 2]) != (((/* implicit */unsigned long long int) arr_8 [i_3 + 1] [i_3])))) ? (max((((/* implicit */unsigned int) var_7)), (arr_9 [i_3 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1])))));
        arr_14 [i_3] = max(((~(((long long int) var_5)))), (((long long int) arr_11 [i_3])));
    }
    var_21 = ((/* implicit */unsigned long long int) (-(var_3)));
}
