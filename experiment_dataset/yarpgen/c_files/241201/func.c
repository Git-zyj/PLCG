/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241201
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((((/* implicit */_Bool) (unsigned short)46829)) ? (-1792552745) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_7)) : (var_2)))) ? (((/* implicit */int) var_9)) : (((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_10 [i_0] [i_3] [i_0] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_11 ^= ((/* implicit */_Bool) (-(((((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_3]))) << (((((-1477971531) - (((/* implicit */int) (unsigned short)0)))) + (1477971549)))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (signed char)0)), ((short)-16384)))) * (((/* implicit */int) min((var_6), (arr_3 [i_0] [i_0]))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((3690892786U), (((/* implicit */unsigned int) (unsigned short)65514)))))))) < ((~((~(((/* implicit */int) (short)1))))))));
                    arr_11 [i_1] = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_1])), ((short)-1))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        arr_14 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0])))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_6])) ? (((/* implicit */int) min(((short)32767), ((short)252)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                            arr_19 [i_5] [i_1] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) ((int) arr_12 [i_0] [i_1] [i_2] [i_5])))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned short) (short)-26986)), ((unsigned short)65502)));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_15 -= ((/* implicit */unsigned char) ((((var_3) << (((((/* implicit */int) var_9)) - (134))))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))));
                            arr_23 [i_5] = ((/* implicit */unsigned short) ((unsigned int) var_1));
                            arr_24 [i_5] [i_5] [i_7] = arr_16 [i_0] [i_1] [i_2];
                        }
                        arr_25 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!((_Bool)0)))) & (((/* implicit */int) (signed char)52))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */unsigned short) (short)32767);
                            arr_33 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */short) ((unsigned short) ((unsigned char) (~(((/* implicit */int) var_9))))));
                            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0]))));
                        }
                        for (short i_10 = 1; i_10 < 23; i_10 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned short) (signed char)127);
                            var_18 = ((/* implicit */int) (short)-16384);
                            var_19 -= ((/* implicit */unsigned char) var_1);
                            var_20 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_0])) << (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) | (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_10]))) < (arr_30 [i_10] [i_8] [i_2] [i_1] [i_0])))) : (((/* implicit */int) var_8))))));
                        }
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((short) var_9)))) > (((/* implicit */int) ((unsigned short) ((arr_29 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8]) >> (((/* implicit */int) (_Bool)1))))))));
                        arr_36 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7764)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max(((short)2216), ((short)-4199))))))) ? (((/* implicit */int) ((_Bool) (short)2216))) : (((((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_8] [i_8])) >> (((((/* implicit */int) min((((/* implicit */short) arr_16 [i_0] [i_1] [i_2])), (var_0)))) + (14672))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_11] [i_1] [i_11] = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1] [i_11] [i_1]))))), (var_7));
                        arr_40 [i_11] [i_1] [i_2] [i_2] [i_11] = ((/* implicit */unsigned short) ((unsigned int) (short)24));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_44 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_0])) > (((/* implicit */int) ((short) arr_0 [i_0] [i_1])))));
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_43 [i_0] [i_1] [i_0] [i_12] [i_12] [i_12]) || (arr_3 [i_0] [i_1])))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_1]))))) ? ((~(((/* implicit */int) ((unsigned short) 1213758558))))) : (((/* implicit */int) min((arr_12 [i_0] [i_1] [i_12] [i_13]), (arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */signed char) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_47 [i_0] [i_1] [i_2] [i_12] [i_0] = ((/* implicit */signed char) arr_41 [i_0] [i_1] [i_1] [i_2] [i_12] [i_0]);
                        }
                        for (short i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
                        {
                            arr_51 [i_1] [i_12] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_1] [i_2] [i_12] [i_14])))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) (unsigned char)255))))))))));
                            arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((arr_48 [i_0] [i_1] [i_2] [i_12] [i_14]), (((signed char) arr_18 [i_0] [i_1] [i_1] [i_12] [i_14])))))));
                            var_25 += ((/* implicit */short) ((((/* implicit */int) (unsigned char)112)) + (((/* implicit */int) ((unsigned char) var_3)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) (unsigned short)58989)))));
}
