/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54332
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
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((unsigned int) ((21ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) * (0U)));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((((((((/* implicit */unsigned long long int) 7U)) & (1ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)38314)) & (((/* implicit */int) (_Bool)1))))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_19 [i_3] [(_Bool)1] [i_5 + 1] [(unsigned short)7] &= ((/* implicit */unsigned char) (+(16881820745777596488ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_24 [(short)2] [i_4] [i_5 - 2] [4LL] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) & (-1122735948))));
                        arr_25 [i_3] [i_3] [i_4] [i_5 + 1] [i_6] = ((/* implicit */unsigned short) ((long long int) ((unsigned long long int) (_Bool)1)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_29 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) & (9223372036854775804LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31744)) & (((/* implicit */int) (_Bool)0)))))));
                        arr_30 [i_3] [i_4] [i_5] [0LL] = (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                    }
                    arr_31 [i_3] [i_3] [(_Bool)0] [i_3] = -12;
                    arr_32 [i_3] [9] [i_5 - 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)54377))))) & (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (9223372036854775807LL))))));
                }
            } 
        } 
    } 
}
