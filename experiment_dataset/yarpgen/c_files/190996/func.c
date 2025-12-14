/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190996
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
    var_14 = ((/* implicit */unsigned int) min(((~(((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) ((unsigned char) var_6)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0])))) / (arr_4 [i_0] [i_1])))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [(signed char)0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16381021166350244310ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_10)))))) ? ((+(arr_2 [i_0] [i_1] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) var_4)))))));
                arr_8 [5U] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_1])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                var_15 = ((/* implicit */signed char) ((-8000972130269186245LL) % (8000972130269186260LL)));
                var_16 = ((/* implicit */signed char) max((var_16), ((signed char)24)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) min((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (arr_11 [i_3] [i_3]))))))), (-8000972130269186245LL)));
                    arr_17 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */short) ((long long int) (~(((/* implicit */int) arr_14 [i_2] [i_3])))));
                }
            } 
        } 
    } 
}
