/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20862
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) 0U);
        var_18 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned int) var_0)) & (4294967277U))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)15))))))) ? ((~(((long long int) 9223372036854775807LL)))) : (((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_15)), (arr_4 [i_1]))))))));
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 57463965)) && (((/* implicit */_Bool) (unsigned char)240)))) ? (min((((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (57463959)))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) 57463966)) : (2758829797U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 3; i_2 < 8; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 4; i_4 < 7; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_2] [(unsigned char)0] = ((/* implicit */int) var_9);
                    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned char)5), ((unsigned char)253))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned long long int) (-(-57463967)))) : (min((var_16), (((/* implicit */unsigned long long int) (unsigned char)255)))))));
    var_23 = ((/* implicit */long long int) var_11);
    var_24 = ((/* implicit */long long int) var_11);
}
