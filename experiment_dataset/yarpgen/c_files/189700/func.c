/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189700
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((/* implicit */unsigned short) var_6);
    var_16 -= ((((((/* implicit */_Bool) var_11)) ? (((var_2) | (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_9) : (var_9)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 9183226590016614634LL)))));
    var_17 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_12)), (var_0))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)81)), (arr_1 [(_Bool)0]))))))) ? (((arr_5 [i_0] [7LL] [i_0]) | ((-(arr_6 [3U] [3U]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_5 [i_2] [i_1] [6]))))))));
                    var_19 = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) arr_7 [i_2] [i_2 + 2] [(_Bool)0] [i_0])) : (arr_1 [i_2 + 2])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_6 [i_0] [9LL])) && (((/* implicit */_Bool) arr_3 [i_0])))) ? (((((var_3) + (2147483647))) << (((((arr_8 [i_0] [i_1] [i_2]) + (1397305751))) - (27))))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (arr_8 [(unsigned short)1] [i_1] [i_2])))))));
                    var_20 = ((/* implicit */_Bool) arr_6 [i_0] [i_1]);
                }
                var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15277))) <= (arr_1 [i_0]))) ? (arr_5 [i_0] [i_1] [(unsigned char)9]) : (((/* implicit */unsigned long long int) ((long long int) var_1))))))));
            }
        } 
    } 
}
