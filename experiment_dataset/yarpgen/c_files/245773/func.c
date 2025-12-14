/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245773
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
    var_10 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)70)))) & (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (min((arr_6 [12] [i_1] [i_1] [5LL]), (var_9)))));
                    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            {
                arr_16 [i_3] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) var_4);
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) ((arr_12 [i_5] [i_3]) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                    var_14 = arr_12 [6ULL] [i_5];
                }
            }
        } 
    } 
}
