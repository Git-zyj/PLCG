/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196871
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [20] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1] [i_2 - 3] [i_1])) || (((/* implicit */_Bool) arr_2 [9U] [i_2])))) ? (arr_2 [i_0] [i_1]) : (((((/* implicit */long long int) arr_1 [i_2])) + (arr_2 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (+(arr_7 [(short)5] [i_1] [i_2] [i_2])))) <= (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)3])) ? (var_8) : (((/* implicit */long long int) arr_4 [i_0] [8] [i_2 - 4])))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_2] [i_2 - 2] [20U] [i_0]))))) ? (((((/* implicit */_Bool) (signed char)-73)) ? (4488453498279682604LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) : (((arr_2 [i_2 - 4] [(unsigned char)20]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))))))));
                    arr_9 [i_2] [i_1 - 1] [i_2] &= ((/* implicit */int) ((((min((3917059859U), (0U))) <= (((/* implicit */unsigned int) arr_1 [i_1 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2]))) : (var_3)))) ? (1760701269410230569LL) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (arr_0 [i_0])))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [17U] [i_0])) ? ((-(max((((/* implicit */int) (unsigned char)106)), (-1520137776))))) : ((+(((((/* implicit */_Bool) (unsigned short)49652)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)237))))))));
                    arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)18137)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)51457)), (-4488453498279682604LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) var_13)) ? (var_14) : (var_7)))) <= (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 13; i_3 += 2) 
    {
        for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
        {
            {
                arr_18 [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((arr_7 [i_3] [i_3] [(unsigned char)5] [i_3]) == (((/* implicit */int) arr_6 [14] [i_4 - 1] [i_3] [i_4 + 2])))) ? (((((-706850438348550974LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (185))))) : (((/* implicit */long long int) arr_1 [i_4 - 2]))))), (((((/* implicit */unsigned long long int) max((arr_1 [i_3]), (((/* implicit */int) arr_12 [i_3]))))) + (min((var_7), (((/* implicit */unsigned long long int) (signed char)127))))))));
                var_18 = ((/* implicit */int) arr_3 [i_4] [i_3] [i_4]);
            }
        } 
    } 
}
