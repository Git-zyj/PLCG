/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238482
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
    var_19 = ((/* implicit */unsigned char) var_15);
    var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)48183));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 3536519165077078744ULL))) && ((!(((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [0ULL]))))))))))));
                    arr_9 [i_1] = ((/* implicit */signed char) arr_3 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) 6995151770337232635ULL);
                    arr_19 [i_3] [i_5] = ((/* implicit */signed char) (+(arr_15 [(_Bool)1])));
                    arr_20 [i_4] [i_4] [i_5] [i_5] &= (unsigned short)5651;
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_12 [i_3 + 1]))))))));
                }
            } 
        } 
    } 
}
