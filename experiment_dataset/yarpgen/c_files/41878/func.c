/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41878
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
    var_15 = ((/* implicit */short) (signed char)20);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [(unsigned short)7]);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_16 [(unsigned short)5] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) 41089431280763851LL);
                            var_16 = ((/* implicit */signed char) 3759853347U);
                            arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_6 [i_0] [2] [(unsigned short)5]) | (arr_6 [i_2] [i_2] [i_2])));
                        }
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [5LL] [i_5] [i_5] = ((/* implicit */int) arr_13 [i_5 + 2] [i_1] [i_5 + 2] [i_3] [i_5 + 2]);
                            arr_21 [i_5] [i_3] [i_1] [i_2] [i_1] [i_1] [(signed char)14] |= ((/* implicit */short) arr_13 [i_0] [(unsigned short)12] [i_2] [i_2] [i_5 + 1]);
                            var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [(short)6] [(signed char)16])) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)0] [i_5 - 1])) : (((/* implicit */int) arr_18 [(unsigned short)4] [i_0] [i_1]))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -7533357566095331873LL)) % (((14904892075747773922ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14214)))))));
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) arr_5 [i_0]);
            arr_22 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))) & (((4815818121832519433LL) << (((((((/* implicit */int) (signed char)-21)) + (30))) - (9)))))));
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((14599302702495126308ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_34 [(_Bool)1] [15] [i_7] [i_9] [i_8] [i_9] = ((/* implicit */long long int) 16169594385582793846ULL);
                            var_21 = ((/* implicit */unsigned short) ((14599302702495126294ULL) < (((/* implicit */unsigned long long int) 53581871))));
                            arr_35 [i_0] [21LL] [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) -8769474971203427424LL);
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) / (14599302702495126284ULL)));
                        }
                    }
                } 
            } 
            arr_36 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [(_Bool)1] [12] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36299))) : (14599302702495126290ULL)));
            var_23 -= ((/* implicit */unsigned short) ((14599302702495126312ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519)))));
        }
        arr_37 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)51321)) * (((/* implicit */int) (unsigned short)17))));
    }
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        arr_40 [i_10] = ((/* implicit */_Bool) 14599302702495126285ULL);
        arr_41 [i_10] [8ULL] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_33 [i_10] [i_10] [(signed char)8] [i_10] [i_10] [i_10]) != (arr_33 [i_10] [(unsigned short)14] [i_10] [i_10] [i_10] [i_10]))))) < (((((/* implicit */_Bool) 59200244)) ? (arr_33 [(signed char)14] [14LL] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17)))))));
    }
    /* vectorizable */
    for (signed char i_11 = 1; i_11 < 7; i_11 += 4) 
    {
        var_24 *= ((/* implicit */_Bool) (signed char)23);
        arr_44 [i_11] [i_11 + 4] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))) | (-1120317679883031034LL));
    }
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((3847441371214425321ULL) >> (((/* implicit */int) (unsigned short)0)))))))));
    var_26 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((min((var_14), (((/* implicit */long long int) (signed char)-24)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (unsigned short)65122))))))))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))));
}
