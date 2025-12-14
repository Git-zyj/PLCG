/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197914
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
    var_12 *= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_7)))));
    var_13 = ((/* implicit */long long int) ((int) -3624697207427264317LL));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_3);
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)57653)) ? (max((18234433803918348656ULL), (var_6))) : (((/* implicit */unsigned long long int) (+(var_10)))))) <= (((/* implicit */unsigned long long int) ((-1472246759397821494LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((arr_5 [i_1]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : ((+(arr_4 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15509785593859507663ULL))));
        var_16 = ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            var_17 -= ((/* implicit */_Bool) ((((212310269791202959ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) : (((/* implicit */int) (unsigned char)255))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)142))));
                            arr_18 [i_5] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((_Bool) -1425874373));
                        }
                    } 
                } 
            } 
            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_2 - 3] [i_2] [i_1 - 1] [i_2 - 2] [i_1] [i_1 - 1])) & (((/* implicit */int) arr_15 [i_2 - 1] [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_1 - 1]))));
            var_20 += ((/* implicit */short) ((arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_2 + 1] [i_2]) ? (((/* implicit */int) ((_Bool) arr_4 [i_1 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)232)) || (((/* implicit */_Bool) arr_9 [8] [i_2 + 1])))))));
        }
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (+(var_4));
        arr_22 [i_6] = ((/* implicit */unsigned char) ((((var_3) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)16393))))) : (((/* implicit */int) max(((short)-2), (((/* implicit */short) var_3))))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_11 [i_6 - 1] [i_6]) : (((/* implicit */int) arr_10 [i_6]))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    {
                        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_1)))) : (((/* implicit */int) arr_28 [i_6 - 1] [i_8] [i_9]))))) ? ((((!((_Bool)1))) ? (((unsigned long long int) 5415819789070837702LL)) : (((/* implicit */unsigned long long int) ((long long int) arr_15 [i_6 - 1] [i_7] [i_8] [i_8] [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_6 - 1] [i_7])) && (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) arr_8 [i_8] [i_8]))))))));
                        var_22 = ((/* implicit */short) var_3);
                        var_23 = ((/* implicit */long long int) (short)5177);
                    }
                } 
            } 
        } 
        arr_29 [i_6] = ((((/* implicit */_Bool) ((int) max((var_5), (((/* implicit */long long int) 2147483647)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5806215936065117346ULL)) ? (((/* implicit */unsigned long long int) 859007486)) : (var_9)))) ? (((19ULL) & (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6] [i_6 - 1] [i_6]))))) : (((/* implicit */unsigned long long int) ((1272850295U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)493)))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_11 [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) (+(var_10)))) : (18446744073692774400ULL)));
        arr_34 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_10] [i_10])) ^ (((/* implicit */int) arr_28 [i_10 - 1] [i_10] [i_10 - 1]))))) ? (-9113724719902256824LL) : (arr_4 [i_10 - 1])));
        var_24 = ((((/* implicit */_Bool) arr_6 [i_10] [i_10 - 1])) ? (((/* implicit */int) arr_13 [i_10 - 1] [i_10] [i_10 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_10]))))));
    }
}
