/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35131
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
    var_17 ^= ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) (unsigned char)245)), (-17))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [(signed char)1] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (signed char)127))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)245)) || (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((signed char) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) max(((signed char)74), ((signed char)-112)))) : (((((/* implicit */_Bool) arr_7 [i_2] [(signed char)17] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
                    var_19 ^= ((/* implicit */signed char) (((((~(-1162083959))) >= (-1162083959))) ? (0) : ((~(((/* implicit */int) arr_0 [i_0] [i_2]))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 3; i_3 < 22; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */int) arr_9 [i_3 - 2]);
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    {
                        arr_19 [(signed char)6] [i_4 - 1] [i_5] [i_3] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((int) (unsigned char)82))))));
                        arr_20 [i_3] [i_3] [i_4 + 1] [10] [i_5] [i_6] &= ((/* implicit */signed char) max((arr_14 [i_3] [(signed char)10] [(signed char)10]), (((/* implicit */int) (unsigned char)240))));
                    }
                } 
            } 
            var_20 = ((/* implicit */int) arr_15 [i_3] [i_4 + 1]);
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_21 += ((unsigned char) max(((unsigned char)9), (arr_18 [(unsigned char)17] [(unsigned char)10] [i_7])));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                arr_25 [i_3] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) 2147483647);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned char i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        {
                            arr_31 [i_3 - 3] [i_3] [i_3 - 3] [i_8] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)19), ((unsigned char)183)))) ? (((((/* implicit */_Bool) arr_30 [i_3] [i_7] [i_7] [i_7] [i_7])) ? (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) var_13)))) : ((~(((/* implicit */int) (unsigned char)255)))))) : (((arr_14 [i_7] [i_3] [i_9]) & (arr_14 [i_9] [i_3] [i_3 + 1])))));
                            arr_32 [i_3 + 2] [i_3 - 3] [i_7] [i_8] [i_3] [i_9] [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((unsigned char) arr_13 [i_3] [i_3])))) < ((+(((/* implicit */int) (unsigned char)2))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    for (int i_12 = 1; i_12 < 23; i_12 += 4) 
                    {
                        {
                            arr_38 [i_3 + 1] [i_3] [(unsigned char)11] = ((/* implicit */unsigned char) (((-(-256483870))) <= (((((/* implicit */_Bool) arr_21 [i_3 + 1])) ? (((/* implicit */int) arr_21 [i_3 - 3])) : (((/* implicit */int) arr_21 [i_3 + 1]))))));
                            var_22 += max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_23 [i_12 + 1])) ? (256483885) : (((/* implicit */int) var_10)))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_7] [i_8] [i_11 + 1])))), (((/* implicit */int) max((var_13), ((unsigned char)230)))))));
                        }
                    } 
                } 
                var_23 = (~(((((/* implicit */_Bool) 256483911)) ? (((/* implicit */int) ((unsigned char) 256483911))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 2147483647))))))));
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                var_24 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_13]))))) ? (((/* implicit */int) ((unsigned char) 2147483647))) : (((/* implicit */int) arr_12 [i_3 - 3] [i_3 + 2] [i_3 + 2])))), (((/* implicit */int) var_5))));
                arr_42 [i_3] = ((/* implicit */signed char) (~(((arr_27 [i_3 + 1] [i_3 - 3] [i_3 - 2] [i_3 + 1] [i_3 + 2]) ^ (var_15)))));
            }
            arr_43 [i_3] [i_3] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (~(31744))))), (arr_24 [i_3 - 1] [i_7])));
        }
    }
    var_25 = var_0;
}
