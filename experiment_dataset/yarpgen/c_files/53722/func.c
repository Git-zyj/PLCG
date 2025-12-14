/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53722
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_13 = ((min(((~(10481696086823641670ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0])))) < ((~(((((/* implicit */_Bool) 2233785415175766016ULL)) ? (11266169008793957206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                    var_14 = ((((18446744073709551594ULL) / ((+(21ULL))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) | (240243211)))));
                    var_15 = ((/* implicit */signed char) ((long long int) (!((_Bool)1))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((long long int) min((16212958658533785600ULL), (((/* implicit */unsigned long long int) -725362325)))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) ((arr_19 [i_6 + 1] [i_4] [i_5] [i_6]) | (((/* implicit */int) arr_23 [i_7 - 1] [i_7 + 1] [i_7 - 2] [i_4] [i_7 - 2]))));
                                var_18 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3]))) != (2233785415175766010ULL))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_3 - 1] [i_3 + 3] [i_3 + 4])))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) -725362325))))))))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        {
                            var_21 = ((22ULL) + (arr_7 [i_3 + 3] [i_3] [i_3 + 1]));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3350177624U)));
                            var_23 = ((/* implicit */long long int) ((arr_5 [i_3 + 3] [i_3 + 3]) * (arr_5 [i_3 + 3] [i_3 + 3])));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((arr_26 [i_3]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65531))))));
    }
    for (int i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) -725362325)) ^ (18446744073709551586ULL)))))) <= (((arr_1 [i_12]) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_12]))))));
        /* LoopNest 3 */
        for (signed char i_13 = 1; i_13 < 13; i_13 += 3) 
        {
            for (signed char i_14 = 1; i_14 < 12; i_14 += 3) 
            {
                for (long long int i_15 = 1; i_15 < 13; i_15 += 4) 
                {
                    {
                        var_26 = ((/* implicit */int) arr_2 [i_14 - 1] [i_13 + 1]);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_34 [i_12]))));
                        var_28 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_14 + 2] [i_14 + 2] [i_14 + 1])))) ? (((((/* implicit */_Bool) arr_7 [i_14 + 2] [i_14 + 1] [i_14 - 1])) ? (arr_7 [i_14 - 1] [i_14 - 1] [i_14 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-42)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (18446744073709551586ULL))))) >= (min((((/* implicit */long long int) (_Bool)1)), (-6928258708270312951LL)))))) ^ (((/* implicit */int) ((arr_40 [i_12] [i_12] [i_12] [i_12]) != (arr_40 [i_12] [i_12] [i_12] [i_12])))))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
    {
        var_30 = ((/* implicit */_Bool) -11397713776454569LL);
        var_31 = ((/* implicit */_Bool) arr_7 [i_16] [i_16] [i_16]);
    }
    /* LoopSeq 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_17] [i_17] [10ULL]))) : (18446744073709551610ULL)))) || (((/* implicit */_Bool) max((18446744073709551590ULL), (16212958658533785600ULL)))))))) < (((((/* implicit */_Bool) 18446744073709551581ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (12617815065982659250ULL)))))));
        var_33 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) (unsigned short)25))) << (((arr_44 [i_17] [i_17]) - (12818283736257627643ULL))))) + ((-(737591244)))));
    }
    for (signed char i_18 = 0; i_18 < 10; i_18 += 4) 
    {
        var_34 = ((/* implicit */int) max(((unsigned short)16424), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_48 [15ULL])))) == (arr_11 [i_18] [5ULL]))))));
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) - (-5643178811219519872LL))))));
        var_36 = ((/* implicit */signed char) -725362322);
    }
    var_37 = ((((/* implicit */unsigned long long int) (-(max((-737591244), (((/* implicit */int) var_5))))))) / (var_9));
    var_38 = ((/* implicit */unsigned long long int) ((var_3) > (((((/* implicit */unsigned long long int) max((-6304768543651637569LL), (6093514783476423719LL)))) / (max((var_0), (((/* implicit */unsigned long long int) (unsigned short)0))))))));
}
