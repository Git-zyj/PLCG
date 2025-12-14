/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221110
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) -1511379597))) ? (max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_4 [i_1])))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])))));
                var_18 = ((/* implicit */int) (+(max((17896390951419415326ULL), (((/* implicit */unsigned long long int) -1002634384))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_4 [i_2]))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_2] [i_3] [i_4])), (arr_3 [i_3] [i_3] [i_2]))))));
                    var_21 = ((/* implicit */int) ((unsigned char) (short)21129));
                }
            } 
        } 
    } 
}
