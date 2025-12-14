/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237401
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) arr_1 [i_2]);
                    arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((12242007575262329730ULL) << (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [1LL] [4ULL] [i_2] [i_2]))))))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) arr_2 [i_0])))))));
                    var_19 = (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0])), (arr_4 [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55572))))))))));
                    var_20 += ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4275351671U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9963))))), (((((/* implicit */_Bool) var_16)) ? (var_2) : (var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_15))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        arr_14 [10U] [10U] = ((/* implicit */unsigned int) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned char) ((var_17) ? (((/* implicit */int) (unsigned short)55572)) : (((/* implicit */int) var_3))));
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        arr_24 [i_3] [i_5 + 1] [i_4] [i_3] [i_4] [i_6] = ((long long int) (-(var_7)));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3] [i_6 - 1] [i_5 - 3])) ? (((/* implicit */unsigned long long int) ((arr_3 [4U] [i_5] [i_4]) >> (((arr_1 [(unsigned char)5]) - (1682182372)))))) : (((((/* implicit */_Bool) 2190991916U)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_4 [(unsigned short)1] [i_4]))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26498)) ? (((((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) ^ (((/* implicit */int) (unsigned short)9963)))) : (((((/* implicit */int) var_0)) >> (((var_2) + (29272733367395238LL)))))));
                        arr_36 [i_3] [i_8] [i_8] = ((/* implicit */short) ((_Bool) arr_30 [i_3] [i_8] [i_8]));
                    }
                } 
            } 
            arr_37 [i_3 - 1] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (var_15) : (((/* implicit */unsigned long long int) arr_32 [i_3] [i_3])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_3] [i_3] [5LL])))));
        }
        for (unsigned char i_10 = 2; i_10 < 10; i_10 += 4) 
        {
            var_24 *= ((/* implicit */unsigned char) var_15);
            arr_40 [i_3 + 1] [7LL] = ((/* implicit */long long int) (((!((_Bool)1))) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_17))));
            var_25 *= ((/* implicit */short) arr_27 [i_10 + 2]);
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (arr_10 [i_3 + 1] [i_10 - 1]) : (arr_10 [i_3 - 1] [i_10 + 1])));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_10 [6ULL] [i_3 + 1]) : (((/* implicit */long long int) arr_1 [i_3 + 1]))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_12] [3LL] [(_Bool)1] [i_10] [i_3] [i_3])) ? (((((/* implicit */int) arr_6 [i_3] [i_10] [i_11] [i_3])) & (((/* implicit */int) arr_11 [i_3] [i_10])))) : ((~(((/* implicit */int) var_14))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (long long int i_14 = 2; i_14 < 8; i_14 += 1) 
                {
                    for (unsigned int i_15 = 4; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_3] [i_3 + 2]);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_1))))) * (((/* implicit */int) arr_28 [i_3 - 1] [i_14 - 2]))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_15 + 1] [i_14 + 2] [i_10 + 2])))))));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3] [i_3])) ? (((/* implicit */int) ((unsigned short) arr_41 [i_3] [1]))) : (((/* implicit */int) var_3))));
                            arr_54 [i_3] [(short)2] [i_13] [i_10] [i_15] |= ((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((((/* implicit */_Bool) arr_46 [i_15])) ? (((/* implicit */unsigned long long int) arr_51 [i_3] [i_3 - 1] [i_10 - 1] [(unsigned char)10] [i_10] [i_10 - 1] [i_3 - 1])) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 19615601U)))))));
                        }
                    } 
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-110)))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned short i_17 = 1; i_17 < 9; i_17 += 4) 
            {
                {
                    var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_17 + 3] [i_3 + 2] [i_3 + 2]))) : (((((/* implicit */_Bool) var_3)) ? (arr_12 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230)))))));
                    var_35 = ((/* implicit */unsigned char) (~(arr_61 [i_3] [i_16] [i_17 + 2])));
                    arr_62 [i_3] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)223))))) ? (((/* implicit */int) arr_59 [i_3 + 1] [i_17 + 1] [2U])) : (((/* implicit */int) var_14))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
}
