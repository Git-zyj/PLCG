/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217292
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) 1073741824)) ^ (var_0))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))))) : (var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] [1ULL] [i_1 + 1] = ((/* implicit */short) ((int) ((arr_3 [i_1 + 1] [(_Bool)1]) ^ (arr_3 [i_1 + 1] [i_1]))));
                var_12 ^= ((/* implicit */unsigned int) ((int) ((1700544576) % (((/* implicit */int) (short)4281)))));
            }
        } 
    } 
    var_13 += ((/* implicit */unsigned long long int) var_10);
    var_14 = ((((/* implicit */_Bool) min((6572889156512608181ULL), (0ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((((int) 274341036032ULL)) + (2147483647))) >> ((((-(var_7))) + (2879185721847583288LL)))))));
    var_15 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_2)))))) ? (var_8) : (((((((/* implicit */_Bool) var_8)) ? (var_6) : (11873854917196943434ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1)))))))));
}
