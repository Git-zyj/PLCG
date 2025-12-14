/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28643
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
    var_16 = (-((-(((((/* implicit */_Bool) (unsigned char)0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (var_4) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_14)) >> (((var_0) - (854450026345818453ULL))))), (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_14))))))))));
    var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_11)))) ? (var_0) : (((/* implicit */unsigned long long int) ((long long int) -196832074)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((var_3), (((/* implicit */signed char) (_Bool)0))))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (-4546148004574823667LL)))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) && (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_5 [20LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-8))))) : ((~(arr_0 [(unsigned short)6])))))) ? (max((3ULL), (((/* implicit */unsigned long long int) (unsigned char)252)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [1ULL])) ? (15079917900274001070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0 + 1] [i_0]), (arr_2 [i_0 + 2] [i_0])))))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = (-((-(((arr_6 [i_2] [(signed char)13] [(signed char)13]) / (arr_9 [i_2] [(signed char)7]))))));
                    var_21 = (~(arr_0 [i_0]));
                }
            } 
        } 
    }
}
