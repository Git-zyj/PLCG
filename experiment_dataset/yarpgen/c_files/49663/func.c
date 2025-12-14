/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49663
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (-(358169207265556327ULL)));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) ((signed char) -444710437833353195LL));
                    var_17 += max((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((arr_9 [i_2] [i_1] [i_2]), (var_3))))), (((/* implicit */unsigned int) arr_11 [i_2] [(unsigned char)2] [(unsigned char)2] [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2161095439687840328LL))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) >> (((var_9) - (711322856U))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) > (7363818449771613395ULL))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (358169207265556322ULL))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) arr_4 [i_2] [i_0])))))))));
                        var_18 = ((/* implicit */unsigned int) ((((unsigned int) (!(((/* implicit */_Bool) var_12))))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_3])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2])))))))));
                        arr_15 [i_3] &= max((((unsigned short) ((int) var_14))), (((/* implicit */unsigned short) (!(((2602319624915281198ULL) == (((/* implicit */unsigned long long int) var_13))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((int) (short)949)) - (949)))));
                            var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1714433714))))), (var_6)));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(var_4))))));
                            arr_21 [i_0] [i_0] [i_2] [i_0] [5U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_0] [1U] [i_5 + 1] [i_2] [i_5] [i_0])) - (arr_13 [i_0] [(signed char)21] [(unsigned char)2] [i_5 + 2] [i_5])));
                        }
                    }
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) arr_19 [i_2] [i_0] [i_2] [(_Bool)1] [i_1] [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1478687284738794795ULL)) ? (21ULL) : (((/* implicit */unsigned long long int) 1028372315U)))))));
                            arr_27 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) var_13)) : (min((((/* implicit */unsigned long long int) var_5)), (358169207265556314ULL))))) != (18088574866443995277ULL)));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned char)255)), (3423929167U))) << (((((unsigned long long int) var_2)) - (60914ULL)))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
                        {
                            arr_31 [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_30 [i_8 + 2] [i_8] [i_8] [i_8 - 2] [i_8 - 2]))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [22U] [i_2] [i_6])) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            arr_33 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_8 + 2] [i_6] [i_8] [i_6])) < (((/* implicit */int) arr_5 [i_8 + 2] [(unsigned short)10] [i_8]))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (unsigned char)18))));
                            var_26 = ((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2]);
                        }
                        var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9126448253653630950ULL)) ? (arr_24 [4ULL] [i_6] [(signed char)23] [i_1] [i_0] [i_0]) : (arr_24 [i_0] [i_1] [i_0] [i_6] [i_6] [i_6])))));
                        var_28 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((358169207265556307ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) max(((unsigned short)47732), (((/* implicit */unsigned short) arr_5 [i_0] [23U] [23U]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6]))))))), (var_13)));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 2) 
                    {
                        arr_36 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_9);
                        arr_37 [i_0] [(_Bool)1] [(_Bool)1] [16ULL] = ((/* implicit */unsigned short) ((unsigned char) ((signed char) var_8)));
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 3; i_11 < 23; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_29 = (+(min((((/* implicit */unsigned long long int) var_2)), (16968056788970756829ULL))));
                                arr_48 [i_0] [i_10] [i_10] [i_0] = var_9;
                                arr_49 [i_0] [i_0] = ((/* implicit */int) ((((unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551609ULL))))) < (((((/* implicit */_Bool) var_7)) ? (18088574866443995302ULL) : (((/* implicit */unsigned long long int) (~(4181901918U))))))));
                                var_30 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_44 [7U] [i_12] [(signed char)13] [i_11 - 2] [(signed char)13] [i_11])) : (arr_34 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned char) ((unsigned short) max((913044544), (((/* implicit */int) (short)-24179)))));
                }
                for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    arr_52 [i_0] [i_0] [i_13] = ((/* implicit */signed char) ((unsigned char) max((arr_4 [i_13] [i_1]), (min((527403017), (((/* implicit */int) arr_25 [i_0] [1] [i_0] [i_0] [i_0] [i_13] [i_0])))))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3601152618U)) ? (13506752769076657960ULL) : (((/* implicit */unsigned long long int) -444710437833353196LL))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) arr_28 [i_0] [i_1] [(unsigned short)18] [i_1] [i_1] [i_13] [i_13]))))) ^ (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_1])) ? (6167018072026155738LL) : (((/* implicit */long long int) 2514532500U)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))))))));
                }
                var_33 = ((/* implicit */unsigned long long int) min((var_33), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)82)), ((+(arr_38 [i_0] [(unsigned short)6] [i_0])))))), (18088574866443995296ULL)))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)112), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_14)), (var_2)))), (((var_12) | (2514532484U)))))));
}
