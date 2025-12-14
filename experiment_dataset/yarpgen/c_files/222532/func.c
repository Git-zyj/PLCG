/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222532
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
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) ((_Bool) var_7)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_17 *= ((/* implicit */short) (((_Bool)1) && ((_Bool)1)));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(var_5))) % (((((/* implicit */_Bool) 14161170607897266515ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [18])) : (((/* implicit */int) (_Bool)1))))));
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((arr_0 [i_0 + 1]) & (arr_0 [i_0 - 1]))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 23; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3 - 2]);
                        arr_17 [i_0] [i_2 + 1] [i_2 + 1] [i_2] = ((/* implicit */_Bool) 756718389859844785LL);
                        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((arr_10 [i_0 + 1]) - (1316330348)))))), ((-(arr_13 [i_0] [i_0] [i_3 + 2] [i_4])))));
                        var_20 |= ((/* implicit */unsigned long long int) max((((2080374784U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) var_3)) > (arr_6 [i_0] [i_3] [i_0])))));
                        arr_18 [i_0] [i_0] [i_2 + 1] [i_0] [i_3 + 2] [i_4 + 1] = ((/* implicit */_Bool) arr_2 [i_0]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        arr_23 [3ULL] [i_2 + 1] [i_0] [10] = ((/* implicit */short) max((var_3), (((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) 1881422325)))))));
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) var_13));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_31 [(signed char)10] [i_0] [(unsigned char)22] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_12)));
                        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [18ULL] [i_0 + 1] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) ((short) arr_7 [i_0 + 1] [i_7])))));
                        arr_32 [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)109))))))))));
                    }
                } 
            } 
            arr_33 [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((int) var_16))) : (max((((/* implicit */long long int) arr_9 [i_0] [i_0 + 1] [i_0 + 1])), (arr_0 [i_0 - 1])))))) ? (((/* implicit */int) ((arr_26 [i_0 - 1] [i_2 + 1]) <= (arr_26 [(short)14] [i_2 + 1])))) : (((((/* implicit */int) (signed char)24)) - (((/* implicit */int) (_Bool)0))))));
        }
        /* vectorizable */
        for (short i_9 = 4; i_9 < 21; i_9 += 1) 
        {
            arr_37 [(unsigned short)15] [i_0] = (!(((/* implicit */_Bool) 16776192LL)));
            /* LoopNest 2 */
            for (unsigned int i_10 = 2; i_10 < 23; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        arr_45 [i_0] [i_9 + 1] [i_0] [7ULL] = ((/* implicit */_Bool) ((unsigned long long int) -5639071397357062946LL));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)40)) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_34 [i_10 - 2]))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_10 + 1] [i_10 + 2] [i_10 + 1])) | (((/* implicit */int) arr_39 [i_11 + 1] [i_9 + 1] [i_9 + 2] [i_0 - 1]))));
                        var_24 += ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_0] [i_0] [6] [i_0 + 1] [i_0 + 1])) == ((~(((/* implicit */int) var_0))))));
                    }
                } 
            } 
            arr_46 [i_0] [(short)24] [i_0] = ((/* implicit */short) arr_21 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_0 + 1]);
            var_25 *= ((/* implicit */short) 71916856549572608ULL);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_9] [i_9 + 4] [i_9 + 2]))) - ((((_Bool)1) ? (10288494237893490436ULL) : (18446744073709551615ULL)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (~(((unsigned long long int) ((3972550717729239176ULL) - (7028231983146976658ULL)))))))));
            arr_49 [i_0] [i_12] = (_Bool)1;
        }
    }
    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        for (unsigned char i_14 = 1; i_14 < 15; i_14 += 1) 
        {
            {
                var_29 -= ((/* implicit */unsigned int) arr_34 [i_13]);
                arr_54 [12ULL] [i_14 - 1] [i_14 + 1] = ((/* implicit */unsigned char) (short)23892);
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_15);
}
