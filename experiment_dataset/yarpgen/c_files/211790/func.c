/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211790
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((max((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) (signed char)6))))))));
        var_15 *= arr_2 [(signed char)6] [i_0];
        arr_3 [9U] = ((/* implicit */unsigned char) 16165266105404504307ULL);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [6ULL] [6ULL]))))) ? (((/* implicit */int) ((short) var_8))) : ((-(((/* implicit */int) arr_4 [i_1] [i_1]))))));
        var_17 |= ((_Bool) arr_5 [i_1]);
        arr_6 [i_1] = ((/* implicit */signed char) (+(((long long int) -759709294))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_17 [i_3] = ((/* implicit */short) var_13);
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        arr_22 [i_2] [i_3] [i_3 + 2] [i_5] [i_3 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_12 [i_3]))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (-759709294))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_18 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))) : (arr_23 [1ULL] [i_5] [i_4] [i_3 + 2] [i_2]));
                            arr_25 [i_3] [i_3] [i_4] [i_5 + 2] [i_6] = -759709300;
                        }
                    }
                    for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_19 += ((/* implicit */unsigned long long int) ((unsigned char) arr_16 [(unsigned char)21] [i_2] [i_7 - 1] [i_7 - 1]));
                            arr_31 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_20 [i_7 - 1] [i_3]))));
                        }
                        arr_32 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_3] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (var_3)))));
                        arr_33 [i_2] [i_3] [(signed char)14] [i_7] [i_7] = ((/* implicit */_Bool) (~(((((((/* implicit */int) arr_5 [i_3])) + (2147483647))) >> (((var_8) - (1537115762001184393ULL)))))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        arr_37 [i_3] [i_3] = ((/* implicit */unsigned char) 444035436534168121ULL);
                        var_20 = ((/* implicit */unsigned char) ((arr_23 [i_2] [i_3 + 2] [i_4] [(unsigned char)7] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 - 1] [i_9] [i_9 + 2] [i_9])))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_21 += ((/* implicit */_Bool) ((unsigned char) ((_Bool) 759709294)));
                        var_22 = ((/* implicit */_Bool) (~(var_9)));
                        arr_41 [i_2] [(signed char)5] [i_2] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                    }
                    var_23 = ((/* implicit */unsigned short) var_3);
                }
            } 
        } 
        arr_42 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_34 [i_2] [i_2]))));
        var_24 += ((/* implicit */short) (-(((/* implicit */int) (short)-18089))));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) 517352730)) : (14957684167620595723ULL)))));
    var_26 = ((/* implicit */int) (~(var_4)));
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min((var_12), (var_12))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65530))));
    var_28 = var_3;
}
