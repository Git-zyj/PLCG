/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39326
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3] [15ULL] [i_0]))));
                            var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1154250216U)) ? (((((3285853291843982902LL) & (((/* implicit */long long int) 1154250214U)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 9371760185789071900ULL)) ? (var_14) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))))) : (((((/* implicit */long long int) ((unsigned int) var_13))) & (min((72057594037927904LL), (((/* implicit */long long int) 1001655978U))))))));
                            var_19 |= ((/* implicit */_Bool) (-(3140717075U)));
                        }
                    } 
                } 
            } 
            var_20 |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_0] [0U] [0U] [0U] [(_Bool)1]))));
            var_21 = ((/* implicit */unsigned int) ((unsigned short) arr_9 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]));
            arr_12 [i_0] [i_1] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) ((unsigned char) 12175533434385213919ULL))) >= (((/* implicit */int) (unsigned short)12362)))));
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                var_23 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 6271210639324337696ULL)) ? (6271210639324337696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) (signed char)-60)) ? (12175533434385213915ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (12175533434385213919ULL)))));
            }
            var_24 = ((/* implicit */unsigned int) (-(min(((-(9223372036854775807LL))), (((/* implicit */long long int) arr_18 [i_0]))))));
            var_25 = ((/* implicit */signed char) max((3293311317U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5] [i_5] [i_0])) + (((/* implicit */int) var_2)))))));
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) >= (((((/* implicit */_Bool) arr_16 [i_8 - 1] [i_7 - 1])) ? (arr_16 [i_8 - 2] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1])) ^ (((/* implicit */int) arr_28 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [1] [i_7 - 1]))))), (arr_22 [i_7] [i_7 - 1])));
                                var_28 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) arr_13 [12] [i_12]);
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 12175533434385213920ULL)) ? (((/* implicit */int) (unsigned short)19685)) : (((/* implicit */int) arr_27 [9ULL] [i_11] [i_7 - 1] [i_7] [i_7 - 1] [i_0] [i_0]))));
                                var_31 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_32 -= ((/* implicit */signed char) ((arr_31 [i_0] [(short)4] [i_0] [i_0]) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [(signed char)3] [i_14] [i_13]))))) ? (((/* implicit */int) arr_19 [i_14 + 1])) : (((/* implicit */int) arr_40 [i_14 - 2] [i_14] [i_14 + 1]))));
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_13])) && (((/* implicit */_Bool) (signed char)0))))))))));
                    arr_43 [i_13] [i_15] = ((/* implicit */unsigned long long int) arr_13 [i_13] [i_14]);
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_13]))) : (1001655978U)))) > (((((/* implicit */_Bool) -648113758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_13] [i_13] [i_13] [i_13] [i_13]))) : (arr_9 [i_13] [(short)4] [i_14] [i_14 - 2] [i_13] [i_14 - 2])))));
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13]))) <= (((1358110233993343106ULL) ^ (4194303ULL)))));
    }
    var_37 = ((/* implicit */unsigned char) var_14);
    var_38 -= ((/* implicit */unsigned long long int) ((signed char) var_1));
    var_39 -= ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 3 */
    for (unsigned int i_16 = 3; i_16 < 7; i_16 += 2) 
    {
        for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        for (short i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */short) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_16] [i_17] [i_16] [i_19] [i_19] [(unsigned char)1]))) % (arr_36 [i_19])))))));
                                var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_16 + 2])) + (((/* implicit */int) arr_4 [i_16 + 1]))))))))));
                                var_42 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_30 [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 15766666516339853322ULL))))) - (23833)))));
                                var_43 -= ((/* implicit */_Bool) (signed char)75);
                                arr_57 [i_16] [i_16] [i_18] [i_19] [i_18] = ((/* implicit */unsigned short) 2822404768U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_21 = 1; i_21 < 7; i_21 += 3) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 11; i_22 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */_Bool) arr_28 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]);
                                var_45 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_16] [i_17] [i_18] [i_16] [(unsigned char)8] [i_16])) ? (arr_11 [i_16] [i_16] [i_16]) : (((((/* implicit */unsigned long long int) 1001655975U)) | (arr_16 [6U] [i_22])))))) ? (min((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14783))) : (15076700187633076082ULL))), (((/* implicit */unsigned long long int) -9223372036854775799LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */int) max((var_8), (var_4)));
                }
            } 
        } 
    } 
}
