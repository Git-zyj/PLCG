/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45682
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
    var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) (+(((long long int) var_7))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) 1633459375U);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
        arr_4 [(signed char)0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) -3115977536417722119LL))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) var_6);
        var_20 = ((/* implicit */unsigned int) min((var_20), (var_13)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1 + 2]))));
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_8))));
            var_22 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1 - 1]))));
            arr_11 [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) arr_9 [i_1 - 1] [i_2]));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_23 = ((unsigned char) max((((((/* implicit */_Bool) var_16)) ? (arr_9 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) arr_13 [i_3]))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_3] = ((/* implicit */long long int) ((((((arr_13 [(unsigned short)0]) >> (((2722056805U) - (2722056774U))))) >> (((arr_5 [i_3]) - (3903109613U))))) | (((((((/* implicit */_Bool) var_9)) ? (2722056783U) : (1572910513U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-101)))))))));
            arr_17 [i_3] = ((/* implicit */short) ((long long int) var_8));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (var_9) : (var_0)))) ? (arr_8 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4))))))) ? (((/* implicit */long long int) (-(var_5)))) : ((-(arr_9 [13LL] [(unsigned char)4])))));
            arr_18 [4U] [i_4] = ((/* implicit */unsigned char) (+(((var_5) % (2722056783U)))));
        }
        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_25 = (unsigned char)32;
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_6 = 3; i_6 < 12; i_6 += 2) 
            {
                var_26 = (~((-(arr_8 [i_3] [i_5]))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) (+(arr_23 [i_7] [i_7] [i_7])));
                        var_28 += ((/* implicit */long long int) ((arr_25 [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 2] [i_6 - 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 + 2])))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [8U]))) : (var_1)))));
                        var_30 ^= ((/* implicit */signed char) (((~(var_9))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)18)))))));
                    }
                    arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~(var_1)));
                }
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                {
                    var_31 = 2722056798U;
                    var_32 = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_26 [1U] [i_5] [i_5] [i_5] [i_5])))) == (((/* implicit */int) arr_20 [i_3])));
                    var_33 = ((/* implicit */signed char) (~(((/* implicit */int) arr_20 [i_6 + 2]))));
                }
                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((-(var_5))))))));
                var_35 = ((/* implicit */unsigned char) (~(arr_28 [i_6 - 3] [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                var_36 = ((/* implicit */unsigned char) ((var_15) / (arr_29 [i_6 - 3] [i_6 - 3] [i_6 - 1] [i_6] [i_6] [i_6 - 2])));
            }
            for (unsigned char i_10 = 2; i_10 < 12; i_10 += 3) 
            {
                var_37 |= ((/* implicit */unsigned char) (!(arr_21 [i_3])));
                var_38 = ((/* implicit */_Bool) min(((((_Bool)0) ? (arr_29 [i_10 + 2] [i_10 - 1] [i_10 - 1] [4U] [i_10 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))))), ((~(arr_29 [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10] [i_10 - 1] [i_5])))));
            }
            for (unsigned int i_11 = 2; i_11 < 13; i_11 += 1) 
            {
                arr_36 [i_5] [i_5] [i_5] [(unsigned char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) 2722056783U))))) ? ((+(((/* implicit */int) arr_35 [i_11 - 2] [i_5])))) : ((-(((/* implicit */int) arr_35 [i_11 + 1] [i_5]))))));
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (((_Bool)0) && (arr_12 [i_3]))))));
                arr_37 [i_11 - 2] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) var_6);
                var_40 = ((short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_3))))) / (max((var_2), (arr_5 [i_3])))));
                arr_38 [i_11 + 1] [i_11 + 1] [i_11] [i_11] = ((/* implicit */unsigned int) var_8);
            }
            var_41 |= ((/* implicit */signed char) var_15);
        }
        var_42 = ((/* implicit */unsigned char) max(((-(2722056803U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
    }
}
