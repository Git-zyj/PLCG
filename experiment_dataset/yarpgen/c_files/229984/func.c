/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229984
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
    var_13 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255))))) ? (((int) arr_2 [i_0] [i_1 - 3])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) >= (((/* implicit */int) var_1))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((((unsigned int) (~(((/* implicit */int) var_9))))), (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (unsigned short)28646)))))));
                            arr_13 [(signed char)20] [i_2] [(signed char)20] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >> ((((~(((/* implicit */int) (unsigned char)250)))) + (281)))));
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_11 [i_2] [i_2] [i_0] [i_2] [i_1] [i_0]) >= (arr_11 [i_0] [i_1 - 2] [13U] [i_1 - 2] [i_3 + 1] [i_3]))))));
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                arr_17 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) ((unsigned char) var_4));
                                arr_18 [i_2] [(unsigned short)21] [(unsigned short)21] [i_3 + 1] [i_4] [i_3] [i_3] = var_8;
                                var_15 = ((/* implicit */unsigned int) var_7);
                                arr_19 [i_0] [i_2] [i_2] [10] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) < (arr_7 [i_2])));
                            }
                            for (unsigned int i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_2] = (unsigned short)30720;
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3562923223U)) ? (((/* implicit */int) (unsigned char)6)) : (-536870912)))) ? (((/* implicit */int) (unsigned char)250)) : (-15))) : (((/* implicit */int) ((signed char) 3715778251U)))));
                            }
                            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34815)) ? (((/* implicit */int) (unsigned short)34809)) : (((/* implicit */int) (unsigned short)30723)))))));
                                var_18 = ((/* implicit */unsigned int) (unsigned char)63);
                                var_19 = 917504;
                                arr_26 [16] [16] [i_2] [i_3] [i_6] = ((/* implicit */int) var_0);
                                arr_27 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (var_7)))) : (4294967295U)));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                            {
                                arr_31 [i_2] [i_2] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) % (1072790500U)));
                                arr_32 [i_7] [i_2] [i_2 - 2] [i_2 - 1] [i_2] [(unsigned short)16] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_25 [i_1 - 1] [i_1 - 1] [i_2] [i_3] [i_3])) / (((unsigned int) arr_6 [i_1] [i_1]))));
                                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)28646))));
                            }
                        }
                    } 
                } 
                arr_33 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */signed char) (~(2147483648U)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_4)))))))) || (((/* implicit */_Bool) 2147475456U))));
    var_22 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_1)) ? (((int) var_1)) : (((((/* implicit */int) var_8)) / (95061398))))));
    /* LoopSeq 1 */
    for (unsigned int i_8 = 2; i_8 < 14; i_8 += 1) 
    {
        var_23 -= ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (arr_10 [i_8 - 1] [i_8 - 2] [i_8 + 3] [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)40563)) < (-536870912)))))));
        arr_36 [i_8] [i_8] = ((/* implicit */signed char) (+(max((((4205544199U) - (var_2))), (((((/* implicit */_Bool) (unsigned short)64963)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29585))) : (3897000901U)))))));
        arr_37 [(signed char)14] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)2))))) | (((((/* implicit */_Bool) min((2147483645U), (((/* implicit */unsigned int) (unsigned char)243))))) ? (1345329790U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)107)))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 16; i_11 += 3) /* same iter space */
                    {
                        arr_47 [i_9] [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) var_2);
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)30734), (((/* implicit */unsigned short) var_11))))) ? (var_5) : (((/* implicit */unsigned int) -813124304))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-28)) - (-1)))))) : (max((arr_41 [i_8] [i_9] [i_10] [i_11]), (arr_41 [i_8] [(signed char)12] [i_10] [i_10])))));
                        arr_48 [i_8] [i_9] [i_8] [i_8] [i_11] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) - (2147483645U))) <= (((((/* implicit */_Bool) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (2949637509U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_11 + 1] [i_9] [i_10] [i_11])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 1; i_12 < 16; i_12 += 3) /* same iter space */
                    {
                        arr_53 [i_8] [i_9] [i_8] [i_10] [i_12] = ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_8] [i_8] [i_8 - 1] [i_8] [i_12]));
                        arr_54 [i_8] [i_8] [i_9] [i_10] [i_10] = (-(((/* implicit */int) (unsigned short)51214)));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_8 + 3] [i_8 - 1] [i_12 + 1] [i_12 - 1])) ? (((((/* implicit */_Bool) arr_9 [21U] [8U] [i_10] [i_12])) ? (2147483638U) : (var_5))) : (var_2)));
                    }
                    arr_55 [i_8] [i_10] [12] [i_10] = (-(((/* implicit */int) (unsigned char)159)));
                    arr_56 [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) 572068019))))) : ((-(var_6)))))) : (var_2));
                }
            } 
        } 
        arr_57 [i_8] = ((/* implicit */signed char) (-(min((2075659739U), (((/* implicit */unsigned int) arr_34 [i_8]))))));
    }
}
