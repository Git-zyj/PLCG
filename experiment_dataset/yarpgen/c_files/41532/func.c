/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41532
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
    var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-21475))))) : (var_12))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_12))) || (((/* implicit */_Bool) var_1))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13438)) ? (arr_3 [i_0] [3LL]) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4257554961210323238ULL) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned long long int) (~(var_15)))) : (var_12));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))) ? (((arr_2 [i_0] [i_0 + 1]) + (arr_2 [i_0] [i_0 - 2]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))))))));
                var_20 = ((/* implicit */int) ((var_12) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 859368226U)) ? (((/* implicit */int) ((16777215ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))))) : (1565515129))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_2 [i_0] [i_1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */short) arr_2 [i_1] [i_1]);
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)206)) ? (2058587141) : (((/* implicit */int) (short)1623))))) ? (((((/* implicit */_Bool) arr_0 [(short)15] [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_1] [i_0 + 1])) : (var_16))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_5 [i_1])))));
                    arr_8 [i_1] [i_0] [4U] [i_2] = ((/* implicit */unsigned long long int) var_7);
                }
            }
        } 
    } 
}
