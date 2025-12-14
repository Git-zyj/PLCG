/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231392
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(signed char)0] |= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_11 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_12 = ((/* implicit */_Bool) (+(2147483647)));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            {
                arr_11 [i_2] [i_1] = min((((/* implicit */int) max((arr_10 [i_2] [i_1]), (arr_10 [i_1] [2U])))), ((~(((/* implicit */int) arr_10 [i_1] [i_2])))));
                arr_12 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_5 [i_1] [i_1]))))))), ((-(650115925)))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) var_1);
}
