/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46634
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
    var_15 = ((/* implicit */int) var_1);
    var_16 = var_14;
    var_17 = var_8;
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max(((~(((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))))), (((long long int) ((unsigned long long int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_0] [i_0]))) : (arr_8 [i_0 + 1])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))));
                    arr_10 [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 2])) ? (((var_9) / (arr_8 [0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1133611319U)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))))))));
                    var_19 = ((((long long int) (signed char)-32)) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))));
                    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)28232)) >> (((7606841113410262168LL) - (7606841113410262167LL)))))) ? (1339129781288401402ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101)))));
                }
                var_21 = ((/* implicit */_Bool) (-(var_9)));
                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                var_23 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) + (arr_5 [i_0 - 1] [i_0 - 2] [i_1 + 1])));
            }
            for (short i_4 = 2; i_4 < 20; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (var_13) : (((/* implicit */int) var_1)))))));
                arr_15 [i_0] [i_1] [i_4] = ((/* implicit */int) ((long long int) ((var_13) | (((/* implicit */int) arr_7 [i_4 + 2])))));
            }
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_0 - 1] [i_1 - 2] [i_0 - 1]))));
                    var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 2]))) < (((((/* implicit */_Bool) 7ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2]))))));
                }
                arr_20 [i_0 - 3] [i_0 - 3] [i_1] [i_5] = ((/* implicit */int) (unsigned short)17115);
            }
            for (unsigned int i_7 = 3; i_7 < 23; i_7 += 3) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_7] [i_7 - 3] [22LL] [22LL]));
                arr_23 [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-18559)) : (((/* implicit */int) var_14)))));
            }
            arr_24 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_1] [(short)4] [19U] [(unsigned short)12])) < (arr_11 [(short)13]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 2] [(short)3] [23U]))) : (arr_8 [i_0 + 1])));
            var_28 &= (-((+(((/* implicit */int) (short)-9011)))));
            arr_25 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_4) < (var_9))))));
            arr_26 [(unsigned char)6] = ((/* implicit */_Bool) ((arr_0 [i_0 - 3]) / (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 - 2] [i_0] [i_0] [i_0])))));
        }
        var_29 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [4ULL] [i_0] [19U])) : (((/* implicit */int) arr_3 [i_0])))))), (((/* implicit */int) ((((/* implicit */int) var_6)) == ((~(((/* implicit */int) (signed char)-52)))))))));
    }
    for (int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */int) min(((unsigned short)41523), (((/* implicit */unsigned short) (short)9001))));
        var_30 += ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_6 [i_8] [i_8] [i_8])))) % (max((((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) arr_4 [i_8] [23U] [i_8])))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8] [i_8])))))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = ((/* implicit */_Bool) var_1);
        var_32 = ((/* implicit */unsigned long long int) ((var_5) ? (((((/* implicit */_Bool) -334127034)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)112)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_9])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9]))) : (-6390487403959680679LL))))));
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            arr_39 [i_9] = ((/* implicit */unsigned short) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_35 [i_9] [i_9])) <= (((/* implicit */int) var_8))))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 3; i_11 < 23; i_11 += 2) 
            {
                for (signed char i_12 = 1; i_12 < 23; i_12 += 4) 
                {
                    {
                        arr_45 [i_9] [i_10] [i_10] [i_12 + 2] &= ((/* implicit */short) ((long long int) arr_41 [i_10]));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18567))) : (arr_32 [i_9])));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned long long int) arr_41 [i_9]);
            arr_46 [i_9] = ((/* implicit */signed char) (~(arr_41 [i_9])));
        }
    }
    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_35 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((max((var_13), (((/* implicit */int) (short)-8981)))) - (((/* implicit */int) var_3))))) + (((max((((/* implicit */unsigned long long int) 3701774031U)), (8255596628260880821ULL))) - (arr_32 [i_13])))));
        var_37 -= ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) var_1)) | (((/* implicit */int) (signed char)-17))))))) | (max((min((((/* implicit */unsigned int) arr_47 [i_13])), (arr_44 [i_13] [i_13] [i_13] [i_13]))), (((/* implicit */unsigned int) max((arr_33 [i_13]), (((/* implicit */int) var_8))))))));
    }
}
