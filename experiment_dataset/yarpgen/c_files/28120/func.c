/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28120
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
    var_20 -= var_0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1] [i_0])) + (((/* implicit */int) var_11)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))))) ? (((/* implicit */int) max((((unsigned short) (unsigned short)61993)), (((unsigned short) arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                arr_6 [i_0] [i_0] [(unsigned short)11] = var_14;
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_14)) / (((/* implicit */int) var_13))))))) ? ((+((+(((/* implicit */int) (unsigned short)61441)))))) : (((((((/* implicit */int) (unsigned short)5677)) * (((/* implicit */int) (unsigned short)1600)))) + (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_16 [i_3] = ((unsigned short) ((((/* implicit */int) (unsigned short)59869)) <= (((/* implicit */int) (unsigned short)47553))));
                    var_22 = ((unsigned short) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_2] [i_2])) >= (((/* implicit */int) var_17))))), (arr_12 [i_4] [i_2] [i_2])));
                }
            } 
        } 
    } 
}
