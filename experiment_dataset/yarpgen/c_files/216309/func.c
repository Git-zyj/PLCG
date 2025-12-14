/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216309
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0 + 2] [i_0 + 2] = ((/* implicit */_Bool) var_6);
            var_11 *= ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_1)))));
        }
        var_12 |= ((/* implicit */unsigned short) (+(2942754840233545251LL)));
        var_13 -= ((/* implicit */short) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 8; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    {
                        arr_16 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((758501939233292192ULL) << (((arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_3]) + (6613583793727817755LL)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)151))) : (((((/* implicit */int) var_8)) << (((2592614438U) - (2592614433U)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((758501939233292192ULL) << (((((arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_3]) + (6613583793727817755LL))) + (352624630167091841LL)))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)151))) : (((((/* implicit */int) var_8)) << (((2592614438U) - (2592614433U))))))));
                        var_14 = ((/* implicit */unsigned char) ((((long long int) 1480868235743293967ULL)) / (((/* implicit */long long int) ((int) var_2)))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned int) var_10);
        arr_17 [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2 + 1] [i_2]);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (int i_7 = 4; i_7 < 10; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_8] [i_8] [i_8]))) == (7772184628931002558ULL)));
                                var_17 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (arr_22 [i_2] [i_2]))));
                                arr_28 [i_2] [i_2] [i_7] [i_2] [i_9] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) var_8);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (min(((unsigned short)5944), (((/* implicit */unsigned short) var_6))))))) * (((/* implicit */int) var_1))));
}
