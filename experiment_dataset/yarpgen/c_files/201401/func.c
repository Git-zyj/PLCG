/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201401
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
    var_12 = 201326592;
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
    var_14 = ((/* implicit */_Bool) (+(max((min((var_4), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (short)32767))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            arr_4 [5LL] [20] = ((/* implicit */unsigned int) arr_0 [i_1] [i_0]);
            var_15 = (-(-201326593));
            var_16 = ((/* implicit */unsigned short) arr_0 [i_1 - 2] [i_1 - 3]);
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) arr_7 [i_0]);
            var_18 = ((/* implicit */int) arr_7 [16]);
            var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [1LL] [i_2] [i_2]))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_20 -= ((/* implicit */unsigned char) (~(arr_0 [15U] [(signed char)9])));
            var_21 = ((/* implicit */unsigned long long int) arr_8 [(signed char)3]);
        }
        var_22 &= ((/* implicit */signed char) arr_3 [i_0]);
        var_23 = ((/* implicit */_Bool) (-(0ULL)));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_24 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(2612579452303575766ULL))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    var_25 &= ((/* implicit */unsigned long long int) (~(arr_8 [i_4])));
                    /* LoopSeq 1 */
                    for (short i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~((~(arr_15 [i_4]))))))));
                        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_7 - 3] [i_7] [16LL] [i_7 + 2]))));
                    }
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned long long int) (signed char)-50);
}
