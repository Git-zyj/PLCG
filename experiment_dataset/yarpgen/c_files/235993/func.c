/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235993
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((var_8) << (((int) arr_1 [i_0] [i_1])))) + (((((/* implicit */unsigned int) 2147483647)) ^ (4294967286U)))));
                var_15 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                var_16 = ((/* implicit */unsigned short) (!((_Bool)1)));
            }
        } 
    } 
    var_17 = ((((_Bool) (~(var_11)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 = ((/* implicit */unsigned int) ((long long int) (~(var_2))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) arr_3 [i_3 - 1] [i_4 - 1]);
                    arr_10 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [3U]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_4 [i_2] [5U])))))) && (((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_2 [16U] [i_2])), (arr_8 [i_2] [(unsigned short)3] [i_4]))), (((/* implicit */long long int) min((4294967286U), (((/* implicit */unsigned int) arr_1 [i_2 - 1] [i_3 - 1]))))))))));
                }
            } 
        } 
    } 
}
