/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54565
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (var_7)))), (arr_3 [i_0] [i_2]))))));
                    var_19 = max((((/* implicit */unsigned int) ((int) var_11))), (max((arr_3 [i_2] [i_0]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((unsigned long long int) -43746492731066979LL))))));
    var_21 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_8 [i_3] = ((/* implicit */int) arr_0 [i_3] [i_3]);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 -= ((/* implicit */_Bool) ((int) (+(var_6))));
                    arr_15 [i_3] = ((((/* implicit */_Bool) arr_2 [i_4 - 2] [i_4] [i_3])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) -1840260272)) : (var_6))) : (var_8));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((long long int) 3421154788U));
                                var_24 = 559257774;
                                var_25 += ((/* implicit */_Bool) ((559257791) >> (((var_7) + (475445254)))));
                                var_26 *= ((/* implicit */int) ((unsigned int) arr_16 [i_4 - 2] [i_7 + 1] [15ULL]));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_27 *= ((/* implicit */long long int) (+(1840260271)));
                        arr_23 [i_3] [i_4 - 1] [i_5] [i_3] [i_8 - 1] = (!(((/* implicit */_Bool) 1578700126U)));
                    }
                    var_28 = ((/* implicit */unsigned short) ((arr_14 [i_4 - 1] [i_4] [i_3]) == (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_27 [i_9] = ((/* implicit */unsigned int) -1840260295);
        var_29 += (-(((/* implicit */int) arr_25 [i_9])));
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1578700127U)) ? (-1068393211) : (((/* implicit */int) max(((short)-6792), (((/* implicit */short) (unsigned char)241))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            arr_31 [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) 134217728)), (arr_11 [i_9] [(short)18] [(short)18]))) > (((/* implicit */unsigned int) -134217717)))))) ^ (max((((/* implicit */unsigned int) arr_17 [i_9])), (max((2716267198U), (((/* implicit */unsigned int) (signed char)117))))))));
            var_31 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_16))));
            var_32 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (+(559257797)))) : (((max((((/* implicit */unsigned int) var_15)), (var_14))) + (max((2716267181U), (((/* implicit */unsigned int) -1840260260))))))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                var_33 = ((/* implicit */unsigned short) ((short) arr_28 [i_9] [4LL] [4LL]));
                var_34 = ((/* implicit */int) ((signed char) arr_20 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1]));
                /* LoopNest 2 */
                for (unsigned char i_13 = 2; i_13 < 17; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 18; i_14 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) ((signed char) -559257763));
                            var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (-1331539146))))));
                        }
                    } 
                } 
                var_37 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_9] [i_9] [i_9] [i_9]) << (((((((/* implicit */int) (short)-31524)) + (31564))) - (40)))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1] [i_12] [i_12])))));
            }
            for (long long int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                var_38 ^= ((((arr_35 [i_9] [i_11 + 1] [i_15]) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-3208)) + (3253))) - (45))));
                /* LoopNest 2 */
                for (long long int i_16 = 3; i_16 < 17; i_16 += 4) 
                {
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) (((((+(var_7))) + (2147483647))) >> (((((/* implicit */int) (short)31524)) - (31512)))));
                            var_40 |= (-(arr_36 [(signed char)5] [i_16 - 3] [i_16 - 1] [i_11 - 1] [i_9]));
                        }
                    } 
                } 
                arr_48 [i_9] [i_11 - 1] [i_15] [i_9] = ((/* implicit */int) var_13);
                var_41 &= (-(arr_28 [i_9] [i_9] [i_15]));
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (-(arr_42 [i_9] [i_9] [i_9] [i_9]))))));
            }
            for (unsigned short i_18 = 2; i_18 < 18; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    var_43 *= ((/* implicit */unsigned char) ((signed char) 2716267174U));
                    arr_54 [i_9] [i_9] [i_11 - 1] [i_11] [i_9] = (~(var_17));
                    var_44 -= ((((/* implicit */unsigned int) ((/* implicit */int) (short)31524))) - (3728752062U));
                    arr_55 [i_9] [i_11] [i_18] [i_9] [i_9] [i_19] = ((((/* implicit */int) arr_9 [i_18 - 2])) >> (((arr_36 [i_9] [i_9] [i_11] [i_11] [i_19]) - (108277124))));
                }
                var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) var_5))));
                var_46 |= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 19; i_20 += 3) 
                {
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        {
                            var_47 += ((/* implicit */short) var_1);
                            arr_62 [i_21] [i_21] [i_20] [i_9] [i_18 + 1] [i_9] [i_9] = ((int) (+(559257763)));
                            var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1082481701213278265ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1840260271))))))));
                            var_49 = 0;
                        }
                    } 
                } 
                arr_63 [i_9] [i_11 - 1] [i_9] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((-1840260276) == (var_7))))) <= (((var_16) / (((/* implicit */long long int) var_14))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 1; i_22 < 17; i_22 += 4) 
            {
                for (short i_23 = 4; i_23 < 18; i_23 += 4) 
                {
                    {
                        var_50 ^= ((/* implicit */long long int) (signed char)-119);
                        arr_69 [i_11] [i_9] [i_11] = ((/* implicit */short) var_7);
                        var_51 &= ((((/* implicit */long long int) (~(((/* implicit */int) var_0))))) & (arr_12 [i_23] [i_22 - 1] [i_23 + 1] [i_23]));
                    }
                } 
            } 
        }
        for (unsigned long long int i_24 = 2; i_24 < 15; i_24 += 4) 
        {
            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (~(15U))))));
            var_53 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_42 [i_9] [i_9] [i_24 + 2] [i_24 + 4])) & (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)3))))), (((((/* implicit */_Bool) 654792756)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9]))) : (var_12)))))));
            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (((1099494850560LL) + (((/* implicit */long long int) 1840260299)))) : (((/* implicit */long long int) (-(arr_40 [i_24 + 3] [i_9]))))));
        }
    }
}
