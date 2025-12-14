/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212571
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (var_0))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_12 *= ((unsigned short) arr_3 [(unsigned char)2]);
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))) & (arr_8 [i_1] [i_1] [i_0] [i_0 + 3])));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(short)5] [i_1] [i_0] [(signed char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_0 + 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_5)) ? (arr_10 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39094)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_15 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [12LL] [i_0 - 1] [(_Bool)1] [i_3]))));
                            var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_3] [i_2] [i_0 + 3] [i_0] [i_3] [i_0]))) : (arr_3 [i_3])));
                            var_17 = ((/* implicit */signed char) (unsigned short)28392);
                            var_18 &= ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_2] [i_3]);
                        }
                        var_19 = ((signed char) arr_6 [(signed char)9] [i_0 + 2] [i_0]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_20 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [(unsigned char)8] [i_0] [i_0 + 2] [i_0 - 1]))));
            var_21 |= ((/* implicit */short) (-(((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_0] [(short)10] [i_0 + 1] [(signed char)0] [(signed char)0]))));
            var_22 *= ((/* implicit */long long int) ((unsigned int) arr_12 [i_0 + 2] [(unsigned char)0] [i_0 + 2] [i_5] [i_0] [i_5] [i_5]));
        }
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            arr_20 [i_0] = ((/* implicit */unsigned char) var_7);
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */int) ((short) arr_19 [i_6] [i_6] [i_7]))) + (((/* implicit */int) ((unsigned short) arr_16 [i_8]))))) - ((-(((/* implicit */int) (_Bool)0)))))))));
                            var_24 = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
            } 
            arr_30 [i_0] [i_6] &= ((/* implicit */unsigned short) arr_14 [i_0] [i_6]);
        }
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
        {
            arr_33 [i_0] [6U] = ((/* implicit */_Bool) var_9);
            var_25 += ((/* implicit */unsigned short) arr_9 [i_10] [i_10] [8ULL] [(unsigned short)6]);
        }
        arr_34 [i_0] [(unsigned short)14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 288229276640083968LL)) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -288229276640083954LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_29 [i_0] [i_0 - 1] [(signed char)10] [3LL] [i_0] [i_0] [i_0 + 1]))))))) : (arr_19 [i_0] [i_0 - 1] [i_0])));
        var_26 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min(((unsigned short)37167), (((/* implicit */unsigned short) (signed char)-25))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_3 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 2])))))));
    }
    for (short i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        var_27 = ((/* implicit */signed char) var_4);
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_36 [(short)8])), (288229276640083956LL))))));
        var_29 *= ((/* implicit */_Bool) arr_36 [(unsigned short)16]);
    }
    for (short i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        arr_41 [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_12])) ? (min((((/* implicit */unsigned long long int) var_2)), (4486007441326080ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_38 [i_12])))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12] [(signed char)2] [i_12])))));
        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_12] [i_12]))))) ? (((((/* implicit */_Bool) arr_4 [i_12] [i_12])) ? (arr_3 [i_12]) : (arr_4 [i_12] [i_12]))) : (arr_4 [(short)11] [i_12]));
        var_31 = ((/* implicit */unsigned long long int) arr_7 [i_12] [i_12]);
        /* LoopSeq 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_39 [i_13 - 1])), (arr_27 [i_13 - 1] [(unsigned short)0] [i_12] [i_13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / ((+(((/* implicit */int) (signed char)112))))))) : (arr_25 [(signed char)9] [(signed char)9] [i_13] [i_13]))))));
            var_33 = ((/* implicit */unsigned short) min((arr_7 [i_12] [i_13 - 1]), (((/* implicit */unsigned char) arr_12 [i_12] [i_13 - 1] [5ULL] [i_13 - 1] [i_12] [i_12] [i_12]))));
            var_34 = ((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), (arr_11 [i_12] [i_12] [i_12] [(_Bool)1] [i_12] [i_13])));
        }
        for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            var_35 = (unsigned short)40396;
            var_36 = ((/* implicit */unsigned short) ((576460752236314624ULL) * (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (2199014866944ULL)))));
        }
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))));
}
