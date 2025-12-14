/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244108
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) var_4);
                var_20 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) arr_0 [i_1 + 1])))), ((~(((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1]))))));
                var_21 = ((/* implicit */signed char) var_12);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) 14749205450965032388ULL);
    var_23 |= ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_24 |= ((((/* implicit */int) min((arr_6 [i_3] [i_2 + 3]), (arr_6 [i_3] [i_2 + 3])))) < (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_6 [i_2 + 1] [i_2]))))));
                arr_9 [i_2] = (+(2956437497245500970ULL));
            }
        } 
    } 
}
