/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21010
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) - (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : ((+(((/* implicit */int) (signed char)-96))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-16744)) : (((/* implicit */int) (unsigned char)63))))) ? ((~(((/* implicit */int) (signed char)-77)))) : (((((/* implicit */_Bool) (short)-9240)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) var_2))))));
            arr_6 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)26376)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (arr_3 [i_1] [i_1])))));
            var_12 = ((/* implicit */unsigned int) max((var_12), (((((/* implicit */_Bool) var_7)) ? (arr_5 [12U] [i_1 - 2] [i_1 + 1]) : (arr_5 [(unsigned short)6] [i_1 - 2] [i_1 + 1])))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
    {
        var_13 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_7 [i_2]))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)63)) ? (var_1) : (((/* implicit */long long int) var_8))))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_13 [(short)7])) : (5346590947797712415ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_4 - 3])) == (((/* implicit */int) arr_12 [i_4 - 1] [i_4] [i_4]))));
            }
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_17 [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_16 [i_2 + 1] [i_5]))));
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)22745)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
        }
        var_17 = ((/* implicit */_Bool) ((unsigned int) (signed char)116));
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (_Bool)1);
                var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_6] [i_6]))));
                arr_25 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6] [i_7])) ? (((/* implicit */int) arr_21 [i_6] [i_7])) : (((/* implicit */int) arr_21 [i_7] [i_6]))))) ? (((((/* implicit */int) arr_19 [i_6])) & (((/* implicit */int) arr_19 [i_6])))) : (((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) arr_21 [i_7] [i_6])) : (((/* implicit */int) arr_19 [i_6]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
    {
        var_20 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_19 [i_8 - 1])) ? (((/* implicit */int) arr_19 [i_8 + 1])) : (((/* implicit */int) arr_19 [i_8 + 1])))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_8] [i_8])) || (((/* implicit */_Bool) 5572450001166679189ULL)))))))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        arr_34 [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_8 + 2])) ? (arr_11 [i_8 - 1]) : (arr_11 [i_8 + 2]))));
                        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) arr_2 [i_8 + 2] [i_9]))))) | (arr_29 [i_8 + 1] [i_9] [i_10])))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_6)))) + (2147483647))) << (((((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) & (var_8)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-120)), (var_9)))) : (((/* implicit */int) arr_30 [6] [(signed char)2] [i_10] [(short)11])))) + (75))) - (14)))));
                        var_24 = ((/* implicit */unsigned short) (((-((+(((/* implicit */int) (unsigned short)19031)))))) - (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_25 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (short)-13475)) != (((/* implicit */int) arr_40 [i_9] [i_10] [i_13])))))));
                        var_26 = ((/* implicit */int) var_7);
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_0))));
                        arr_42 [i_13] [i_10] [i_9] [(signed char)10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-120))));
                        var_28 = ((/* implicit */short) ((unsigned short) 7239409121249577733ULL));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */signed char) ((arr_22 [i_14]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8 + 2] [i_8 + 1]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_9] [i_10] [i_14]))) : (3919618786U)))));
                        arr_45 [i_14] [i_9] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) var_0);
                    }
                    var_30 = ((/* implicit */signed char) arr_43 [i_8 + 2] [i_8 - 1]);
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (((((/* implicit */_Bool) arr_3 [i_8 - 1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [i_8] [i_9])))));
                    arr_46 [i_9] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_22 [i_9]))));
                }
            } 
        } 
        arr_47 [i_8] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_1 [i_8 - 1]), (((/* implicit */unsigned char) var_3)))))));
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        arr_52 [i_15] |= ((/* implicit */short) var_3);
        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (arr_23 [i_15] [i_15] [i_15])));
        var_33 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)202))));
    }
    for (unsigned short i_16 = 1; i_16 < 14; i_16 += 3) 
    {
        var_34 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_16 + 1])) << (((((/* implicit */int) arr_48 [i_16 + 1])) - (72)))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_12 [i_16] [i_16] [i_16])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) 2514327998U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)11573))))))) : (arr_13 [i_16 - 1])));
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_16] [i_16] [(unsigned char)6])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
    }
}
