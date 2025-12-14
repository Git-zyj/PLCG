/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52323
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? (((arr_0 [i_0 - 1]) * (((/* implicit */unsigned int) var_6)))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
                arr_6 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32913)) ? (((/* implicit */int) (unsigned short)32607)) : (((/* implicit */int) (short)5201))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_2 [i_0 + 1])) == (arr_3 [i_0]))))) | (arr_0 [i_0 + 1])))));
                var_11 = ((/* implicit */short) arr_2 [i_0]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_12 = ((((/* implicit */_Bool) (short)19268)) ? (((((((/* implicit */_Bool) var_5)) ? (-1925657566) : (arr_2 [i_3 + 1]))) * (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_3))))))) : (min((((arr_2 [i_2]) / (var_6))), (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_1 [i_0]))))))));
                            arr_11 [i_3] [18] [i_2] [i_1] [i_0] = ((/* implicit */short) -9002055492229372852LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((/* implicit */long long int) var_6)) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4)))))), (var_5)));
}
