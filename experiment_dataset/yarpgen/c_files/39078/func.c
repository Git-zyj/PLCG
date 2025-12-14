/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39078
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
    var_11 = ((/* implicit */unsigned short) (+(min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_6))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_12 -= ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [(short)10])))))));
        var_14 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_2 [(_Bool)1]))))));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((_Bool) (~(((((/* implicit */int) var_4)) >> (((/* implicit */int) var_0)))))));
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_3] [i_2]))))), (((arr_11 [i_1] [i_1] [i_2] [i_3]) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))));
                    arr_13 [i_1] [i_1] = ((/* implicit */long long int) (!(((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))));
                    arr_14 [i_1] [(unsigned char)12] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1])))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) var_3))))));
                }
            } 
        } 
        arr_15 [0U] &= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)0))))) || (arr_11 [i_1] [(_Bool)1] [i_1] [i_1])))), (min((((/* implicit */long long int) (_Bool)1)), ((+(arr_7 [1ULL] [i_1])))))));
    }
}
