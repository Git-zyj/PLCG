/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224078
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
    var_16 = ((/* implicit */int) (+(1422506162U)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 32766U);
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((unsigned int) arr_7 [14] [14] [i_2] [14])) : (((/* implicit */unsigned int) ((var_7) ? (2147483629) : (((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((int) arr_7 [6] [i_1] [i_1] [12]))) : ((~(var_2))))) : (arr_0 [i_0])));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1] [4]))) ? ((~(((/* implicit */int) arr_5 [(unsigned short)10] [12U] [i_3])))) : (((int) var_12))))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5 - 2] = ((/* implicit */unsigned char) arr_10 [i_1]);
                            arr_18 [i_0] [i_3] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            var_19 = ((/* implicit */unsigned char) (-(var_15)));
                        }
                    } 
                } 
            }
            for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
            {
                var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1505281044U))));
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))));
                var_22 += ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)24)) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (signed char)18)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))))));
            }
            arr_22 [i_1] = ((/* implicit */signed char) ((_Bool) (-(((unsigned int) arr_7 [i_1] [i_1] [i_1] [i_1])))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            var_23 = ((/* implicit */signed char) var_11);
            var_24 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
            arr_25 [i_0] [i_7 - 2] [i_7] = ((/* implicit */unsigned int) ((unsigned short) var_3));
            var_25 = arr_3 [i_0];
        }
        arr_26 [i_0] = ((/* implicit */unsigned char) var_6);
        arr_27 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_24 [i_0] [i_0] [i_0])))) ? (((int) (-(((/* implicit */int) arr_10 [(unsigned short)0]))))) : (((int) (-(arr_9 [i_0]))))));
        var_26 ^= ((((/* implicit */_Bool) (unsigned short)32747)) ? ((-(var_1))) : (((((/* implicit */_Bool) ((unsigned char) arr_20 [i_0] [i_0] [i_0]))) ? (arr_2 [i_0]) : ((+(((/* implicit */int) arr_6 [i_0] [i_0] [10LL])))))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            var_27 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_8])) ? (arr_12 [i_0] [13U] [i_8] [i_0]) : (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (((long long int) (unsigned char)24)))));
            arr_30 [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) arr_19 [i_8] [i_0] [i_8 - 2] [i_8]);
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) var_3))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                {
                    var_29 = ((unsigned char) var_0);
                    arr_40 [i_10] [i_11 + 1] = ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
        arr_41 [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) var_11)));
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_12))));
    }
    for (int i_12 = 2; i_12 < 21; i_12 += 2) 
    {
        var_31 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) (unsigned char)16)))));
        var_32 = ((/* implicit */signed char) ((unsigned short) ((_Bool) arr_43 [i_12])));
        var_33 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_12 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_42 [i_12])))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)72))) : (((/* implicit */int) ((_Bool) (~(arr_43 [i_12])))))));
    }
}
