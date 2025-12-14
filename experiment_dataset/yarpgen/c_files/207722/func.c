/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207722
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
    var_19 = ((/* implicit */unsigned char) (~(var_4)));
    var_20 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_21 += (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 3])));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned char) (~(var_3)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1 - 1] [i_2] [i_3 - 2] [i_4] [i_0 - 1] [i_4 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-22534))));
                                var_23 = ((/* implicit */unsigned short) ((int) arr_2 [i_1 - 1] [i_2]));
                                var_24 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56))));
                                arr_13 [i_0] [i_1] [i_2] [(signed char)1] [i_4] |= ((/* implicit */long long int) ((unsigned char) arr_0 [i_0 + 2]));
                                var_25 = ((/* implicit */signed char) ((unsigned short) var_10));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5] [i_5])))))));
        var_26 *= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) -6077175682607848480LL)))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            arr_28 [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)35))));
                            var_27 ^= ((/* implicit */signed char) (~((~(arr_4 [14U])))));
                            var_28 *= ((/* implicit */unsigned char) ((short) -1563149622260770766LL));
                            arr_29 [(_Bool)1] = ((/* implicit */signed char) (-(-1903611425)));
                            var_29 *= ((/* implicit */signed char) (-(1919621940)));
                        }
                        for (int i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            arr_34 [i_10] [i_10 + 1] [i_10] [(unsigned char)0] [i_10 + 3] = ((/* implicit */signed char) ((long long int) ((unsigned long long int) (-(((/* implicit */int) (unsigned short)62219))))));
                            arr_35 [(unsigned short)6] [i_6] [i_7] [i_8] [i_10 + 3] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) var_10)))));
                            var_30 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_14)))));
                        }
                        arr_36 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 22; i_11 += 3) 
                        {
                            arr_40 [i_5] [i_6] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            arr_41 [i_5] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(6929725819921147010LL))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 1; i_12 < 22; i_12 += 2) 
                        {
                            arr_44 [i_5] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1563149622260770739LL))));
                            arr_45 [i_5] [i_6] [i_7] [i_8] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                            arr_46 [i_5] [5] [i_6] [i_7] [(signed char)15] [i_8] [(short)5] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                        }
                        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned short)44365)))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 3) 
    {
        for (long long int i_14 = 2; i_14 < 17; i_14 += 1) 
        {
            {
                var_32 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_19 [i_13])))));
                arr_53 [(unsigned short)8] [i_13] [(signed char)0] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_38 [i_13 + 3] [i_14 + 1] [i_14 - 1] [i_14] [i_14] [i_13 + 1] [i_14])))));
            }
        } 
    } 
}
