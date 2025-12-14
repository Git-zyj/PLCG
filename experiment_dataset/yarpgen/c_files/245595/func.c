/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245595
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
    var_11 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (min((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) max((3285009053U), (var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) 3567912121U)) / (var_2)))) ? (max((((/* implicit */unsigned long long int) var_9)), (8643579744726009212ULL))) : (((/* implicit */unsigned long long int) 1009958234U)))), (min((((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (unsigned short)65509))))), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 3884694830U)) : (arr_0 [i_1]))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((4LL) * (((/* implicit */long long int) arr_1 [i_2] [i_2]))));
        arr_7 [3LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_0 [i_2])))) ? (arr_5 [i_2]) : (((/* implicit */long long int) 4294967280U)));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) max((max((var_7), (var_7))), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (short)-20526)))))))) >> (((((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) & (((/* implicit */unsigned int) ((var_9) / (var_4)))))))))));
}
