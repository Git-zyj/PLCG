/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29081
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
    var_10 = ((/* implicit */_Bool) (-(var_5)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [i_0] [i_2]), ((_Bool)1)))) & (max((arr_3 [i_0]), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [4])) ? (var_5) : (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)1))))))) : (1525815093));
                    var_12 = ((/* implicit */_Bool) arr_3 [i_0]);
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((int) (_Bool)1))));
                    arr_8 [(_Bool)1] [i_1] [18] &= ((/* implicit */int) ((max((((/* implicit */int) (_Bool)1)), (((int) 1525815093)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (arr_3 [(_Bool)1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_1])) : (-175722832))) : ((-(var_4)))))));
                    var_13 -= ((max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (93558899)))), (-2147483641))) - (((/* implicit */int) var_8)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                arr_14 [i_3] [i_4] = ((/* implicit */_Bool) ((max((min((var_9), (2147483640))), (arr_13 [i_3 - 1] [i_4 - 1] [i_3 - 1]))) * (((/* implicit */int) var_3))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (-1480487850)))) ? (var_0) : ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_7))))) : (171826619))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (-804149575))) : (min((arr_6 [20] [0] [i_5]), (2147483647)))))));
        arr_19 [i_5] = ((/* implicit */_Bool) arr_16 [i_5]);
    }
}
