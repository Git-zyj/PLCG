/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21640
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
    var_10 = ((((/* implicit */_Bool) (-(((var_9) & (var_9)))))) ? (-2837708684054982994LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) var_8))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1639))) - (var_2)))));
        var_11 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) (-(((long long int) arr_1 [i_0]))))) : (((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) -2837708684054983015LL))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)11), (var_3))))) > (var_1))) ? (-2837708684054983035LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) (unsigned short)65534)))))))));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((arr_5 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))))))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) min((var_13), ((+(((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-43)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_4), (var_4))))) : (min((arr_8 [i_2]), (((/* implicit */long long int) arr_5 [i_2]))))))))));
        arr_9 [16U] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((int) var_9))) != (arr_8 [i_2])));
    }
    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) (-(var_8))))), (((unsigned long long int) min((0U), (((/* implicit */unsigned int) var_3)))))));
}
