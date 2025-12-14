/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207611
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((1118020109), (1118020109)))) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1] [i_0])) : ((-(((/* implicit */int) (signed char)108)))))) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_9 [17ULL] [i_1] [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -7232262802543928919LL)) ? (7232262802543928919LL) : (-7232262802543928919LL)))));
                            arr_10 [i_0] [i_1 + 1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(var_7)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 |= ((/* implicit */int) min((var_2), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)41767), (var_5)))) || (((/* implicit */_Bool) ((unsigned char) (signed char)-108))))))));
}
