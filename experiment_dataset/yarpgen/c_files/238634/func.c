/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238634
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_11 = -1830740680;
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [0LL])) ^ (((/* implicit */int) arr_3 [(short)0])))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                arr_10 [i_0] [(unsigned char)15] [i_2] [3ULL] = ((/* implicit */unsigned char) ((_Bool) ((var_0) ? (arr_7 [i_0] [i_0] [i_0]) : (-1830740680))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((arr_8 [i_3] [i_3] [i_2] [i_0 - 1]) >> (((var_7) - (11700919729715956928ULL))))) ^ (((arr_9 [(_Bool)1] [i_2] [i_0 + 1]) ^ (arr_1 [i_0])))))));
            }
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */short) -1830740664);
            arr_12 [i_0 - 1] [i_2] = ((/* implicit */short) (unsigned char)6);
            arr_13 [i_0 + 1] [i_2] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2]);
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] = (-(min((((/* implicit */unsigned long long int) arr_14 [i_4])), (var_10))));
            arr_18 [i_0] [i_0 - 1] [i_4 - 1] = ((/* implicit */_Bool) ((((-1830740680) + (2147483647))) >> (((((((-1835857796) + (2147483647))) >> (((/* implicit */int) var_3)))) - (311625826)))));
            var_14 = ((unsigned long long int) min((arr_3 [(_Bool)0]), (arr_3 [(unsigned char)0])));
            var_15 = ((/* implicit */long long int) var_10);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_16 = ((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_14 [(_Bool)1])));
            var_17 |= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_5 - 1])), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) 1835857806)) : (3144012721U))))))));
        }
        arr_22 [i_0] = max((min((max((arr_7 [i_0] [2U] [(signed char)0]), (((/* implicit */int) arr_20 [i_0 - 1] [i_0] [i_0 - 1])))), (1835857795))), (((/* implicit */int) (signed char)-33)));
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) * (((/* implicit */int) (_Bool)1))))) ? (((((var_5) ? (2259169887U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) >> (((/* implicit */int) max((((/* implicit */signed char) var_0)), (var_2)))))) : (((((((/* implicit */_Bool) 4095)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_9)))))))));
    var_19 = ((/* implicit */unsigned char) var_6);
}
