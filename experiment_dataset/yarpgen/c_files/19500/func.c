/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19500
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_10 += ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_1])), (var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_3])))));
                        var_11 -= ((/* implicit */unsigned char) min((var_0), (((/* implicit */int) (((~(arr_6 [i_0] [i_1] [i_2] [i_3]))) != (((/* implicit */unsigned long long int) arr_1 [i_1])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] [(signed char)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)236))));
                        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
                    }
                    var_13 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [(signed char)5] [i_2] [i_2 - 3]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) ((unsigned char) var_5)))), ((~(((((/* implicit */int) var_7)) - (var_5)))))));
}
