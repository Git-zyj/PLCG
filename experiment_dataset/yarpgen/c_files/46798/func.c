/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46798
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
    var_16 ^= ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((int) var_12);
            arr_7 [i_0] [9] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) var_0)) << (((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((/* implicit */short) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_4 [i_0] [i_1])) - (29))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0])) << (((arr_3 [i_1] [i_0]) - (1473455559U)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((arr_3 [i_2] [i_2]) * (arr_3 [i_0] [i_1]))))));
                            arr_17 [i_0] [(unsigned char)2] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [(unsigned char)3])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) ((_Bool) arr_0 [6U])))));
                            var_19 = ((/* implicit */signed char) arr_11 [i_3] [i_2] [(unsigned char)3] [(unsigned char)6]);
                            arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (arr_5 [i_2] [i_4])));
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                        }
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [(unsigned short)4] [i_3])) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_1]))));
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_1 [1U])) : (var_1))))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [i_1] [i_0])));
                        arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (var_6))))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_23 [i_0] = ((/* implicit */int) (~(arr_20 [(_Bool)1])));
            arr_24 [i_0] [i_5] [i_0] = ((/* implicit */int) arr_15 [i_5] [i_5] [i_0] [i_0] [i_0]);
        }
        var_24 = ((/* implicit */short) var_7);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 2; i_8 < 23; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        arr_38 [i_6] [i_7] [i_7] [i_6] = arr_27 [i_6] [i_6];
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [i_6] [i_6 + 1] [i_6]))));
                    }
                } 
            } 
            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [(_Bool)1] [(unsigned char)4] [i_7])) ? (((var_1) << (((((/* implicit */int) var_4)) - (203))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [(unsigned char)10] [(_Bool)1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)76)))))));
            arr_39 [i_7] [i_6] = ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_27 [i_6] [i_6 + 1])));
            var_27 = ((/* implicit */signed char) (unsigned char)12);
        }
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            arr_43 [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) -876243923))));
            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_0))));
        }
        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    {
                        arr_52 [i_13] [i_11] [i_6] [i_13] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))));
                        arr_53 [i_6] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_29 [i_6])) : (((/* implicit */int) var_7))));
                        var_29 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6] [i_11] [10U] [i_11] [10U]))) : (3844374284752961711ULL)))));
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_33 [11U] [i_11]))));
            arr_54 [i_6] [i_6] = ((unsigned short) arr_41 [i_6 + 1]);
        }
        arr_55 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -876243926)) && (((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) var_9))));
        var_31 = ((/* implicit */unsigned short) (+((+(-472055069)))));
        arr_56 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 675044971U)) ? (((/* implicit */int) arr_33 [1] [i_6 + 1])) : (((/* implicit */int) arr_36 [(signed char)23] [i_6 + 1] [(_Bool)1] [i_6 + 1] [i_6]))))) || (((((/* implicit */_Bool) arr_51 [i_6 + 1] [i_6 + 1] [i_6])) && (((/* implicit */_Bool) var_10))))));
    }
    var_32 *= ((/* implicit */unsigned int) var_15);
}
