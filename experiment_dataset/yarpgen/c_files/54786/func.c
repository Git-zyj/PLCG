/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54786
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
    var_17 = ((/* implicit */unsigned short) (-(max((4U), (((unsigned int) (-2147483647 - 1)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = min((((((/* implicit */_Bool) (-(106801218U)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((-(((/* implicit */int) var_11)))))), (((/* implicit */int) (unsigned char)62)));
        arr_3 [i_0] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
        var_19 = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) min(((signed char)41), (((/* implicit */signed char) var_4)))))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_11))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483628)) ? (((/* implicit */int) var_0)) : (min(((+(((/* implicit */int) (signed char)4)))), (((/* implicit */int) max((var_14), (((/* implicit */signed char) var_10))))))))))));
    }
    for (short i_2 = 3; i_2 < 24; i_2 += 2) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((int) var_10)), (((var_7) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) var_4)))))))));
        arr_8 [i_2] [i_2 - 3] = ((/* implicit */unsigned char) var_11);
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_16), (((/* implicit */int) (signed char)56))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-53))))) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)16))))))))))));
    }
    var_24 = 2147483635;
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (21ULL)))));
        var_26 = ((/* implicit */int) min((var_26), ((~(var_1)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                {
                    arr_19 [i_4] [20U] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) 8122658132893448250LL));
                    var_27 = ((/* implicit */unsigned long long int) var_16);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                arr_26 [i_3] [i_3] [i_3] [(signed char)7] [i_4] = ((/* implicit */_Bool) var_3);
                                arr_27 [i_3] [i_4] [i_3] [i_3] [i_3] [(unsigned short)15] [i_3] = (+(((/* implicit */int) var_4)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) var_3);
                                var_29 = ((/* implicit */unsigned int) ((signed char) (~(295304076))));
                                arr_32 [(signed char)3] [(signed char)3] [(signed char)3] [i_4] [22] = ((/* implicit */unsigned int) min((2147483626), (((/* implicit */int) var_9))));
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)0)), (var_2)))) ? ((+(var_8))) : (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    arr_33 [i_4] [i_4] = ((/* implicit */unsigned int) max((min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_11)))))), ((~(((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) var_15))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_31 &= ((/* implicit */signed char) ((unsigned int) (_Bool)1));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
            {
                arr_39 [i_3] [i_11] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-71))));
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_15))));
                arr_40 [i_11] [i_10] [i_11] = ((/* implicit */short) var_4);
            }
            for (signed char i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) var_16);
                arr_44 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))) : ((-(43ULL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    var_34 = ((/* implicit */unsigned int) var_3);
                    arr_47 [i_3] [i_3] [(signed char)19] = ((/* implicit */int) var_15);
                    var_35 = ((/* implicit */signed char) min((var_35), ((signed char)-2)));
                    var_36 = ((/* implicit */int) max((var_36), (var_13)));
                    arr_48 [i_3] = ((/* implicit */signed char) var_2);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_37 = ((/* implicit */unsigned int) (-2147483647 - 1));
                    var_38 = (-(((/* implicit */int) var_0)));
                    arr_51 [8] [(signed char)6] [(signed char)6] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (unsigned short)172))))) : (0ULL)));
                    arr_52 [(signed char)11] [i_10] [(signed char)11] [(signed char)11] [i_10] [i_10] = var_3;
                }
            }
            var_39 -= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))));
            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((int) (signed char)38))));
            var_41 = (~(((/* implicit */int) var_11)));
        }
        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            var_42 = ((/* implicit */signed char) 2286870655666993732LL);
            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) var_12))));
        }
        arr_57 [i_3] = ((/* implicit */unsigned int) var_16);
    }
    var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) max((var_6), (((/* implicit */long long int) (-(386315640)))))))));
}
