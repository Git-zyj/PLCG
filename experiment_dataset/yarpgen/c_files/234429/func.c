/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234429
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_2]))))) * (((/* implicit */int) (signed char)-46))))) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)-46))));
                    var_19 = ((/* implicit */unsigned int) arr_6 [i_2 + 1] [i_2] [i_2 - 1] [i_1]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_2 [i_3]))))) ? (((arr_3 [i_3] [i_3]) ? (((/* implicit */int) arr_2 [(unsigned short)5])) : (((/* implicit */int) arr_5 [i_3] [i_3])))) : (((/* implicit */int) arr_14 [i_5] [i_4] [i_5])))) : (((/* implicit */int) ((unsigned char) (+(2346540073U)))))));
                    arr_17 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)25))));
                    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [(short)6])) ? (((/* implicit */int) arr_13 [i_5] [i_3] [i_4] [i_3])) : (((/* implicit */int) arr_3 [i_4] [i_5]))))))))));
                }
            } 
        } 
    } 
}
