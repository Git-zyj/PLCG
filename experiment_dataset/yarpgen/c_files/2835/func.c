/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2835
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5705452123632079748LL))))))))) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_8)) : (-8570059771816247363LL)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -295015777)) : (-8744037597277842364LL))) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_9))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) (~(((min((var_5), (((/* implicit */long long int) 647526575)))) + ((~(arr_1 [i_0])))))));
                var_17 += ((/* implicit */int) arr_2 [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) var_3);
                            var_19 = ((((/* implicit */_Bool) 3034236665002159707LL)) ? (-850356129263329824LL) : (-6140134233657618649LL));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) 282899219802374955LL)) ? (arr_4 [i_1 + 3] [i_0 + 1] [i_0 + 1]) : (arr_7 [i_1 + 3] [i_1 - 3] [i_0] [i_0 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 850356129263329823LL)) ? (var_9) : (850356129263329824LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_1 + 3])) < (850356129263329823LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)10] [i_1]))))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((-850356129263329823LL) + (9223372036854775807LL))) >> (((arr_6 [i_0]) + (810707008)))))) ? (((-3805651407906785312LL) | (((/* implicit */long long int) 16)))) : (((/* implicit */long long int) ((int) arr_6 [i_0 + 1])))));
            }
        } 
    } 
    var_22 += (-(var_8));
}
