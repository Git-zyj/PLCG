/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44632
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((((((/* implicit */int) ((signed char) (signed char)-86))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) > (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_7))))));
                arr_4 [i_1] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+(var_5))), (((/* implicit */long long int) ((signed char) var_7)))))) ? (((/* implicit */long long int) (((+(var_1))) << (((var_3) - (8153454739277291652LL)))))) : (var_10)));
                var_13 = ((/* implicit */unsigned short) (((-((+(arr_2 [i_0] [i_1] [(signed char)2]))))) + (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                var_14 -= ((/* implicit */signed char) (short)-27952);
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) 17951126467441750398ULL);
    var_16 = ((/* implicit */_Bool) 9223372036854775807LL);
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)80))));
                arr_14 [i_3] = (-(max((var_10), (((/* implicit */long long int) arr_5 [i_2] [i_3])))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((int) arr_9 [i_2] [i_2] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44591)) & (((/* implicit */int) (short)16720))))) : (((arr_6 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) 758632676))));
            }
        } 
    } 
}
