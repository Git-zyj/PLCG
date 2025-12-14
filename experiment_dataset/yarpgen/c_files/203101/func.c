/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203101
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
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [(unsigned char)12] [i_0 - 3]) <= (arr_0 [i_0 + 4] [i_0 + 4]))))) * (min((((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max(((unsigned char)14), (arr_4 [i_1] [17ULL] [i_1])))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) 0U)), (arr_6 [12U]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 13502826672107460247ULL)) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)68)) << (((((/* implicit */int) arr_2 [i_1])) - (51))))))))) : (((((/* implicit */_Bool) (short)-27239)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned char) (short)14609)))))));
                }
            } 
        } 
    } 
}
