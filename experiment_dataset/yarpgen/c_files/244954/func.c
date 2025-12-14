/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244954
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
    var_14 = ((/* implicit */int) var_8);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (15698330459520470703ULL) : (((/* implicit */unsigned long long int) var_2)))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) (short)32548)))))));
                            arr_13 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) var_4)) != (var_1))) && (((/* implicit */_Bool) var_1))));
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((var_5) ? (((/* implicit */unsigned int) arr_12 [i_3] [i_0 + 2])) : (3029689514U))))));
                            var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_3))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) (~(var_13)));
                            arr_23 [i_0] [i_1 + 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_1] [i_5] [i_6] [i_5] [i_7 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_0 + 2])) : (((/* implicit */int) (unsigned char)7))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_7)) - ((-(var_8)))));
            arr_27 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        }
        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0] [i_0]) ^ (var_10)));
                            var_21 ^= ((/* implicit */short) (unsigned short)24292);
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */short) var_13);
                arr_40 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */int) ((unsigned int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
            }
            for (unsigned int i_13 = 4; i_13 < 11; i_13 += 4) 
            {
                arr_44 [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
                arr_45 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)247))));
                var_23 -= ((/* implicit */int) ((((/* implicit */long long int) var_10)) < (-2504760358700447567LL)));
                var_24 *= ((/* implicit */short) (unsigned short)24292);
                var_25 -= ((/* implicit */short) 1306937076U);
            }
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [(unsigned short)0] [i_0 - 1] [i_0] [i_9 - 1])))))));
            var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)24292)) ? (2246979697429856783ULL) : (((/* implicit */unsigned long long int) 2504760358700447552LL))));
            arr_46 [i_0] = ((/* implicit */_Bool) 2988030220U);
        }
        arr_47 [i_0] [(unsigned char)4] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [6] [6] [i_0 + 2] [i_0 + 2])) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [8])))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (int i_15 = 3; i_15 < 8; i_15 += 1) 
            {
                {
                    var_28 = ((/* implicit */short) (((~(((/* implicit */int) var_9)))) | (((/* implicit */int) arr_30 [i_0 + 1] [i_0]))));
                    var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */int) var_0);
                                arr_60 [i_0] [i_14] [(unsigned char)2] [i_0] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0 + 1] [i_14] [i_15 - 2]))));
                            }
                        } 
                    } 
                    var_31 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_58 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_18 = 4; i_18 < 11; i_18 += 4) 
    {
        var_32 = ((/* implicit */int) (unsigned char)1);
        var_33 -= ((/* implicit */_Bool) ((int) var_11));
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 23; i_19 += 1) 
    {
        var_34 = ((unsigned short) ((((/* implicit */long long int) var_7)) > (var_1)));
        var_35 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)41276))));
        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((15551843080671766998ULL) + (((/* implicit */unsigned long long int) 0U)))))));
        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((1306937064U) >> (((-1) + (14))))))));
    }
    for (short i_20 = 1; i_20 < 17; i_20 += 2) 
    {
        arr_71 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_66 [i_20]))))) ^ (((long long int) var_0))))) ? ((+(max((((/* implicit */unsigned long long int) (signed char)0)), (var_0))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_7)) ^ (-9025128023366778781LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_20 + 2]))))))));
        var_38 ^= ((/* implicit */unsigned int) (signed char)115);
        arr_72 [i_20] = var_7;
        var_39 *= ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) (~(var_1)))) ? (2988030209U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_20 + 1] [i_20 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-2012138762), (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (unsigned short)24259)) ? (((/* implicit */int) arr_70 [i_20])) : (((/* implicit */int) arr_65 [i_20])))) : ((~(((/* implicit */int) arr_67 [i_20] [i_20]))))))));
    }
}
