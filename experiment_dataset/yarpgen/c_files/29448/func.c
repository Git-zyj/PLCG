/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29448
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (unsigned char)39);
                var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) & (9223372036854775784LL)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((-1828769002) - (((/* implicit */int) (short)32750))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (3848290697216ULL) : (3848290697216ULL))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))))), ((-(((/* implicit */int) (signed char)50))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((960877739U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                arr_13 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3] [(short)5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2]))))) : (min((arr_12 [i_2] [i_3]), (arr_12 [i_2] [i_3])))));
                arr_14 [i_2] [i_3] = ((/* implicit */long long int) (signed char)35);
            }
        } 
    } 
}
