/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213006
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */unsigned long long int) var_8)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) 4121466341624452923LL)), (var_0))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2] [7LL] [7LL] [17ULL]);
                    var_11 = ((/* implicit */unsigned short) max((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) 0LL))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)252)), (3335025731646881092LL)))), ((+((~(arr_8 [i_0])))))));
                        arr_13 [i_0] [i_0] [i_2] [i_3] = arr_5 [i_3] [i_2] [i_1];
                        var_12 = ((/* implicit */unsigned char) var_4);
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_0), (max(((-(1917823689634567730ULL))), (((unsigned long long int) var_4))))));
}
