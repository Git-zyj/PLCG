/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220907
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
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)11318), (var_9))))) | (((((/* implicit */_Bool) 2280848938U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_3)))))) > (((long long int) -8379710511662908180LL))));
    var_17 = ((/* implicit */short) (~(-1099754167)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_18 += ((/* implicit */unsigned long long int) (unsigned char)27);
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)56)) << (((229334494U) - (229334470U))))))));
            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2]))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5220412545083574710ULL)) ? (((/* implicit */long long int) 1322797937U)) : (var_13)));
            var_22 = (+(((/* implicit */int) arr_8 [i_0 + 1])));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_10))));
        }
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_14 [i_0] [i_0 + 1] = ((/* implicit */_Bool) var_12);
            var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) 8379710511662908191LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0] [i_0])))))) : (((long long int) var_13))));
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_25 = ((/* implicit */unsigned int) arr_16 [i_4]);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) (signed char)127))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_27 ^= ((/* implicit */long long int) ((signed char) arr_19 [i_6] [i_6]));
                var_28 += ((/* implicit */unsigned char) (((+(((/* implicit */int) var_2)))) > (((/* implicit */int) (!(var_2))))));
            }
            for (int i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                arr_23 [(short)1] [i_5] [i_4] [(short)19] = ((/* implicit */signed char) ((unsigned int) arr_20 [i_7] [i_7 - 1] [i_7 + 1]));
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (signed char)34))))))));
                arr_24 [i_4] [22U] [i_5] [i_7 - 3] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7 - 2] [i_7 + 1] [i_7 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_22 [i_7] [6LL] [i_7 + 1] [i_7 - 1]))));
                arr_25 [(unsigned short)6] [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_4] [(_Bool)1] [i_4] [i_7 + 1])) + (((/* implicit */int) (unsigned short)58259))));
            }
        }
        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 4) 
        {
            var_30 |= ((/* implicit */unsigned short) 2972169359U);
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_4] [i_8 + 1])) & (((/* implicit */int) var_0)))))));
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [12] [i_8 + 1] [i_8 - 1])))))));
            /* LoopSeq 2 */
            for (long long int i_9 = 1; i_9 < 22; i_9 += 2) 
            {
                var_33 = ((/* implicit */_Bool) 67108863LL);
                arr_31 [18ULL] [i_4] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_8 - 1] [i_8 - 2]))));
                arr_32 [i_4] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_18 [i_4]))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_13)))))));
            }
            for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_35 = (+(((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11]))) : (-5094265233669346237LL))));
                    arr_39 [4] [4] [i_4] [(short)16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4]))));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (-(((/* implicit */int) var_11)))))));
                }
                var_37 = ((/* implicit */short) var_1);
            }
        }
        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_42 [i_4] [i_12] = ((/* implicit */int) ((unsigned char) var_5));
            arr_43 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (var_8)));
            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))));
            var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 5997517439377869550ULL))));
        }
        for (short i_13 = 2; i_13 < 20; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 1) 
            {
                var_40 |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_30 [i_13] [i_13] [i_13 - 1] [i_13])) - (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_15 [i_13 + 1] [i_13]))));
                arr_52 [i_4] [i_13] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_4] [i_4] [i_14]))));
                arr_53 [i_4] [i_4] [i_4] [i_14] = ((/* implicit */unsigned int) var_12);
                arr_54 [i_4] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))));
            }
            arr_55 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */int) arr_35 [i_4] [i_13] [i_4] [i_13 + 2] [5] [i_13 - 2])) : ((~(6))));
            var_41 = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_4] [i_13 - 1]))));
            arr_56 [i_4] [i_4] = ((/* implicit */short) (+(arr_33 [i_4] [i_13 - 2] [i_13 + 1])));
        }
        /* LoopSeq 3 */
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            arr_60 [i_15] [i_4] [1U] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_21 [i_4] [i_15]))))));
            arr_61 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (~(arr_45 [i_4])));
        }
        for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((short) (_Bool)0)))));
            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (~(var_14))))));
            var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_59 [i_4])))));
            arr_66 [i_4] [i_4] [(signed char)18] = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
            var_45 -= ((/* implicit */_Bool) arr_57 [i_4] [i_4] [16]);
        }
        for (unsigned int i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            arr_70 [i_4] = ((/* implicit */long long int) arr_46 [i_4]);
            arr_71 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_49 [i_4] [i_17] [i_4] [i_4])) : (var_14)));
            arr_72 [i_4] [i_4] [1LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_30 [i_17] [i_17] [i_17] [i_17]))));
        }
    }
}
