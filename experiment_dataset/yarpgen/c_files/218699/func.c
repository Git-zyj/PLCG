/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218699
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                var_19 += ((((arr_1 [i_1] [i_0 - 1]) ? (((/* implicit */long long int) var_17)) : (-7579748326956969813LL))) | (min((((/* implicit */long long int) (~(var_2)))), (((arr_2 [i_0 - 1] [i_0] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [(_Bool)1]))) : (var_11))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((((((/* implicit */_Bool) arr_7 [i_0 + 1])) ? (arr_7 [i_0 + 1]) : (651437908))) >> (((arr_8 [i_3] [i_1 - 1]) + (989566749))));
                            var_21 |= ((/* implicit */_Bool) ((arr_2 [i_0] [i_0 + 1] [i_0 - 1]) ? (arr_8 [i_1 - 2] [i_3]) : (((/* implicit */int) (!(arr_2 [i_3] [i_2] [i_0 - 1]))))));
                        }
                    } 
                } 
                var_22 &= ((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) -1655818185)))))))) ? (((long long int) arr_4 [i_1] [i_1] [7])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0 + 2] [i_1 - 2] [i_1 - 2]), (max((arr_1 [i_1] [i_1]), (arr_1 [i_1 + 2] [i_0])))))))));
            }
        } 
    } 
    var_23 = var_8;
    var_24 = ((/* implicit */long long int) min((var_24), (-2286602463154963495LL)));
    var_25 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(var_5)))) % (var_0)));
}
