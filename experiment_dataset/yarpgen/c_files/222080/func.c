/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222080
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_1 + 3] = ((/* implicit */unsigned short) var_17);
                arr_5 [i_0] [i_1] |= ((/* implicit */long long int) var_5);
                var_20 = ((/* implicit */signed char) var_10);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0 + 2])) ? (((int) var_14)) : (((((/* implicit */_Bool) (short)8471)) ? (((/* implicit */int) (signed char)127)) : (2147483647)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_13 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) arr_3 [i_2]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_2])))) : (((/* implicit */int) max((arr_3 [i_2]), (arr_3 [i_2]))))));
                var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((67108856U), (((/* implicit */unsigned int) arr_11 [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_14)))) : (max((((/* implicit */unsigned long long int) (signed char)-76)), (arr_12 [i_3] [i_3] [i_3])))));
                arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_2]) << (((arr_7 [i_3]) - (10167219224593756567ULL)))))) || (((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_2]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_7);
}
