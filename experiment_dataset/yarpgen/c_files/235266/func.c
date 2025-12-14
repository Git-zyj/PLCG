/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235266
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
    var_12 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)34109))));
        arr_2 [(signed char)2] = ((/* implicit */int) (+(((unsigned int) arr_0 [i_0 + 1]))));
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511))) : (arr_1 [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11))))) > (min((4294967269U), (((/* implicit */unsigned int) min(((unsigned short)65017), ((unsigned short)511))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [(short)4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 0U)) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_15 = ((/* implicit */long long int) max((var_15), ((+(min((((/* implicit */long long int) arr_5 [i_1])), (arr_3 [i_1] [(_Bool)1])))))));
        var_16 = ((/* implicit */unsigned short) var_1);
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_9 [i_2]))))))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4397778075648LL)))))));
    }
    for (short i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) min(((_Bool)1), ((_Bool)1)))), (arr_10 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U)))));
        arr_14 [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) (~(min((((/* implicit */unsigned int) (unsigned short)511)), (arr_7 [i_3]))))));
    }
}
