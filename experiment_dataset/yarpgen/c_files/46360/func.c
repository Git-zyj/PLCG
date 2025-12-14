/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46360
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned long long int) 270670074))) && (((((/* implicit */int) arr_4 [i_2] [i_1] [i_2])) != (((/* implicit */int) arr_4 [i_2] [i_1] [i_2])))));
                    var_11 = ((/* implicit */short) (~((+(((/* implicit */int) arr_4 [i_2] [i_1] [i_2]))))));
                    var_12 = ((/* implicit */unsigned long long int) ((unsigned char) (~((+(((/* implicit */int) arr_4 [i_2] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_10 [i_4]))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((270670074) / (-270670066))))));
            }
        } 
    } 
    var_15 = var_7;
}
