/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215884
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
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) var_9))))))), ((unsigned short)16749)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    var_16 = ((/* implicit */int) arr_5 [7ULL]);
                    var_17 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                    arr_9 [i_1] [i_1] &= ((/* implicit */_Bool) (-(min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_2 - 2]))))));
                }
                arr_10 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (signed char)-59))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)13), (((/* implicit */unsigned char) (signed char)86)))))) : (((((/* implicit */_Bool) 12845732742601682596ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20)))))));
                var_18 *= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) == (1476727888))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) / ((-(var_8)))))) : (max((((/* implicit */long long int) arr_8 [(unsigned short)0] [(unsigned short)0] [10U])), (arr_7 [i_0] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) 1293982295)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
}
