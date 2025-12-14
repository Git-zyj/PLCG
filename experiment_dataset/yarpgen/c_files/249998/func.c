/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249998
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
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) ((unsigned short) ((short) 1624969078U)));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            arr_15 [11ULL] [i_1 - 1] [i_2 + 1] [i_0] [i_4] = ((/* implicit */int) var_15);
                            var_21 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_3]);
                            var_22 |= ((/* implicit */unsigned int) var_8);
                            arr_16 [i_3] [i_1] [i_1] [i_3] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) * (var_4)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) ((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                        }
                        /* vectorizable */
                        for (short i_5 = 4; i_5 < 14; i_5 += 3) 
                        {
                            arr_20 [i_1] [i_3] [(short)6] [(signed char)14] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0 - 2])) ? (((/* implicit */int) arr_14 [i_0 - 2])) : (((/* implicit */int) arr_14 [i_0 + 1]))));
                            arr_21 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_0]) + (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) var_16))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
            {
                {
                    var_23 -= ((unsigned int) ((int) arr_25 [i_0] [i_6 + 1] [i_7 + 1] [i_7]));
                    var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((int) var_3)))) ? (((unsigned int) (~(arr_23 [14] [i_6] [i_7])))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_13 [i_0 - 3] [i_0 - 3])) << (((((var_18) + (451163666))) - (18))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_25 += var_16;
                                var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [(_Bool)1] [(short)17] [i_7 + 2] [i_8] [i_0] [i_0 + 1])) ? (arr_11 [(short)1] [15] [3] [i_7 + 1] [i_8] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 - 1] [(unsigned short)10] [i_0] [i_0 + 1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (2669998218U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16792))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_6] [i_7 - 2] [i_8] [i_9])))))) : (((((/* implicit */_Bool) ((long long int) arr_13 [(signed char)12] [(signed char)12]))) ? (arr_29 [i_0] [i_0] [i_9] [i_9] [i_0 - 2] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_7] [i_7])) >> (((((/* implicit */int) arr_18 [i_0 - 3] [i_6] [(short)3] [i_0 - 3] [i_0 - 3])) - (40345))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */short) var_13);
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_1))));
                    arr_41 [i_10] [i_10] [i_12] [i_12] = ((/* implicit */short) (+(((long long int) 1043696457))));
                }
            } 
        } 
    } 
}
