/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27857
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_0]))))), (min((3345202155U), (3345202155U)))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) <= (arr_2 [(short)13] [i_0 - 3]))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned short) (signed char)25))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_16)) + (63)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_7)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            {
                arr_15 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_3]))) % (6493746049925388221ULL))))));
                arr_16 [i_3] [i_2] = ((/* implicit */short) arr_12 [(short)14] [i_2] [i_3]);
                arr_17 [i_2] = ((/* implicit */signed char) min((arr_4 [i_2] [i_2]), (((/* implicit */unsigned char) arr_3 [14U] [14U]))));
                arr_18 [i_3] = ((/* implicit */unsigned long long int) min((1918665371), (((/* implicit */int) (signed char)-39))));
                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [0U] [0U]))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_3);
    var_22 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (var_12)))), (((var_11) | (var_11))))), (((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-32), (var_16)))))))));
}
