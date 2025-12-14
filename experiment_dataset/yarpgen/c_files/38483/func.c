/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38483
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((unsigned int) ((var_10) ^ ((-2147483647 - 1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_11 [11U] [i_4 + 1] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max(((short)32748), (((/* implicit */short) (unsigned char)223))))), (0ULL)))) ? ((-(((((/* implicit */int) (short)-32515)) / (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_1))));
                                arr_12 [i_3] [i_3] [i_0] [i_3] [i_1] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-32540))));
                                arr_13 [i_1] [i_3] [i_2] [i_2] [i_1] [6] [i_1] = ((/* implicit */long long int) 13ULL);
                                arr_14 [i_0] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) max((18446744073709551615ULL), (8955006353945857109ULL)))) ? (((/* implicit */int) max(((unsigned short)52953), (((/* implicit */unsigned short) (!(var_2))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (min((((/* implicit */unsigned short) (_Bool)1)), (var_3))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_0)) : (var_10)));
                    var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_0), (var_0)))) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_23 [i_5] [i_6] = ((/* implicit */int) ((unsigned short) var_0));
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9491737719763694521ULL))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (int i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 173890418U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-6826))) * (57146562U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3)))));
                            arr_32 [i_5] [i_6] [i_6] [2LL] [(short)8] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 8955006353945857085ULL)) && (((/* implicit */_Bool) -1785833796)))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8955006353945857094ULL)) && (((/* implicit */_Bool) var_8))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 13ULL)) || (((/* implicit */_Bool) (short)-5816))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13ULL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) -241881329)))) < (((/* implicit */unsigned long long int) -20LL)))))));
        }
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            arr_35 [0U] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)5401)))))) >= (var_12)));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 22; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (unsigned short)14565);
                            arr_42 [i_12] [i_12] [i_11] [i_10] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) 18446744073709551611ULL)) ? (8955006353945857107ULL) : (7617908010325079419ULL)))));
                            arr_43 [i_12] [i_12] = ((/* implicit */unsigned short) (-((-(var_12)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (9491737719763694509ULL)))) ? (8955006353945857094ULL) : (((/* implicit */unsigned long long int) ((816212526) << (((18446744073709551615ULL) - (18446744073709551615ULL)))))))))));
            arr_47 [(signed char)5] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            var_23 = ((8955006353945857094ULL) << (((((((((/* implicit */int) var_0)) + (2147483647))) >> (((4194272) - (4194257))))) - (65500))));
            var_24 = ((/* implicit */short) var_10);
        }
        for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            arr_50 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) var_4))));
            var_25 -= ((/* implicit */unsigned long long int) (unsigned char)194);
            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
            arr_51 [i_15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
        }
        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) || (((/* implicit */_Bool) 12ULL))));
    }
    var_28 = ((int) (short)29016);
}
