/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29052
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
    var_12 = ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_9))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) var_8))));
            var_15 = ((/* implicit */int) ((unsigned int) ((2147483647) >> (((/* implicit */int) (unsigned char)10)))));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (unsigned char)0))));
            var_17 = ((/* implicit */long long int) var_2);
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) (~(arr_0 [i_1]))))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) max((max((min((18446744073709551615ULL), (arr_2 [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775795LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))), (((/* implicit */unsigned long long int) (short)-16520))));
                    arr_10 [i_2] = ((/* implicit */long long int) ((((arr_0 [i_0]) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3 + 2]))))))) ? (((unsigned long long int) ((unsigned short) var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_0] [i_0]), (arr_7 [i_0] [i_2])))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [(unsigned char)4]), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [16ULL])))) : (((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43072)))))));
    }
    for (short i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)15))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) max((arr_4 [i_4] [7LL]), (((/* implicit */int) var_11))))) : (arr_13 [i_4]))))));
        arr_15 [i_4] = max((1904148660510849631LL), (((/* implicit */long long int) (unsigned short)40435)));
    }
}
