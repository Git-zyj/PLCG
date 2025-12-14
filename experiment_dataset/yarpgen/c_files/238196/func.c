/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238196
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
    var_11 = ((/* implicit */unsigned int) ((((var_2) + (2147483647))) >> (((var_0) + (1947203570397906124LL)))));
    var_12 = ((/* implicit */unsigned char) (unsigned short)65535);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_7);
        var_13 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)1))), (((/* implicit */unsigned short) min(((signed char)0), (((/* implicit */signed char) arr_0 [i_0]))))))))));
        var_14 = ((/* implicit */unsigned long long int) var_1);
    }
    for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((1293007698U) >> (((3001959587U) - (3001959586U)))))) & (((-4754824192138735005LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */int) ((signed char) (~(var_7))))) : (((/* implicit */int) min(((unsigned short)0), ((unsigned short)42737))))));
        var_15 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_1]))) ? (((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1])))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned char) var_9)), (arr_1 [i_1 + 1]))), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-26298)) <= (((/* implicit */int) (unsigned char)127)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((4754824192138735005LL), (((/* implicit */long long int) arr_6 [13U]))))) ? (((int) (unsigned short)65523)) : (((((/* implicit */int) arr_5 [i_1 - 2])) / (((/* implicit */int) var_1)))))))));
    }
    var_17 -= ((/* implicit */unsigned char) var_7);
    var_18 += ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (263831736)));
}
