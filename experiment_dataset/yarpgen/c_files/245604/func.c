/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245604
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
    var_13 |= (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)65526)) == (-1023400212)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (~(var_2)))))))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((long long int) 1023400203)))));
            arr_7 [i_0 + 1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */int) arr_5 [i_1] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) var_10))));
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) -1);
        }
        for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) arr_10 [i_0 - 1] [i_3]);
                var_17 = ((/* implicit */long long int) (signed char)127);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                arr_16 [0LL] [i_4] [i_4] &= ((((/* implicit */_Bool) -1023400212)) || (((/* implicit */_Bool) -1LL)));
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (8388544) : (-1023400232)))) ? ((~(arr_3 [12ULL] [15ULL] [8U]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24)))));
            }
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 350323729U)))) ? (4078839482U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))))));
            var_20 = ((/* implicit */_Bool) var_10);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6813768248333561615LL)))))))));
                        arr_22 [(unsigned short)8] [i_0] [14ULL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6813768248333561615LL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (-1023400212))) : (((((/* implicit */_Bool) var_9)) ? (-1359535658) : (var_2)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_22 -= ((/* implicit */_Bool) (~(arr_15 [i_0] [i_0 - 1] [i_0])));
            var_23 *= ((/* implicit */long long int) arr_14 [i_0 - 1] [i_7] [i_7] [i_7]);
            /* LoopSeq 2 */
            for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) var_3);
                arr_28 [i_0] = ((/* implicit */long long int) (~(3904301687U)));
                /* LoopNest 2 */
                for (long long int i_9 = 4; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (~(((571314239U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 - 2] [i_9] [i_10])))))));
                            arr_34 [i_8 - 1] [i_0] [i_8 - 1] [3ULL] [3ULL] [i_0] [i_0 - 2] = ((901413176U) + (((/* implicit */unsigned int) -8388561)));
                            arr_35 [i_10] [i_0] [i_8] [i_8 + 1] [i_0] [(unsigned char)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1359535655)) ? (-1023400212) : (((/* implicit */int) (short)4080)))))));
                        }
                    } 
                } 
            }
            for (int i_11 = 3; i_11 < 15; i_11 += 1) 
            {
                arr_38 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */unsigned int) (-(((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                arr_39 [0] [i_0] [i_11 - 2] [i_11 - 2] = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [(_Bool)0])) + (2147483647))) >> (((-1314413894042853569LL) + (1314413894042853580LL)))))));
                arr_40 [i_11] [i_0] [i_11 + 1] = ((/* implicit */int) ((1359535658) != (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            }
            var_26 = ((/* implicit */unsigned int) arr_14 [(unsigned char)0] [(_Bool)1] [i_7] [i_7]);
        }
        var_27 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0 + 1]))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 15; i_12 += 2) 
    {
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_1))) ^ (((((((/* implicit */int) arr_9 [5ULL] [i_12])) + (2147483647))) >> (((arr_26 [i_12] [(signed char)9] [i_12] [i_12]) - (1566965360U)))))));
        arr_44 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1023400224)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (11357580613597095404ULL)))) ? (((/* implicit */long long int) 3393554119U)) : (arr_25 [i_12])));
    }
}
