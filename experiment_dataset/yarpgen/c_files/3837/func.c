/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3837
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
    for (int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_6))));
        var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_11))), (((/* implicit */unsigned int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            {
                var_14 *= ((unsigned int) ((unsigned int) arr_4 [i_2]));
                var_15 |= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1])), (var_3)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((signed char) var_5)))));
                arr_14 [i_3] = var_2;
                arr_15 [i_3] [8] [10U] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_11 [(_Bool)1])))))))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_1)) ? (arr_12 [i_4] [i_4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4])))))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3] [i_3])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(signed char)6]))))))))))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3])) ? ((-(((((/* implicit */_Bool) arr_1 [(unsigned short)4] [i_4])) ? (4503599618981888LL) : (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
}
