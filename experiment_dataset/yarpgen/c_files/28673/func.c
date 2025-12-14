/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28673
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) min((7119771181787131715LL), (((/* implicit */long long int) 714468728))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)45944)), (13450268849369044734ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned short)45947)), (2046458731439342256ULL)))))));
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_14 = arr_8 [i_2 - 1] [i_1];
            arr_9 [i_1] [i_1] [i_2] &= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)19592))));
            arr_10 [i_1] [(unsigned char)1] [i_1] |= ((/* implicit */_Bool) max((min((2097152), (2097152))), (((/* implicit */int) min((((unsigned short) arr_6 [i_1] [i_1])), (var_11))))));
        }
        for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            var_15 -= ((/* implicit */long long int) min((((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned short) var_3)), (var_10))))), (((unsigned short) ((var_7) + (3627822056U))))));
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_3 - 1] [i_3 - 2] [i_3 - 2]) & (arr_12 [i_3 + 1] [i_3 - 1] [i_3 - 1])))) ? (min((arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_12 [i_3 - 1] [i_3 - 2] [i_3 - 2]))) : ((~(arr_12 [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                arr_16 [i_4] [i_4] = ((/* implicit */int) ((_Bool) -2097152));
                var_17 = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) arr_12 [i_4] [i_3 - 2] [i_1])));
                arr_17 [i_4] [i_3] = ((((/* implicit */_Bool) (unsigned short)28097)) && (((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_3)))))))));
                var_18 -= ((/* implicit */unsigned char) (-((-(arr_13 [i_1] [18U] [i_3 + 1])))));
            }
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_19 = ((/* implicit */short) max((((long long int) ((int) arr_12 [i_5] [i_3] [i_1]))), (((/* implicit */long long int) max((arr_18 [i_1] [i_1]), (((/* implicit */unsigned int) ((arr_4 [i_5]) * (((/* implicit */int) arr_5 [i_3] [i_5]))))))))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_29 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))) + (17590751483992454000ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_26 [i_1] [7ULL] [i_5] [i_6] [i_5])) > (-1140906839475676842LL)))))))) || (((/* implicit */_Bool) max((arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_5]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))))))));
                            var_20 |= ((/* implicit */unsigned long long int) max((arr_13 [i_3] [i_6] [i_6]), (((/* implicit */int) ((unsigned char) var_0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (signed char i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_35 [i_1] [i_1] [i_3] [i_5] [i_5] [18LL] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_30 [i_5] [i_3 + 1] [i_3] [i_3 + 1])));
                            var_21 = ((/* implicit */unsigned int) ((((-3978147929158001406LL) | (((/* implicit */long long int) min((arr_14 [i_5] [i_5] [i_5] [i_1]), (((/* implicit */unsigned int) var_3))))))) == (((/* implicit */long long int) (~(((/* implicit */int) ((short) var_3))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 1; i_11 < 19; i_11 += 2) 
                {
                    var_22 *= ((/* implicit */short) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1])) | (((/* implicit */int) (signed char)-57))));
                    arr_40 [i_11] [i_3] [i_11] = ((/* implicit */long long int) ((arr_31 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_11 - 1]) ^ (arr_31 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_11 - 1])));
                }
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)56)), (562949819203584ULL))), (arr_30 [i_10] [i_3] [i_3] [i_3 - 1]))))));
            }
            for (unsigned char i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [4] [i_12])) <= ((~(7751245002541584654ULL))))) ? (arr_26 [10LL] [i_3] [i_1] [i_1] [10LL]) : (((/* implicit */unsigned int) arr_13 [i_1] [18ULL] [16LL]))));
                arr_45 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_22 [i_12] [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 1] [18U]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_3 - 1] [i_3 + 1] [i_3 - 1] [3LL] [i_3 - 2] [3LL]))))))));
            }
        }
        var_25 |= ((/* implicit */unsigned short) (short)-1);
        arr_46 [(unsigned char)13] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))), (max((((/* implicit */int) arr_6 [i_1] [i_1])), (-2097152)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    var_26 = ((/* implicit */unsigned short) ((int) arr_24 [i_15] [i_13] [i_13] [i_13]));
                    arr_58 [i_1] [i_15] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(arr_8 [i_1] [i_1]))))));
                    var_27 *= ((unsigned int) arr_52 [i_1]);
                }
                arr_59 [i_1] [i_13] [i_1] = ((/* implicit */_Bool) var_10);
            }
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                var_28 = ((/* implicit */unsigned int) (unsigned short)37438);
                /* LoopSeq 1 */
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) % (arr_24 [i_16] [i_16] [i_13] [i_16])));
                    var_30 = ((/* implicit */unsigned int) arr_7 [i_1]);
                }
                var_31 = ((/* implicit */unsigned long long int) arr_57 [i_1] [i_13] [i_16] [i_16]);
            }
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-17)) - (((/* implicit */int) (unsigned short)37439))));
            var_33 += ((/* implicit */unsigned char) ((arr_56 [i_13]) ? (((/* implicit */int) arr_56 [i_13])) : (((/* implicit */int) arr_56 [i_1]))));
            var_34 = ((/* implicit */long long int) arr_37 [i_1] [i_1]);
        }
        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            var_35 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_48 [i_18])), (max(((+(-7394716390348466514LL))), (((/* implicit */long long int) (unsigned char)245))))));
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) min(((~(((long long int) arr_5 [i_18] [(signed char)21])))), (((/* implicit */long long int) var_3)))))));
            var_37 = ((/* implicit */unsigned char) (+(var_5)));
        }
        var_38 -= ((/* implicit */int) arr_43 [i_1] [i_1]);
    }
    /* LoopNest 3 */
    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
    {
        for (short i_20 = 0; i_20 < 21; i_20 += 4) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    var_39 ^= ((/* implicit */long long int) ((unsigned int) arr_23 [i_20] [i_20] [i_20] [i_20]));
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_80 [i_19] [i_19] [i_21] [i_22] [i_22] = ((/* implicit */unsigned long long int) arr_33 [i_19] [21ULL] [i_21] [i_20] [i_19] [i_19]);
                        var_40 *= ((/* implicit */unsigned char) max((((unsigned int) arr_19 [i_19] [(signed char)17] [i_19] [i_22])), (((/* implicit */unsigned int) ((unsigned char) (_Bool)0)))));
                        var_41 -= (!(((/* implicit */_Bool) arr_66 [i_19])));
                        arr_81 [i_19] [i_19] [i_21] [i_21] = ((/* implicit */signed char) arr_21 [i_19] [i_20] [i_21]);
                    }
                }
            } 
        } 
    } 
}
