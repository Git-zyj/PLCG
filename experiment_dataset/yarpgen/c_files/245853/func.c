/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245853
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
    var_17 -= ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(arr_6 [i_0] [i_0] [(signed char)2]))))))));
                    var_19 = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)12]);
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
                }
                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0] [i_0] [8]) : ((+(((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0] [i_0] [12U]) : (((/* implicit */int) arr_5 [i_0] [0LL]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) var_2))))))));
                    arr_14 [6U] [i_4] [i_4 - 2] = ((/* implicit */_Bool) ((unsigned int) (~((~(arr_2 [i_5 - 1]))))));
                }
            } 
        } 
    } 
}
