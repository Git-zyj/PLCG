/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48368
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
    var_19 = ((/* implicit */unsigned short) ((signed char) var_0));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                            arr_12 [i_0] [i_4] = ((/* implicit */long long int) var_5);
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_2] [i_3]), (((/* implicit */unsigned long long int) (unsigned short)0))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((/* implicit */int) arr_7 [i_0] [(unsigned short)0] [i_0])))));
                            var_20 = var_8;
                        }
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] = var_0;
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_0])) ? (((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)65535))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((signed char) ((unsigned int) arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_22 = ((/* implicit */signed char) arr_17 [i_5] [i_5]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_23 = ((/* implicit */signed char) arr_19 [i_5] [i_5] [i_6]);
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 = ((/* implicit */long long int) arr_21 [i_5] [i_6] [i_6] [i_6]);
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))) : (arr_16 [i_6])));
                arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) (_Bool)0));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 1; i_8 < 23; i_8 += 1) 
                {
                    var_26 = ((/* implicit */int) ((long long int) arr_18 [i_5]));
                    arr_27 [i_5] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (_Bool)1))));
                }
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_27 = ((/* implicit */_Bool) (((!(arr_28 [i_5] [i_6] [i_9]))) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)168))))));
                var_28 = ((/* implicit */int) arr_29 [i_5] [i_5] [i_5]);
            }
        }
        var_29 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_19 [(unsigned short)12] [i_5] [i_5])))), (((/* implicit */int) ((arr_26 [i_5] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5]))))))))))));
    }
    var_30 = ((/* implicit */signed char) ((_Bool) (~(((long long int) (unsigned char)96)))));
}
