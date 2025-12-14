/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245364
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned short)5] [(unsigned short)5] [i_2] [i_2] [i_4] [17ULL] = ((/* implicit */unsigned short) var_8);
                                arr_15 [i_0] [i_1 - 2] [i_2] [i_4] = ((/* implicit */unsigned short) ((((unsigned long long int) (unsigned char)234)) < (((arr_10 [21ULL] [i_1 - 3] [i_4] [21ULL] [i_4]) % (((/* implicit */unsigned long long int) ((long long int) var_5)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned char)14])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_0] [i_2])))) << ((((~(((/* implicit */int) arr_6 [i_0] [i_1 - 2] [8LL] [i_0])))) + (133)))));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
    }
    var_18 |= ((/* implicit */_Bool) var_4);
}
