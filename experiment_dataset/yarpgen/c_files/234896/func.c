/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234896
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 6; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (((+(arr_5 [i_0] [i_1 + 2]))) / (arr_5 [i_0] [i_1 + 4])));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */int) arr_5 [i_0] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) var_6);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)108)) ? (((long long int) ((((/* implicit */_Bool) -388686552032881540LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18521))))) : (((/* implicit */long long int) max((max((((/* implicit */int) var_14)), (var_8))), (var_9))))));
                                arr_14 [(unsigned short)0] [i_4] [i_4] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        var_22 *= ((/* implicit */short) arr_12 [i_0] [i_1 + 4] [i_0] [i_5] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((4631025715542887475LL) / (var_10)))) ? (((/* implicit */long long int) max((var_12), (((/* implicit */int) (signed char)51))))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                            var_24 = ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_6 - 2] [i_5] [i_0] [i_0]))) & (min((min((arr_5 [i_1] [i_0]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(var_12)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 513857898U))) && ((_Bool)1))))));
                            var_26 = ((/* implicit */long long int) (~(var_9)));
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    var_27 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_20 [i_0] [(_Bool)0] [i_8 - 1] [i_1 + 2] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 6; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            {
                                arr_30 [i_8] [i_1 - 1] [i_8 + 1] [i_8] [(unsigned char)2] [i_8 + 1] = ((/* implicit */int) arr_16 [i_0] [i_1] [i_8 - 1] [i_9]);
                                arr_31 [i_0] [i_1] [i_8] [i_0] [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_7))))));
                                arr_32 [i_8] [i_1] [i_8 - 1] [i_9 + 2] = ((/* implicit */signed char) arr_12 [i_10] [i_8 + 1] [i_1 + 3] [i_9 + 2] [i_10]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 1) 
                {
                    arr_35 [i_1] [i_11] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -7736770081713904963LL)))) >= (arr_33 [i_11] [i_11] [i_11] [i_11 - 2])));
                    /* LoopSeq 3 */
                    for (int i_12 = 2; i_12 < 9; i_12 += 1) 
                    {
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_12] [i_12 - 2]) < (((/* implicit */int) arr_11 [i_12] [i_11] [i_0] [i_0] [i_0]))))) >> (((long long int) arr_8 [i_0] [i_0] [i_11] [i_11]))));
                        arr_38 [i_0] [i_11] = ((/* implicit */unsigned char) arr_33 [i_1 - 2] [i_11 + 1] [i_11] [i_11]);
                        arr_39 [i_0] [i_11] = ((/* implicit */short) arr_5 [i_11 - 1] [i_1 + 3]);
                        var_29 -= ((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_12] [9] [i_12] [i_1]);
                        var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) (unsigned short)37132))));
                    }
                    for (long long int i_13 = 2; i_13 < 8; i_13 += 2) /* same iter space */
                    {
                        var_31 *= ((/* implicit */unsigned long long int) (unsigned short)28145);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_44 [i_11] [i_1] [i_11 - 2] [i_11] = var_4;
                        arr_45 [i_0] [i_1 + 4] [i_11] [(signed char)9] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) ((_Bool) var_4)))));
                        var_33 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1 + 4] [6LL]))));
                    }
                    for (long long int i_14 = 2; i_14 < 8; i_14 += 2) /* same iter space */
                    {
                        var_34 -= ((/* implicit */short) ((long long int) var_4));
                        var_35 = ((/* implicit */unsigned char) (~(var_13)));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_15 = 1; i_15 < 9; i_15 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */_Bool) ((long long int) ((signed char) arr_49 [i_15 + 1] [i_1 + 1])));
                        /* LoopSeq 3 */
                        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))) % (3738187163U)));
                            arr_56 [i_0] [i_0] [i_0] [i_15 + 1] [i_0] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-42)) <= (((/* implicit */int) (unsigned char)237)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_17] [i_1 - 2] [i_1 - 2] [i_1 - 2])))))) : (min((((/* implicit */long long int) var_9)), (arr_49 [i_1] [i_17])))))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) -1287138274)) <= (var_6))))));
                            arr_57 [i_0] [i_0] [i_15 + 1] [i_16] [i_17] |= ((/* implicit */long long int) var_11);
                            var_38 = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_54 [5LL] [i_1])))))))) - (((((/* implicit */_Bool) ((long long int) 524287LL))) ? (var_8) : (var_13))));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                        {
                            var_39 ^= ((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_15] [i_18]);
                            var_40 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_46 [i_0] [i_15 + 1] [i_16 - 1] [i_18]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)2] [i_1 + 1] [i_16]))))) : (((/* implicit */int) arr_27 [i_1] [i_15 - 1]))));
                        }
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
                        {
                            var_41 += ((/* implicit */short) arr_48 [i_0]);
                            var_42 = ((/* implicit */unsigned char) max((arr_18 [i_1] [i_1] [i_16] [i_19]), (((/* implicit */long long int) (unsigned short)20340))));
                            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_15 + 1] [i_1 + 3])) ? ((((+(var_9))) + (max((-851346978), (var_13))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_59 [i_0] [i_1] [i_15] [i_16] [i_19] [i_16]))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) var_3)))))))));
                            arr_65 [i_16 + 1] = ((/* implicit */unsigned char) (-(((1161693028622663512LL) / (((/* implicit */long long int) 1068178699U))))));
                            var_44 += ((/* implicit */signed char) (unsigned char)108);
                        }
                        arr_66 [1ULL] [3LL] [i_15 + 1] [i_16] = ((/* implicit */signed char) arr_15 [i_0]);
                        var_45 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -285046549))));
                    }
                    arr_67 [i_15] [4LL] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_26 [i_15 + 1] [i_0] [i_0]));
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_1))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) var_9)) : (var_15)))))) || (((((/* implicit */_Bool) -836018917531844535LL)) && (((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_8))))))));
                    arr_68 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_50 [i_1 + 2] [i_1] [i_1 - 1] [i_15 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 4159141927064390630ULL))) && (((/* implicit */_Bool) min((((/* implicit */int) var_1)), (var_12))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_1 + 1] [i_15 - 1])) || (((/* implicit */_Bool) var_1)))))));
                }
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_3))) + (min((var_5), (((/* implicit */long long int) var_17)))))), (max((var_4), (((/* implicit */long long int) var_14))))));
    var_48 |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) / (((/* implicit */int) ((((/* implicit */_Bool) -775271973)) || (((((/* implicit */int) var_3)) > (((/* implicit */int) var_3)))))))));
}
