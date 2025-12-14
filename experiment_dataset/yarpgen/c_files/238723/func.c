/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238723
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)38420);
                var_12 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)13041)), (4294967295U)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2] [i_3]);
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_4))))))) : (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) + (var_2))))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 4294967290U))));
                            }
                            for (long long int i_5 = 3; i_5 < 21; i_5 += 2) 
                            {
                                arr_21 [i_0] [i_1] [i_0] [i_3] [i_2] |= ((/* implicit */unsigned int) (~(max((arr_6 [i_1] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2 + 2] [i_2] [i_2 + 1]))))));
                                arr_22 [(signed char)18] [i_1] [i_1] [i_1] [i_5] = 0U;
                            }
                            for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) (+(arr_8 [i_1] [i_1])));
                                arr_25 [i_0] [i_1] [i_2 + 2] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4294967288U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (30U))) : (((2308318704U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47510))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4209526777U)) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)23120)) : (((/* implicit */int) (short)-6323)))) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_6])))))));
                            }
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_16 [i_3] [i_2] [i_2 - 2] [i_2 - 1] [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)32307)))) - (((((/* implicit */_Bool) (short)5628)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_2 - 1] [(unsigned char)11] [i_2 - 1] [i_1])) : (((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_2 + 1] [i_0]))))) : (((unsigned long long int) arr_20 [i_1] [i_1] [i_3] [i_3] [i_3])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (unsigned short)13041);
}
