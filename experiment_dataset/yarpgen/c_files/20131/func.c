/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20131
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)32748)))) <= (((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((2147483647) ^ (((/* implicit */int) (short)-32748))))) & (max((((/* implicit */long long int) (signed char)16)), (var_2)))))));
        var_12 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_1)) - (((/* implicit */int) var_4)))), ((-(max((((/* implicit */int) (signed char)-17)), (1614370164)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_6))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(17098643521095051181ULL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((993613770) ^ (((/* implicit */int) (signed char)111))))) > (((var_11) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) >= (max((0ULL), (((/* implicit */unsigned long long int) var_6)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((signed char)30), ((signed char)33))))))), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32741))))) | (((((/* implicit */_Bool) -993613770)) ? (11593638852887427885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
