/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203713
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 1]))));
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 1]);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */int) ((269332341U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 2])))));
                var_17 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (269332342U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
            }
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
            {
                arr_11 [i_3] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) == (arr_8 [i_0 - 2] [i_0 - 3])));
                arr_12 [i_0 - 3] [i_0 - 3] [i_0] &= ((/* implicit */int) (-(arr_8 [i_0 - 3] [i_0 - 2])));
                arr_13 [i_1] [14U] = ((/* implicit */unsigned int) (unsigned char)153);
            }
            var_18 = ((/* implicit */signed char) arr_10 [i_0 + 1] [i_0 - 3] [i_0 - 1]);
            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) arr_10 [i_0 - 1] [(unsigned short)16] [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) >= (((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) var_7))))));
        }
        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            arr_18 [i_0 - 3] [(unsigned short)11] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_0 - 3] [i_0 - 3]))));
            var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 2]))) % (var_5)))));
            /* LoopNest 2 */
            for (signed char i_5 = 4; i_5 < 14; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    {
                        var_21 += ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)11] [i_5 - 4]))))))) : (14637965253204727900ULL));
                        var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 + 2]))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) var_3);
        }
    }
    for (unsigned short i_7 = 3; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */unsigned char) var_10);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)153))))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_25 [i_7] [i_7 - 1])), (var_6))))))))))));
    }
    for (unsigned short i_8 = 3; i_8 < 16; i_8 += 3) /* same iter space */
    {
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_8 - 3]))));
        arr_33 [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_8 - 2] [i_8] [i_8 - 1])) ? (((/* implicit */int) arr_4 [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_4 [i_8 - 3] [i_8 - 1]))))), ((+(4294967295U)))));
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_27 [i_8] [i_8 - 1])) ? ((~(((/* implicit */int) arr_6 [i_8] [i_8] [i_8])))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_17 [i_8] [i_9])) : (((/* implicit */int) var_10)))))), ((-(((/* implicit */int) arr_6 [i_8 + 1] [i_8 - 3] [i_8 + 1]))))));
            arr_36 [i_8] [i_9] = ((/* implicit */long long int) ((((((/* implicit */long long int) (+(arr_21 [i_8])))) <= (max((((/* implicit */long long int) arr_0 [i_8])), (-1LL))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8]))) ^ (arr_3 [i_8] [i_8]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1843403852U)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_16 [i_8] [i_8] [i_8])))) : (((/* implicit */int) var_11)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            arr_40 [i_8] = ((/* implicit */short) arr_22 [(_Bool)1] [i_8] [i_10]);
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_37 [i_10]))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 1) 
        {
            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) 964399099191047249ULL)) ? (((/* implicit */int) arr_5 [i_8 + 1] [i_8 - 1])) : (((/* implicit */int) arr_5 [i_8 + 1] [i_8 - 1]))));
            var_28 &= ((/* implicit */unsigned short) arr_25 [i_8 + 1] [i_8 - 3]);
        }
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 1; i_12 < 7; i_12 += 4) 
    {
        var_29 += ((/* implicit */unsigned long long int) (+(0LL)));
        var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_12 - 1] [i_12 + 3])) && (((/* implicit */_Bool) arr_3 [i_12 - 1] [i_12 + 3])))) ? (((((/* implicit */_Bool) arr_3 [i_12 - 1] [i_12 + 3])) ? (arr_3 [i_12 - 1] [i_12 + 3]) : (arr_3 [i_12 - 1] [i_12 + 3]))) : (max((arr_3 [i_12 - 1] [i_12 + 3]), (((/* implicit */unsigned int) (unsigned short)3069))))));
    }
    /* vectorizable */
    for (signed char i_13 = 2; i_13 < 17; i_13 += 3) 
    {
        arr_49 [i_13] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_48 [i_13 - 2]))));
        var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */int) arr_47 [i_13 + 1])) << (((((/* implicit */int) arr_47 [i_13 + 1])) - (57)))))));
        arr_50 [i_13] = ((/* implicit */unsigned short) (_Bool)1);
        var_32 = ((((/* implicit */_Bool) arr_48 [i_13 - 2])) ? (((/* implicit */int) arr_48 [i_13 - 2])) : (((/* implicit */int) arr_48 [i_13 - 2])));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */int) arr_47 [i_13 + 1])) : (((/* implicit */int) arr_47 [i_13 - 1]))));
    }
    var_34 = ((/* implicit */unsigned char) var_11);
    var_35 = ((/* implicit */unsigned long long int) min((var_35), (max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (var_1))))) : ((-(var_5))))), (((/* implicit */unsigned long long int) 4294967295U))))));
    var_36 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (((((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4))) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
