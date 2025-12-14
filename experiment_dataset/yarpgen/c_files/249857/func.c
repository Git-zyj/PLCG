/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249857
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = (unsigned short)45576;
                    var_19 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)43739))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) * ((-(((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) & (((/* implicit */int) (unsigned short)7980))))))));
                    arr_8 [(unsigned short)9] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [(unsigned short)0] [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_2 + 1] [(unsigned short)4] [i_2 - 2])) : (((/* implicit */int) (unsigned short)57555))))) ? (((/* implicit */int) max((arr_7 [i_2 + 1] [(unsigned short)10] [i_2 - 2] [i_2 - 4]), (arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) : (((/* implicit */int) min(((unsigned short)47810), ((unsigned short)47522))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min(((unsigned short)57556), (var_7))), ((unsigned short)62213)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20331))))), (var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                var_22 = arr_10 [i_4];
                var_23 = ((/* implicit */unsigned short) min((var_23), (var_3)));
            }
        } 
    } 
}
