/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46783
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) max((((/* implicit */long long int) min((arr_1 [(_Bool)1]), (arr_1 [i_0])))), (max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_8)))));
                var_15 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_7) | (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */long long int) var_6)) : (-6193210910074553279LL)))));
                arr_4 [i_0] = ((/* implicit */unsigned int) var_1);
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [(unsigned char)17]), (((/* implicit */short) var_11))))) + ((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)43094)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_16 |= ((/* implicit */short) arr_9 [i_2] [i_3]);
                var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (705164031U) : (var_6)))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_3)))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) arr_8 [i_3] [i_3])) : (562949953421311LL))) : (min((((/* implicit */long long int) -275404429)), (arr_9 [i_3] [i_3]))))) : (((/* implicit */long long int) (-(((int) (unsigned char)242)))))));
            }
        } 
    } 
}
