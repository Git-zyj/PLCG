/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33557
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
    var_19 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [(unsigned short)0] &= ((/* implicit */unsigned char) var_14);
        arr_4 [(short)2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_2 [(short)10])) ? (arr_2 [(signed char)12]) : (arr_2 [(_Bool)0]))), (arr_2 [(_Bool)1])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1 - 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21756))) ^ (16019504277018506030ULL)))));
        arr_9 [i_1 - 1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1 - 1])) & (max((2020398846), (((/* implicit */int) arr_7 [(signed char)13]))))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) ? (arr_5 [i_1 - 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1])))));
        arr_11 [13ULL] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_7 [i_1 - 1])))) <= (((((/* implicit */_Bool) ((((/* implicit */int) (short)-831)) & (((/* implicit */int) arr_7 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 - 1])) : (((unsigned long long int) (short)801))))));
    }
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_0))))), ((~(((/* implicit */int) var_3))))))), (min((((/* implicit */long long int) ((-1470961401) > (((/* implicit */int) (short)-841))))), (min((((/* implicit */long long int) var_7)), (274877905920LL)))))));
}
