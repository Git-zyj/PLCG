/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232341
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [(signed char)10] [i_1] [(signed char)10] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)60))));
                        var_14 -= ((/* implicit */_Bool) arr_1 [i_0]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_15 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_6] [i_6] [i_0]))));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [(signed char)0] [(signed char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2)))) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_17 -= var_9;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 22; i_7 += 3) 
            {
                var_18 += ((/* implicit */unsigned short) (-(arr_10 [(unsigned char)6] [i_4])));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_7 - 1] [(unsigned short)16])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (_Bool)0))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_4 [i_4] [(short)0]))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(((/* implicit */int) arr_8 [i_0] [i_7 - 2] [i_7 - 2] [i_7 + 1])))))));
            }
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)52)) * (((/* implicit */int) (signed char)113))));
            arr_22 [i_0] = ((/* implicit */int) (+(arr_17 [i_0] [i_4] [i_0] [i_4])));
        }
        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (unsigned char)203))));
            var_24 = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8]))));
            var_25 = ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13877325293609625744ULL)));
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 4) 
            {
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        arr_33 [i_11] [i_10] [i_9] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_0] [(unsigned short)6]))));
                        arr_34 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10 - 1] [i_10]))) : (((((/* implicit */unsigned int) 958953154)) & (arr_0 [i_0] [i_0])))));
                        arr_35 [i_0] [(signed char)0] [i_0] [i_11] = arr_4 [i_10 + 1] [i_11];
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                var_26 -= (~(((/* implicit */int) var_10)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)126))));
                            var_28 += ((/* implicit */_Bool) (+(((/* implicit */int) (short)21378))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (unsigned short)62321))));
                            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_14] [i_14])) ? (13877325293609625744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12] [i_13])))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) * (((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0]))))))));
                arr_45 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_0] [i_9] [i_12] [i_12]))));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                {
                    var_32 &= ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_21 [i_0] [i_15] [i_15] [i_16])) - (51)))))));
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)100))))) : ((~(arr_1 [i_0]))))))));
                    var_34 *= ((/* implicit */unsigned short) (unsigned char)193);
                }
            } 
        } 
        var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_0] [(signed char)18] [(signed char)18] [(signed char)18])) + (((/* implicit */int) (short)4041))))) ? ((-(((/* implicit */int) (short)4041)))) : (((/* implicit */int) arr_36 [i_0]))));
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3321740708U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) : (((/* implicit */int) (signed char)114))));
    var_37 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
}
