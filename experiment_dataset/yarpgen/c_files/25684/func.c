/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25684
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
    for (short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */short) min((((((arr_2 [i_0 + 1]) + (9223372036854775807LL))) >> (((arr_2 [i_1 - 1]) + (4210088451706815964LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2])) ? (arr_6 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */int) (short)-10135)))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (arr_6 [i_0] [i_1] [(unsigned short)12] [i_2]) : (((/* implicit */int) arr_5 [i_0] [(signed char)9])))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        var_20 ^= (!(((/* implicit */_Bool) arr_8 [i_0 - 2])));
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1])) << (((min((arr_6 [i_3 - 2] [i_3 - 2] [i_3 + 3] [i_3 + 3]), (((/* implicit */int) max(((short)255), (((/* implicit */short) arr_5 [i_2] [i_3 + 3]))))))) - (251)))));
                        var_22 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((((/* implicit */int) arr_4 [i_1] [(signed char)3])) != (arr_3 [i_0] [i_0]))))))));
                        var_23 *= (+((+(min((((/* implicit */unsigned long long int) (short)-10135)), (arr_1 [2U] [i_2]))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 4; i_4 < 20; i_4 += 3) 
    {
        for (long long int i_5 = 1; i_5 < 23; i_5 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_14 [i_5] [(signed char)9] [i_4]))));
                arr_15 [(_Bool)0] = ((/* implicit */unsigned long long int) (short)32767);
                var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [(short)3] [i_4])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_14 [i_4] [i_5 - 1] [(unsigned char)12]))))) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4] [i_5] [10LL])) != (((/* implicit */int) arr_13 [i_4] [i_4] [i_4])))))))));
                arr_16 [i_4] = ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 + 4]))) : (((((/* implicit */_Bool) arr_12 [i_5 - 1])) ? (arr_12 [i_5 + 1]) : (arr_12 [i_4 - 4]))));
                arr_17 [i_4] [i_5 - 1] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 1])) ? (arr_12 [i_5 + 1]) : (arr_12 [i_5 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5 + 1])))))) : (arr_12 [i_5 - 1]));
            }
        } 
    } 
}
