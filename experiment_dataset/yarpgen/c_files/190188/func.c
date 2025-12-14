/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190188
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192))) >= (7087500690928234182ULL)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_2 [i_0] |= ((/* implicit */unsigned int) ((unsigned long long int) ((arr_0 [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)77)), (6633564496944713162ULL)));
        var_22 = ((/* implicit */int) (~(4294967295U)));
        var_23 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1]) % (((/* implicit */unsigned long long int) ((long long int) 6633564496944713152ULL)))));
        var_24 -= ((/* implicit */_Bool) (-(-3125224870110492660LL)));
        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)172)), (9006649498927104LL)))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_1 + 1]) : (((/* implicit */long long int) arr_5 [i_1]))))) : (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1])), (arr_4 [i_1 - 2])))) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 2])))))));
    }
}
