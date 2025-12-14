/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214696
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (((((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11))))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned short)34289))))))));
    }
    for (long long int i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1]);
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_19 = (~((-(((/* implicit */int) arr_13 [i_1 - 1] [i_2])))));
                        arr_15 [i_1] [i_2] [i_3] [i_4 + 3] = ((/* implicit */long long int) ((1570678410894543324ULL) < (((/* implicit */unsigned long long int) -1545619086))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_18 [i_1 + 1] [i_5] |= ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_17 [i_1 + 1]))), (min((arr_6 [i_1] [i_1]), (((/* implicit */int) arr_14 [i_1 + 1] [i_5] [i_5] [i_5]))))))) ? (((((/* implicit */int) min((arr_17 [i_1]), (((/* implicit */unsigned short) arr_10 [i_1] [i_1] [i_5] [(signed char)3]))))) | (max((var_3), (((/* implicit */int) arr_8 [i_1] [(unsigned short)14] [i_1])))))) : (((/* implicit */int) ((signed char) arr_8 [i_1] [i_5] [i_1 + 1]))));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_13 [i_1] [i_6]))));
                    var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (-1545619086)))) ? (((((/* implicit */_Bool) 1062183233840192302LL)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 1545619085)) ? (((/* implicit */int) (unsigned short)16383)) : (-1545619082)))))), (((unsigned long long int) -1062183233840192295LL)));
                }
                var_22 = ((/* implicit */signed char) ((min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-122)) - (((/* implicit */int) (_Bool)1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_6] [i_5] [i_5] [i_1]))) : (4294967295U)))) >= (arr_20 [i_1] [i_1] [i_1])))))));
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                var_23 = ((/* implicit */short) ((unsigned int) (_Bool)1));
                var_24 = ((/* implicit */short) (!((_Bool)1)));
                /* LoopSeq 3 */
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1062183233840192296LL)) ? (((/* implicit */int) arr_26 [i_1] [i_5] [i_5] [i_9])) : (((/* implicit */int) arr_19 [i_1] [i_8] [i_9]))))) & (arr_7 [i_9])));
                    var_26 = ((/* implicit */long long int) (!(arr_10 [i_1] [i_1] [i_1 - 2] [i_1 - 1])));
                }
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */signed char) var_4);
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_10] [i_8] [i_1])) : (((/* implicit */int) arr_16 [1LL] [i_8]))))) ? (((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_1 + 2] [i_1] [i_1])))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_8])))))));
                }
                for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    arr_34 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_27 [i_8] [i_8] [i_8]);
                    arr_35 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_22 [i_11] [i_5] [i_8] [i_11 + 1] [i_1 - 2] [i_5]));
                }
            }
        }
        /* vectorizable */
        for (signed char i_12 = 3; i_12 < 14; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 3) 
            {
                var_29 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                var_30 |= ((/* implicit */short) (_Bool)1);
            }
            var_31 = ((/* implicit */signed char) ((unsigned char) arr_23 [i_12 + 1] [i_1]));
            /* LoopNest 3 */
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (signed char i_16 = 4; i_16 < 14; i_16 += 1) 
                    {
                        {
                            arr_48 [i_15] [i_16] = ((/* implicit */signed char) ((((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_1] [i_12] [i_15])))) / (((/* implicit */int) arr_14 [i_1 + 2] [i_16] [i_1] [i_16]))));
                            var_32 -= ((unsigned long long int) (unsigned short)0);
                            var_33 = ((/* implicit */unsigned short) arr_38 [i_1] [i_1 - 2] [i_16]);
                            arr_49 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_27 [i_1 - 1] [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_1))))));
                            var_34 = ((/* implicit */unsigned long long int) ((arr_40 [0LL] [i_15] [i_15]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_1 - 1] [i_12] [i_14] [i_15] [i_16 - 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [(signed char)3] [6LL] [i_14] [(signed char)12])))))));
                        }
                    } 
                } 
            } 
            arr_50 [i_12] [i_12] [i_1] = ((/* implicit */unsigned short) arr_16 [i_1] [i_12]);
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) arr_9 [i_17] [i_1] [i_1])) : (((/* implicit */int) arr_52 [i_17]))));
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) arr_43 [i_1 + 2] [i_17] [i_17] [i_17] [3]))));
            var_37 = ((/* implicit */int) ((((((-1062183233840192296LL) + (9223372036854775807LL))) >> (((arr_30 [i_1 + 2]) - (13166346551822484978ULL))))) * (((long long int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_17])))))));
        }
        for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            arr_57 [i_1] [i_18] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_47 [i_1] [i_1] [i_1] [i_18] [i_18]), (arr_47 [i_1] [i_18] [i_18] [i_1] [i_1]))))));
            var_38 = ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_18])) ? (arr_6 [i_1 + 1] [i_18]) : (arr_6 [i_1 + 2] [i_18])))));
            var_39 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1 + 1] [i_1] [i_1 + 1] [i_1]))) % ((((_Bool)1) ? (-1062183233840192297LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-49)))))))));
        }
    }
    for (long long int i_19 = 2; i_19 < 14; i_19 += 3) /* same iter space */
    {
        var_40 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((var_16) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1545619085))))) : (((/* implicit */int) ((unsigned short) var_16)))))), (min((arr_36 [i_19 + 2] [i_19 - 1]), (((/* implicit */unsigned long long int) var_3))))));
        var_41 = ((/* implicit */long long int) (_Bool)1);
        var_42 = ((/* implicit */unsigned short) ((min((arr_58 [i_19 + 1]), (1127227615868039873ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) -1062183233840192328LL)))) || (arr_10 [i_19 + 1] [i_19 - 1] [i_19 + 2] [i_19 - 2])))))));
        var_43 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) ((int) var_15))))));
    }
    var_44 |= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) var_5)) ? (var_15) : (((/* implicit */long long int) var_6)))))) << (((685544499992177254ULL) - (685544499992177254ULL)))));
    var_45 -= ((/* implicit */long long int) ((unsigned short) var_3));
    var_46 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -1545619086)) : (var_2)))))));
}
