/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249271
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50292))) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) (~(arr_0 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 3; i_3 < 16; i_3 += 3) 
            {
                var_14 -= arr_0 [(signed char)4];
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_3 + 2])) ? (arr_6 [i_2 + 1] [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8572)))))) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) (!(((arr_5 [(signed char)18]) || (arr_5 [i_2]))))))));
                var_16 = ((((/* implicit */_Bool) arr_0 [8ULL])) ? (((/* implicit */long long int) (-(arr_0 [(signed char)6])))) : ((-9223372036854775807LL - 1LL)));
            }
            var_17 = ((/* implicit */signed char) arr_10 [i_2 - 2] [i_2 + 2]);
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (short)-7631))));
        }
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_15 [i_1] [0U] = arr_1 [18LL];
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 950280056U)) ? ((~(2441135693868555199ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_12 [i_4]))));
        }
        var_21 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1]))));
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_24 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) arr_4 [i_5]);
                    arr_25 [i_5] [i_6] [i_7] [(signed char)12] = ((/* implicit */signed char) arr_5 [i_7]);
                    var_22 &= ((/* implicit */short) (+((-(((/* implicit */int) (signed char)-26))))));
                }
            } 
        } 
    } 
}
