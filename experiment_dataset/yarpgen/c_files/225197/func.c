/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225197
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */long long int) (_Bool)1);
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                var_11 = ((/* implicit */long long int) arr_4 [i_1] [i_1 - 3]);
                var_12 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((var_3) ? (var_0) : (arr_0 [i_0])))) ? (arr_1 [i_0] [i_1 + 3]) : (arr_3 [i_1]))));
            }
        } 
    } 
    var_13 = var_7;
    var_14 = min((((((/* implicit */int) var_8)) <= (((/* implicit */int) var_1)))), (var_8));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_15 |= min((arr_4 [(_Bool)1] [(_Bool)1]), ((!(arr_7 [i_4]))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) arr_13 [i_4] [i_3]))), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_5] [i_5]))))), (min((var_0), (((/* implicit */long long int) arr_15 [i_2] [i_4] [i_5]))))))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((0LL) + (((arr_15 [i_2] [i_3] [14LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [(_Bool)1]))) : (var_7))))))));
                    }
                    var_18 |= ((/* implicit */_Bool) -2305843009213693952LL);
                }
            } 
        } 
    } 
}
