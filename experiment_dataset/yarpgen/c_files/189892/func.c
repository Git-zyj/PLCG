/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189892
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        var_11 = arr_10 [i_0] [i_0] [9ULL] [i_3];
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_3])) ? (arr_10 [i_2 - 1] [i_1] [i_1 - 2] [i_3]) : (arr_10 [i_2 + 1] [i_1] [i_1 - 2] [i_2 + 1]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_3])) ? (((/* implicit */int) (unsigned short)22830)) : (((/* implicit */int) arr_1 [i_2 - 1] [i_3]))))))))));
                        var_13 = min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [18ULL])), (((((/* implicit */_Bool) min((var_9), (arr_3 [i_3] [i_0])))) ? (arr_3 [(unsigned short)6] [i_0]) : (((unsigned long long int) (unsigned short)46483)))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = arr_2 [i_0] [i_2];
                    }
                    arr_12 [i_0] = ((unsigned long long int) 18446744073709551593ULL);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_8);
}
