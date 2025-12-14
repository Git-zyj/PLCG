/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223140
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_19 += ((/* implicit */signed char) max((min(((-(((/* implicit */int) (unsigned char)146)))), (((/* implicit */int) arr_2 [i_2 + 2])))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) arr_1 [i_1])))))));
            var_20 = ((/* implicit */signed char) max((((((/* implicit */int) var_2)) <= (((/* implicit */int) ((signed char) var_16))))), ((!(((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 2]))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_14))));
                arr_13 [i_1] [(unsigned char)9] [i_2] [(short)1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_2 + 3] [i_2 + 2])) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 2])) : (((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 2])))), ((+(((/* implicit */int) arr_0 [i_2 + 2] [i_2 - 1]))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    var_22 = ((signed char) ((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)27667))))));
                    var_23 = ((/* implicit */unsigned char) (short)27667);
                    arr_16 [i_2] [i_3] = ((/* implicit */unsigned char) var_9);
                    arr_17 [i_2] [i_3] [i_2] [i_1] = ((/* implicit */signed char) arr_9 [(short)3] [i_3] [i_4]);
                }
                for (short i_5 = 4; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (arr_4 [i_1])));
                        arr_23 [(short)2] [i_2] [i_2] [i_2] [(signed char)5] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_11), (((/* implicit */unsigned char) arr_14 [i_1] [i_2 + 3] [i_3] [i_1]))))) + (((((((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)27641)))) + (2147483647))) >> (((((/* implicit */int) (short)27668)) - (27644)))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((((/* implicit */long long int) (short)-27688)), (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (arr_20 [i_6] [i_5 + 1] [i_3] [i_5 - 4] [i_2 + 2] [i_3] [i_1]) : (arr_20 [i_3] [i_3] [i_3] [i_5] [i_2 + 3] [i_1] [i_5]))))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_1 [i_1]);
                        var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7] [(signed char)3] [(signed char)11] [i_1] [i_1])) + (((/* implicit */int) arr_0 [i_1] [i_5]))))) ? (((/* implicit */int) arr_7 [i_3] [i_5])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) ((signed char) arr_15 [i_2 + 1] [i_5 + 1] [i_5 - 1])))));
                        var_28 = arr_8 [i_1] [i_1] [i_1];
                    }
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] = var_3;
                        var_29 = ((/* implicit */signed char) (short)-27688);
                    }
                    for (long long int i_9 = 2; i_9 < 9; i_9 += 3) 
                    {
                        arr_34 [i_1] [(signed char)1] [i_3] [11LL] [i_9] = ((/* implicit */signed char) arr_32 [i_9 - 1] [i_2 + 3] [(unsigned char)2] [i_2] [i_2 + 3] [i_2 + 3] [i_2 + 3]);
                        var_30 = ((/* implicit */short) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [i_1] [(signed char)8] [i_3] [(signed char)8] [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_1] [i_9] [i_3] [(signed char)7] [i_9])))))), ((+(((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) (short)-27671)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (short)27675)))) == (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) var_10))))))))));
                        var_32 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_5])) >= ((-(((/* implicit */int) (short)27668)))))))));
                        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                    }
                    for (signed char i_10 = 1; i_10 < 11; i_10 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) (-(arr_20 [i_1] [i_2] [i_3] [i_5] [i_10 + 1] [i_5] [i_1])));
                        var_35 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (short)27903)) : (((/* implicit */int) (short)-27688)))));
                        var_36 = ((signed char) (~((~(((/* implicit */int) var_3))))));
                        arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((arr_3 [(signed char)4] [i_2]) >> (((var_5) - (1235397101810869318LL))))) / (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_2] [i_2 + 1] [i_10 + 1] [i_1])))))));
                        var_37 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_21 [i_1] [11LL] [i_3] [i_5] [10LL] [8LL] [i_1]))))) : (arr_33 [10LL] [i_2 + 1] [(short)2] [(signed char)0] [(short)10] [i_10]))), (((/* implicit */long long int) min(((short)-6903), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)64))))))))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (signed char i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-29)) ^ (((/* implicit */int) (short)0))))) ? (max((((/* implicit */long long int) (short)27686)), (1048575LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-27665)))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_1] [i_2] [i_3] [i_11] [i_12])))))));
                            var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 + 2] [i_2])) || (((/* implicit */_Bool) arr_31 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 1] [i_2])))) && (((/* implicit */_Bool) max((((/* implicit */short) arr_31 [i_2 - 1] [i_2 + 3] [(unsigned char)8] [i_2 - 1] [i_2 - 1])), ((short)27903))))));
                            var_40 &= ((/* implicit */signed char) min((((/* implicit */int) min((((signed char) arr_6 [i_1])), (var_12)))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)15))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)154))))));
                            arr_46 [i_11] [i_2] [i_3] [(signed char)6] [i_1] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) max((var_14), ((signed char)-29)))), (((long long int) var_0))));
                            arr_47 [i_1] [i_2 - 1] [(unsigned char)9] [i_3] [i_3] [i_11] [i_12] = ((/* implicit */short) max((((/* implicit */int) max(((unsigned char)21), (((/* implicit */unsigned char) ((((/* implicit */int) (short)27689)) != (((/* implicit */int) (short)-27689)))))))), (max((((/* implicit */int) arr_22 [i_1] [i_2] [i_1])), (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)32766))))))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */signed char) var_0);
                var_42 = var_0;
                var_43 -= var_11;
                var_44 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_49 [i_2 - 1] [i_2 + 2] [9LL] [(signed char)11])))) * (((((/* implicit */int) (short)-27689)) / (((/* implicit */int) (short)27689))))));
                var_45 = ((/* implicit */long long int) (!(((((((/* implicit */_Bool) (signed char)36)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_1] [i_2] [i_2] [i_2] [i_13] [i_13] [i_13]))))) == (arr_32 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 3] [i_2 + 3] [i_2])))));
            }
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
            {
                var_46 = ((/* implicit */signed char) max((var_46), (((signed char) arr_3 [i_2 + 1] [i_14]))));
                arr_52 [(signed char)2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)-48)) : ((-(((/* implicit */int) var_10))))));
            }
            var_47 = ((/* implicit */unsigned char) max((((((/* implicit */int) max((arr_21 [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] [i_1]), (((/* implicit */unsigned char) arr_37 [i_1] [i_2] [i_2] [i_1] [(unsigned char)6] [i_1] [i_2]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) (signed char)26))));
        }
        var_48 = ((/* implicit */unsigned char) -5749801855699237827LL);
    }
    var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42))))) : ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) var_16))));
    var_50 = ((/* implicit */short) ((((/* implicit */int) max((max((var_15), (((/* implicit */short) var_3)))), (((/* implicit */short) var_8))))) > (((/* implicit */int) var_11))));
}
