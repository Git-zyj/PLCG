/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247150
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)2420)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)56473)) : (((/* implicit */int) var_2))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2660500107U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63115)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_10 [i_3] [i_3 + 3] [i_3] [i_3] [i_3]))))));
                            arr_12 [i_0] = ((/* implicit */unsigned char) (unsigned short)63115);
                            arr_13 [i_0] [i_1] [3LL] [i_3] = ((((((/* implicit */_Bool) (signed char)28)) ? (arr_10 [i_3 - 1] [i_3 + 2] [i_3] [i_3 - 2] [9ULL]) : (var_1))) < (max((arr_10 [i_3] [i_3 + 2] [i_3] [i_3 - 2] [i_0]), (arr_10 [i_3] [i_3 + 2] [i_3 - 2] [i_3 - 2] [i_3]))));
                        }
                    } 
                } 
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [(signed char)1] [i_1] [i_0] [i_1] [i_1])) ? (((((/* implicit */int) (unsigned short)0)) / (arr_10 [i_1] [6ULL] [i_1] [i_1] [i_1]))) : (((/* implicit */int) (!((_Bool)0))))));
            }
        } 
    } 
}
