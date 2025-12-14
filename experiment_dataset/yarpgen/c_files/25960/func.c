/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25960
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
    var_19 = ((/* implicit */unsigned short) 18241485459036110159ULL);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((signed char) -3146085290612569470LL));
        var_21 = ((/* implicit */unsigned short) ((max((((_Bool) arr_1 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) == (arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (max((((/* implicit */unsigned long long int) (signed char)94)), (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (205258614673441453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95)))))) ? (((unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) (signed char)86)) ? (arr_0 [(unsigned short)16] [(signed char)14]) : (((/* implicit */unsigned long long int) -8985453310934333184LL))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)25655))))) ? (((/* implicit */int) min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 2])))) : (((((/* implicit */_Bool) (short)5617)) ? (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : ((~(((/* implicit */int) (signed char)77))))))));
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 + 1])) < (((/* implicit */int) arr_5 [i_1 - 1]))))) | (((/* implicit */int) min((arr_5 [i_1 - 1]), (((/* implicit */unsigned short) (signed char)4)))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)7))))), (((signed char) arr_3 [i_1 - 1])))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2330))) : (arr_7 [i_2] [16LL]))) >= (((/* implicit */unsigned long long int) arr_1 [i_2]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */signed char) ((arr_7 [i_3 + 1] [i_3 + 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))));
            var_25 = ((/* implicit */int) (unsigned short)65512);
            var_26 = ((/* implicit */short) arr_7 [i_3 + 2] [i_3 + 1]);
            var_27 &= ((/* implicit */unsigned long long int) ((arr_0 [i_2] [i_3 - 1]) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (signed char)-78)))))));
        }
        for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            var_28 = ((/* implicit */long long int) arr_14 [i_4 - 2] [i_4 - 2] [i_4]);
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_12 [i_2]) : (arr_12 [i_4 - 1])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_2])) ? (arr_0 [i_5] [i_2]) : (arr_0 [i_2] [(unsigned short)0]))))));
            var_31 += ((/* implicit */signed char) arr_17 [(signed char)1] [(unsigned short)6] [i_5]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                for (signed char i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    {
                        arr_26 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_5] [i_5] [i_7]))))) ^ (((((/* implicit */int) arr_23 [i_6])) % (((/* implicit */int) (signed char)3))))));
                        var_32 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (signed char)15))))));
                    }
                } 
            } 
            arr_27 [i_5] = ((/* implicit */signed char) ((arr_12 [i_2]) & (((/* implicit */unsigned long long int) 4294967272U))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
        {
            arr_30 [i_8] [i_8] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -2726282231641766923LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18758)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (signed char i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    for (short i_11 = 4; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8] [i_8] [(unsigned char)5] [i_10 - 1] [i_11 - 4])) ? (((/* implicit */int) (unsigned short)56268)) : (((/* implicit */int) arr_25 [i_2] [i_8] [i_2] [i_10 - 1] [i_11 - 4]))));
                            var_34 = ((arr_9 [i_10 + 1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_21 [i_11])) : (((/* implicit */int) (short)-1))))));
                            var_35 = ((signed char) arr_3 [i_10]);
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (signed char)113))))) ? (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_14 [i_2] [i_8] [i_8])) : (((/* implicit */int) arr_28 [i_8] [i_8])))) : ((~(((/* implicit */int) (unsigned short)8480))))));
            var_37 = ((/* implicit */signed char) (-(arr_22 [i_2] [i_2] [i_2] [i_2])));
        }
        arr_38 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_2]))) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65530)))))));
        var_38 += ((659898157823397342LL) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2] [i_2]))));
    }
    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                {
                    var_39 &= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_24 [i_12] [(unsigned short)10] [i_13] [i_14])) && (((((/* implicit */_Bool) 2539366064U)) && (arr_42 [i_12] [i_12])))))));
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (_Bool)0))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 15; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                {
                    arr_52 [i_12] [i_12] [i_12] |= ((/* implicit */signed char) ((((/* implicit */int) min((arr_29 [i_12] [i_15]), (((/* implicit */short) ((((/* implicit */int) (unsigned short)12926)) >= (((/* implicit */int) (_Bool)1)))))))) >> (((/* implicit */int) min((((signed char) arr_14 [(signed char)8] [i_15] [i_16])), (((/* implicit */signed char) ((arr_33 [i_12] [i_12] [i_12] [(unsigned short)3] [i_12]) || (((/* implicit */_Bool) arr_5 [11LL]))))))))));
                    var_41 = ((/* implicit */signed char) -1);
                    var_42 = ((/* implicit */_Bool) max((var_42), ((!(((/* implicit */_Bool) (signed char)116))))));
                }
            } 
        } 
    }
    var_43 ^= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_12)))));
}
