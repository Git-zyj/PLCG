/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223674
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
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] |= ((/* implicit */_Bool) 11147875090245569627ULL);
                var_10 = ((/* implicit */signed char) min((var_10), (max((var_2), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_1), (var_1)))))))))));
            }
        } 
    } 
    var_11 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (731281662) : (var_8)))), (((var_5) ^ (var_5)))))) ? ((+(max((var_5), (((/* implicit */long long int) var_0)))))) : (min((((/* implicit */long long int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (var_3)))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_12 |= min((((/* implicit */unsigned long long int) max((arr_1 [i_2]), (((/* implicit */long long int) ((unsigned char) var_6)))))), (max((((11147875090245569627ULL) & (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) arr_6 [i_2])))));
        var_13 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_2] [10ULL])), (arr_2 [i_2])))) : (((/* implicit */int) var_9))))), (((min((((/* implicit */long long int) arr_6 [i_2])), (-8799427415562261649LL))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_2] [i_2])), (arr_2 [i_2])))))))));
        var_14 = ((((((/* implicit */_Bool) ((6802382119972168829ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) (~(var_4)))))) ? (((/* implicit */int) min((var_6), ((!(((/* implicit */_Bool) arr_1 [i_2]))))))) : (var_4));
        var_15 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_6 [i_2])) <= (((/* implicit */int) arr_6 [i_2]))))));
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [(_Bool)1]), (((/* implicit */signed char) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [5LL]))) == (arr_1 [i_2]))))) : (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((signed char) arr_6 [i_2]))));
    }
}
