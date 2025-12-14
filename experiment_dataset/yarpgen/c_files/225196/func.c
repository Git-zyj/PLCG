/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225196
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
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))) <= (min((((((/* implicit */_Bool) var_0)) ? (var_4) : (2031616U))), (((((/* implicit */_Bool) 3244359540U)) ? (4292935679U) : (((/* implicit */unsigned int) arr_3 [17ULL] [i_1]))))))));
                var_14 &= ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (1021531389842050141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((arr_3 [i_0] [i_1]) >= (((/* implicit */int) arr_1 [i_1]))))) ^ ((~(((/* implicit */int) arr_1 [i_0])))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned char) (signed char)125);
                            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_2])), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
