/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216690
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (var_7))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) var_0);
                    var_20 &= ((unsigned short) ((unsigned short) arr_0 [i_0]));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((long long int) 17592181850112ULL))) : (var_17)))) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_3 + 1])) : (((/* implicit */int) ((unsigned short) arr_3 [i_3] [i_3] [i_0])))));
            var_22 = ((/* implicit */_Bool) var_9);
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) var_10))))) ^ (((17592181850112ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11054)))))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_3 - 1])) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1])) : (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_15)))))) : (((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_15)))) | (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_0]))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((((/* implicit */int) var_9)) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((long long int) var_12))))) ? (((((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_4]))) ^ (((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (((/* implicit */int) arr_2 [i_4 + 2])) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_12)))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) ((_Bool) var_4));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_7] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_0] [i_4 + 2] [i_5 - 1] [i_6]));
                            var_26 = ((/* implicit */_Bool) ((((arr_16 [i_0 - 2] [i_4 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_2 [i_0 - 1])))))))) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_7])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_2 [i_0 - 2])))))) <= (((arr_10 [i_0 + 2] [i_4 + 1] [i_5 + 1]) * (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)3] [i_6] [i_4] [i_0]))))))))));
                        }
                        var_27 = ((/* implicit */long long int) ((unsigned short) var_0));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) var_8);
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_29 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_5 [(signed char)16] [(signed char)16] [i_0 + 2] [i_0 - 2])))) : (((/* implicit */int) arr_11 [i_8] [i_8] [i_8])))));
            var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0 + 1] [i_8] [i_0 + 1])) * (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_8]))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_12 [i_0] [i_8] [i_8])))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))))));
        }
        arr_25 [i_0] [i_0] = ((_Bool) arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_28 [i_9] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_9 [i_9])) - (((/* implicit */int) arr_9 [i_9])))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) ((_Bool) arr_17 [i_11] [(short)8] [i_9])))))) / (((((/* implicit */int) var_6)) >> (((arr_10 [i_11] [i_10] [i_9]) - (5458620333963777000LL))))))))));
                    arr_35 [i_9] = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        var_32 -= ((/* implicit */long long int) arr_13 [i_12] [i_9] [i_11] [(signed char)12]);
                        arr_40 [i_9] = ((/* implicit */unsigned char) arr_34 [i_11] [i_11] [i_9] [i_12]);
                    }
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) var_4);
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) var_15)))));
    /* LoopNest 3 */
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        for (unsigned char i_14 = 2; i_14 < 8; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    var_35 = arr_48 [i_14 - 1] [i_14 + 2] [i_13];
                    arr_49 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_14] [i_13] [i_15])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_13] [i_14] [i_15] [i_15]))))) ? (((/* implicit */int) arr_13 [i_13] [i_13] [i_14 + 1] [i_13])) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((unsigned char) var_5)))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 7; i_16 += 3) 
                    {
                        for (signed char i_17 = 4; i_17 < 9; i_17 += 4) 
                        {
                            {
                                var_36 |= ((/* implicit */signed char) arr_9 [i_13]);
                                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)32002))))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_14 + 1] [i_16 + 1] [i_17 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_13] [(unsigned char)3] [i_15] [7LL])) | (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_46 [i_16 + 3] [i_13] [(unsigned char)4])) : (((/* implicit */int) arr_48 [i_17 - 3] [i_14 - 1] [i_14 - 1]))))));
                                var_38 = ((/* implicit */signed char) ((0ULL) < (((((/* implicit */_Bool) 18446726481527701504ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (16206919473841361171ULL)))));
                                var_39 = ((/* implicit */unsigned char) arr_18 [i_13] [(signed char)16] [(signed char)6] [i_13] [i_14 + 2]);
                                var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_14 + 2] [i_16 + 1])) - (((((/* implicit */_Bool) arr_41 [i_14 + 2] [i_16 + 1])) ? (((/* implicit */int) arr_41 [i_14 - 1] [i_16 + 2])) : (((/* implicit */int) arr_41 [i_14 - 1] [i_16 + 2]))))));
                            }
                        } 
                    } 
                    arr_55 [i_13] [i_14 - 1] [i_13] [i_14 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [18ULL] [i_13] [i_14 + 2] [i_13])) ? (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-9045694934705019608LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_14] [i_14] [i_15] [i_14 + 1] [i_14 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    } 
}
