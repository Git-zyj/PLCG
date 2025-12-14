/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248230
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 ^= var_4;
                arr_7 [19LL] [i_1] = ((/* implicit */unsigned char) 4737835624374112037LL);
                var_15 = max((min((((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 - 2])), (max((var_3), (((/* implicit */long long int) arr_5 [(unsigned char)14])))))), (min((((/* implicit */long long int) ((unsigned char) var_3))), (arr_2 [i_1 + 1] [i_1 + 1]))));
                arr_8 [i_1] [i_0] = var_4;
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (unsigned char)105))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                arr_15 [i_2] = 6350439619445845340LL;
                var_17 = ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])) ? (((((/* implicit */_Bool) ((unsigned char) 4881071717637285735LL))) ? (-8442948479949242365LL) : (-2197079598056237089LL))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_3])), (-3358936353553734064LL)))) ? ((~(-1LL))) : (((long long int) 9223372036854775807LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        arr_21 [i_2] [0LL] [i_4] = ((/* implicit */long long int) ((unsigned char) arr_19 [i_2 + 3] [i_3] [i_4] [i_5]));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_25 [i_2] [(unsigned char)4] [i_4] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)185))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((long long int) arr_10 [i_4]))));
                            var_19 = ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2 + 2] [i_2 + 1] [i_2] [i_3])) ? (-4725160737293507521LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
                        {
                            arr_28 [i_5] [(unsigned char)18] [i_5] [i_5] [i_7] [i_4] [i_2] = var_8;
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_2] [i_3] [i_3] [i_4] [i_5] [i_7])) <= (((/* implicit */int) (unsigned char)38))))) <= (((/* implicit */int) arr_9 [i_2 + 2])))))));
                            arr_29 [i_2] [i_5] [i_2] [i_4] [i_7] = ((/* implicit */unsigned char) ((arr_14 [i_2 + 1]) == (-8446812146319881087LL)));
                            arr_30 [i_4] [i_3] [i_2] [i_3] [i_4] = arr_20 [i_2 + 2] [i_7 + 3] [i_4];
                        }
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_27 [i_2 + 3] [i_2] [i_3] [i_2 + 3] [i_4] [i_5] [i_8 + 2]))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) 6607291042402166286LL))));
                            var_23 = ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]))) ^ (-2340938341424975308LL));
                        }
                    }
                    arr_33 [i_2 + 3] [i_3] [i_4] = (~(76718808306928722LL));
                    arr_34 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)236)) >> (((((/* implicit */int) (unsigned char)112)) - (108)))))) : (((var_6) >> (((5748420947432992364LL) - (5748420947432992344LL)))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_41 [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) == (9223372036854775807LL)));
                                arr_42 [i_3] [i_3] [i_4] [i_4] [i_10] = ((/* implicit */long long int) ((unsigned char) arr_26 [i_2 + 1] [i_4] [i_2]));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            arr_50 [i_4] [i_3] = (i_4 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_43 [i_2] [i_4] [i_4] [i_11 - 1]) >> (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_39 [i_2] [i_2] [i_3] [i_2] [i_11] [i_11] [i_2])) ? (var_6) : (var_3)))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_43 [i_2] [i_4] [i_4] [i_11 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_39 [i_2] [i_2] [i_3] [i_2] [i_11] [i_11] [i_2])) ? (var_6) : (var_3))))));
                            arr_51 [i_2] [i_2] [i_4] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) : (var_12)));
                        }
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_54 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2900507157687208200LL)) ? (((-7589528894505637715LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_2] [(unsigned char)7] [i_4] [i_11] [i_4]))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (9223372036854775807LL)))));
                            arr_55 [i_4] [i_3] [i_3] [i_11] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_39 [i_2] [i_2] [i_3] [i_3] [i_4] [i_11] [i_13])))) ? (-834982106781539170LL) : (((long long int) (unsigned char)247)));
                            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
                        }
                        arr_56 [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1541766362174131417LL)) && (((/* implicit */_Bool) (unsigned char)255)))))) == (((-8249873180798084971LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))))));
                    }
                }
                arr_57 [i_2 + 3] [i_2 + 3] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (5613602939984272821LL) : (-2806728922504208083LL))) == (max((-915305442407126565LL), (((/* implicit */long long int) (unsigned char)226))))))), (((unsigned char) ((((/* implicit */_Bool) -7490170775071022725LL)) ? (7429848898532441487LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 1; i_14 < 24; i_14 += 2) 
    {
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
        {
            {
                arr_64 [i_14 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)194))))) ? (6376718500589264071LL) : (((((/* implicit */_Bool) 7452266595765954370LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_15] [i_15])) ? ((-9223372036854775807LL - 1LL)) : (arr_62 [i_14 + 1] [4LL])))) ? (((/* implicit */int) ((var_1) == (arr_61 [i_14] [i_15])))) : ((~(((/* implicit */int) (unsigned char)0))))))) : (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)169))))));
                arr_65 [i_14] [i_14] = arr_61 [i_14 + 1] [6LL];
                var_25 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (6171771670406152780LL));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned char) 31LL))) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))) : (min((5233333151156101902LL), (-3681394681155908718LL))))) <= (min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (unsigned char)225)) ? (7272456701346683584LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191)))))))));
}
