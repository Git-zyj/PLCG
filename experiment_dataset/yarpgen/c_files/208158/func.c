/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208158
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
    var_12 = ((/* implicit */signed char) min((var_12), (((signed char) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_13 = -3099616987293621837LL;
            var_14 -= ((/* implicit */long long int) (-(4294967295U)));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                var_15 = ((/* implicit */int) var_6);
                arr_7 [i_0] [i_0] [i_0] [(short)5] = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)17980));
                var_16 = ((/* implicit */short) ((signed char) arr_6 [(_Bool)0] [i_1 + 1] [(_Bool)0]));
                var_17 = ((/* implicit */unsigned int) arr_3 [i_2]);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [(unsigned short)7] = ((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [i_1] [i_0] [i_1 + 4] [i_3])) ? (6107622178300201835ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3] [i_3]))));
                            arr_18 [i_0] [i_0] [6ULL] [(unsigned char)9] [i_0] = ((/* implicit */long long int) ((signed char) 3597481248085074550ULL));
                        }
                    } 
                } 
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_20 = ((/* implicit */unsigned short) ((((_Bool) var_6)) ? (arr_19 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1] [i_1])))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            }
        }
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    arr_29 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)250)) >> (((arr_21 [i_8] [i_0]) - (2066475215)))));
                    var_22 += ((/* implicit */signed char) arr_20 [i_8] [i_8] [i_7] [i_0]);
                    var_23 &= ((/* implicit */short) var_7);
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)31))) ? ((~(arr_19 [i_0] [4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [(signed char)13] [(_Bool)1] [(_Bool)1]))))));
        var_25 = ((/* implicit */unsigned long long int) (-(arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0])));
        var_26 = ((/* implicit */unsigned int) arr_27 [i_0] [i_0] [15ULL] [i_0]);
    }
    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            {
                                arr_44 [i_9] [(signed char)11] [(signed char)11] [(unsigned char)9] [i_12] [i_13] = ((/* implicit */unsigned long long int) arr_40 [i_13] [i_9] [i_11] [i_10] [i_9]);
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967295U)))))));
                                var_28 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_11])), (var_8))))) | (((((/* implicit */_Bool) arr_39 [i_9] [i_10] [i_11] [i_12] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11] [i_11] [i_11] [i_11] [i_11]))) : (arr_34 [i_10] [i_12] [i_13])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) var_10);
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [(short)0])) : (((/* implicit */int) (unsigned short)25545)))))) ? (((unsigned long long int) (~(((/* implicit */int) arr_39 [15U] [(unsigned short)17] [(unsigned short)17] [i_9] [i_9]))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_9] [i_9] [(short)17] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25514)))))));
        var_31 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_9]))) ^ (12339121895409349793ULL)))));
    }
    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        var_32 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_14])) & (((/* implicit */int) arr_3 [i_14]))))), (((((/* implicit */long long int) 965276849U)) | (536870911LL)))));
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-69)) + (2147483647))) >> (((4294967292U) - (4294967267U))))))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_14] [2U] [i_14] [i_14])) || (((/* implicit */_Bool) ((long long int) (unsigned short)65408)))));
        var_35 = ((/* implicit */short) ((((_Bool) 1109953911U)) ? (((((/* implicit */_Bool) min((arr_12 [i_14] [i_14] [i_14] [i_14]), (arr_16 [i_14] [i_14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8810)) ? (((/* implicit */int) arr_27 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_30 [i_14]))))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_25 [i_14] [i_14] [(unsigned char)9] [(unsigned char)9]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_14])) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */int) arr_45 [i_14] [3ULL])) >> (((3185013362U) - (3185013355U))))))))));
    }
}
