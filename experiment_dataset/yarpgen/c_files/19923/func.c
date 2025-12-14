/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19923
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
    var_12 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) ((signed char) var_6)))))) : (((/* implicit */int) var_2)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (var_8)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_2))));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_8))))))));
                        arr_13 [(signed char)5] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((18446744073709551615ULL) >= ((~(var_9)))));
                        var_16 = ((/* implicit */unsigned short) (-(var_7)));
                    }
                } 
            } 
            var_17 ^= ((((/* implicit */int) arr_2 [i_0] [i_1])) >= (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])));
        }
        for (signed char i_4 = 4; i_4 < 8; i_4 += 3) 
        {
            arr_16 [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [(signed char)4] [i_4 - 2] [9ULL] [i_4 + 1])) - (((/* implicit */int) var_6)))) | (((((/* implicit */_Bool) (unsigned short)29375)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (signed char)62))))));
            var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (int i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            arr_19 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_1 [i_0] [(unsigned short)0])) - (((int) arr_5 [i_0]))))));
            var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)208)) ? (var_9) : (var_9))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_3 [i_0] [4] [i_5])))))))), ((+(((int) arr_2 [(signed char)8] [i_5 + 1]))))));
            arr_20 [i_0] [i_5] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_5 - 2] [i_5 - 1] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_5 - 2] [i_5] [2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
            var_20 = ((/* implicit */_Bool) ((int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_5 - 1])) : (((/* implicit */int) var_0))))));
        }
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((signed char) (signed char)-118));
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 2])) | (((/* implicit */int) arr_3 [i_7] [i_6 - 1] [i_7]))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((int) (unsigned char)223)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_0] [5ULL] [i_0] [i_0] [i_0] [8])) : (arr_6 [8ULL] [i_6 - 2] [i_6] [i_6 - 1])))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    {
                        var_25 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((int) arr_31 [i_10] [i_11])))));
                        var_26 = ((/* implicit */int) arr_9 [i_0] [i_11] [i_11 + 1] [i_11 + 1] [i_11]);
                    }
                } 
            } 
        } 
        arr_36 [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))), (((/* implicit */int) max((arr_22 [i_0] [i_0] [i_0]), (arr_22 [i_0] [i_0] [i_0]))))));
        var_27 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_29 [4ULL])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) arr_27 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((arr_24 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 21; i_14 += 1) 
                {
                    for (unsigned char i_15 = 3; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_14] [i_14] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1])) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))))))));
                            var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_44 [i_14 - 1] [i_14] [i_14 - 2])))));
                        }
                    } 
                } 
                arr_47 [i_12] [10] [i_13] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_40 [(signed char)18] [i_12])))));
                var_30 = ((/* implicit */unsigned short) (+((~(618814326)))));
            }
        } 
    } 
}
