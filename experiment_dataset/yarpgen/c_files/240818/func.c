/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240818
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((int) var_3));
                        arr_14 [i_1] [(unsigned char)21] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_9 [i_1] [i_1])))));
                        var_20 = ((/* implicit */_Bool) (+(min(((+(var_2))), (((/* implicit */long long int) (short)7287))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_18 [i_4] [i_4] [i_4] [i_1] [i_4] [i_4] = var_14;
                            var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 - 2] [i_4])) ? (var_13) : (((/* implicit */int) var_5))));
                            arr_19 [i_0 - 3] [i_1] [8] [i_0] [i_4] = ((/* implicit */int) ((var_0) >= (((/* implicit */int) arr_3 [i_1] [i_1]))));
                            var_22 *= ((/* implicit */unsigned char) arr_3 [i_2] [i_2]);
                        }
                        arr_20 [i_1] [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned int) min((4294967295LL), (((/* implicit */long long int) (signed char)91))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (unsigned char)8);
                        arr_24 [i_1] = ((/* implicit */unsigned int) (!(arr_21 [i_1 + 1] [i_1] [i_1 - 3] [i_1 + 1] [6U] [i_1 - 3])));
                        arr_25 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)8))));
                        arr_26 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                        var_23 = ((signed char) (-(((/* implicit */int) (_Bool)0))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                        {
                            arr_33 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
                            arr_34 [i_0 + 1] [i_1] [i_1] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-84))));
                            arr_35 [i_1 - 2] [i_2] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >> (((/* implicit */int) (signed char)1))));
                        }
                        for (signed char i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                        {
                            arr_38 [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_9))));
                            arr_39 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) arr_12 [i_0 - 4] [i_2] [i_6]);
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                        {
                            var_24 *= ((/* implicit */unsigned char) (+(-4294967296LL)));
                            arr_44 [i_0] [i_1] [6LL] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_9] [i_9] [i_9] [i_9]))));
                        }
                        arr_45 [i_1] = ((short) 4294967296LL);
                        var_25 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((arr_28 [i_0 + 1] [i_1] [i_0 - 2] [i_1 + 1]) << (((arr_31 [i_1] [i_0 - 2] [i_0 - 4] [i_1 - 3]) + (1428761898)))))) : (((/* implicit */long long int) ((arr_28 [i_0 + 1] [i_1] [i_0 - 2] [i_1 + 1]) << (((((arr_31 [i_1] [i_0 - 2] [i_0 - 4] [i_1 - 3]) + (1428761898))) - (1312630407))))));
                    }
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        arr_48 [i_2] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) ((int) arr_16 [i_0] [i_0] [i_0 - 3] [i_0] [i_1] [i_1] [i_1 - 1]));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)63)) >> (((4725565997061523196LL) - (4725565997061523195LL)))));
                        arr_49 [i_1] [i_1] [i_2] [(unsigned char)20] [2] = (+(arr_4 [i_0 - 4] [i_1]));
                    }
                    var_27 = ((/* implicit */short) (-((-(((/* implicit */int) var_5))))));
                    var_28 -= ((/* implicit */int) var_5);
                }
            } 
        } 
    } 
}
