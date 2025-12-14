/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29452
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
    var_10 += ((((/* implicit */_Bool) 17361143806224891685ULL)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (1987323825)))) ? (((/* implicit */int) ((signed char) (short)32767))) : (var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [7U]))) <= (max((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [i_1] [i_1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) 637077267987152160ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))));
                    var_12 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]);
                }
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((-1987323826) + (2147483647))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (129)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (arr_5 [i_0] [(_Bool)1] [i_0])))) : (arr_4 [(_Bool)1] [i_0] [i_0]))) < (((4294967294U) ^ (((/* implicit */unsigned int) var_9))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_5);
}
