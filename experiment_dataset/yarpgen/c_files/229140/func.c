/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229140
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (signed char)83))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)14670)))) : (((((/* implicit */int) (unsigned short)50871)) << (((-3751075274392661830LL) + (3751075274392661831LL)))))));
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (unsigned short)1267))))) && (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned char)4]))) > (-622411064793352080LL)))))))))));
                var_12 = ((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_0 - 1] [(signed char)19]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                arr_11 [i_3] [i_3] [i_2] = ((/* implicit */int) arr_4 [i_2] [i_3]);
                arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((arr_10 [i_2] [i_2]) > (((((((/* implicit */int) (signed char)-75)) + (2147483647))) >> (((((/* implicit */int) (signed char)-21)) + (30)))))));
                arr_13 [i_2] [(signed char)0] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned char)47)) << (((((/* implicit */int) (signed char)-113)) + (127)))))));
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50861))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))) : (arr_1 [i_2] [i_2])))))));
            }
        } 
    } 
}
