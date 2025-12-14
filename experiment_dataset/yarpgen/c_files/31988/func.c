/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31988
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
    var_17 = min(((unsigned short)30394), (((/* implicit */unsigned short) (signed char)105)));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)30394)), (4294967283U)))) && (((((/* implicit */_Bool) (unsigned short)30394)) && (((/* implicit */_Bool) var_13))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) >> (((int) (!(arr_1 [19U])))))))));
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((short) 654289370)))))), ((short)5556)));
        var_20 += ((/* implicit */unsigned int) (unsigned char)114);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_21 = ((/* implicit */int) arr_1 [i_0]);
            arr_7 [i_0] [15U] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (signed char)-96))))));
            var_22 |= ((/* implicit */unsigned int) (signed char)83);
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0)) & ((~(18446744073709551608ULL))))))));
                        arr_16 [i_0] [i_2] [i_3 - 3] [i_2] [i_2] [i_2] = arr_3 [i_0];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_21 [i_2] [i_5] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (arr_18 [i_6] [i_6] [i_6])));
                        arr_22 [i_2] [(_Bool)1] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)65520)) % (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_14))));
                    }
                } 
            } 
            var_24 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1)) ? (2605450760U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) << ((+(((/* implicit */int) (unsigned short)12))))));
            arr_23 [i_0] [i_2] = (unsigned short)0;
            var_25 -= ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 3; i_7 < 20; i_7 += 3) 
    {
        var_26 = (~(((/* implicit */int) (unsigned char)136)));
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 21; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_32 [i_7] [i_10] [i_9] [i_8 - 1] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned long long int) arr_27 [(short)20] [i_9] [i_7]));
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)5535))));
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)30379)) >= (((/* implicit */int) (unsigned short)3635)))) ? (((268435455U) >> (((18446744073709551608ULL) - (18446744073709551600ULL))))) : (((/* implicit */unsigned int) 1784583550))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned short)40990))));
                    }
                } 
            } 
        } 
        arr_33 [i_7] = ((/* implicit */unsigned short) var_12);
    }
    for (int i_11 = 4; i_11 < 13; i_11 += 2) 
    {
        var_30 = ((/* implicit */unsigned int) (-((~(((var_4) ? (((/* implicit */int) (short)5564)) : (((/* implicit */int) arr_3 [(signed char)9]))))))));
        arr_36 [i_11] = ((/* implicit */int) max(((unsigned short)65520), (((/* implicit */unsigned short) (_Bool)1))));
    }
}
