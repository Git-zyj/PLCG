/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229086
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
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) > (((((/* implicit */_Bool) arr_2 [9])) ? (arr_1 [9LL] [8ULL]) : (arr_1 [21ULL] [21ULL]))))))));
                var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (((arr_2 [i_0 - 2]) % (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((var_12) < (((/* implicit */int) (short)-12684)))))))) >= (((((/* implicit */_Bool) -6561288530277403868LL)) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (min((((/* implicit */long long int) var_3)), (-6561288530277403868LL)))))));
    var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_2)) / (var_9)))), (((unsigned long long int) 6561288530277403868LL)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) <= (1950179697812161423ULL)))))));
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_21 = (+(((/* implicit */int) arr_7 [(signed char)14])));
        var_22 += ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) - (((((/* implicit */long long int) arr_1 [i_2] [i_2])) / (arr_6 [i_2]))))), (((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_2 [i_2])))))));
    }
    var_23 = ((/* implicit */signed char) var_5);
}
