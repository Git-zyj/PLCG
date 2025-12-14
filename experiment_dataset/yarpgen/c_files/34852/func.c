/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34852
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~(-1900226482107654459LL)));
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (~(-1LL)))) - (27ULL)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_0)) == (((/* implicit */int) (signed char)-92)))), (var_11)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            {
                arr_12 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
                arr_13 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) (short)-10501)), (676602441)));
            }
        } 
    } 
}
