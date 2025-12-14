/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45902
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [18U] [(unsigned short)12] = ((/* implicit */signed char) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (unsigned char)24)) ? (33538048LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32766)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_0]))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0]), (arr_1 [i_0])))) * (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((((/* implicit */long long int) var_8)) > (var_15))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((max((((/* implicit */long long int) 190314858U)), (-1LL))) >> (((/* implicit */int) var_13))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13)))))));
            arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_12);
            var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) arr_1 [i_1]))))));
            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_11))));
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            arr_16 [i_3] [i_3] = max(((~(max((((/* implicit */long long int) (unsigned char)231)), (arr_8 [(unsigned char)3]))))), (((/* implicit */long long int) (~(var_3)))));
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_11 [(unsigned char)0]))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_1);
                arr_21 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */short) (-((+(((/* implicit */int) (signed char)0))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_3])), (var_7)))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_15 [(short)7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_1])))), (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) var_12)))))))) : (var_12)));
            }
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                arr_26 [i_1] [i_3] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) min((arr_24 [i_1] [i_5]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10)))))))), ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (((/* implicit */int) (unsigned short)13426))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_0)))))));
                arr_27 [i_3] [i_3] = ((/* implicit */signed char) var_15);
            }
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
        {
            arr_30 [5LL] [i_6] [(short)1] = ((/* implicit */signed char) var_8);
            var_22 = ((var_5) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))));
            arr_31 [i_1] = ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_8))))));
            arr_32 [i_1] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_14);
        }
        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 1) 
                {
                    {
                        arr_41 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) + (85879219U)))) ? (((/* implicit */int) ((var_1) == (((/* implicit */int) arr_34 [(signed char)8] [(signed char)8]))))) : (((((/* implicit */_Bool) arr_6 [i_1] [(unsigned char)1])) ? (((/* implicit */int) arr_19 [i_1] [i_1] [(unsigned char)11])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (signed char)-103))));
                        arr_42 [i_1] [i_7] [i_9] [i_1] = max((((/* implicit */unsigned char) (signed char)68)), ((unsigned char)223));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            arr_45 [i_1] [i_1] [i_9] [(signed char)3] [(unsigned char)8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2)))))) == (((((/* implicit */_Bool) (signed char)-1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))));
                            arr_46 [i_1] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */int) var_15);
                            var_23 -= ((/* implicit */signed char) ((long long int) arr_11 [i_1]));
                            arr_47 [i_9] [i_1] [10] [i_1] [i_1] = ((/* implicit */unsigned char) (+((-(var_10)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            var_24 += ((/* implicit */signed char) var_8);
                            var_25 -= ((/* implicit */signed char) ((arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) == (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_24 [i_11] [i_11 + 1])))))));
                        }
                    }
                } 
            } 
            arr_51 [i_7] = ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (((((((/* implicit */_Bool) arr_34 [i_1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0))) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_14 [i_1] [i_7])))))));
        }
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)1))) ? (((((/* implicit */_Bool) ((arr_36 [i_1] [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) ? (((var_12) + (((/* implicit */long long int) arr_15 [i_1])))) : (((/* implicit */long long int) arr_37 [i_1] [11ULL] [i_1] [i_1])))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1])) ? (arr_22 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) (short)-32766))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-43))) / (var_0))))))))));
    }
    for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((var_1), (((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((var_3) != (((/* implicit */int) var_9)))))))))))));
        var_28 += ((/* implicit */signed char) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (arr_53 [15LL])))))) < ((((-(var_1))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    }
    var_29 = ((/* implicit */long long int) var_8);
    var_30 += ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
    {
        arr_58 [i_13] = var_1;
        var_31 = ((/* implicit */unsigned short) (-((((-(((/* implicit */int) (short)-6)))) - ((-(((/* implicit */int) (signed char)102))))))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
    {
        arr_61 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) var_9))));
        arr_62 [12LL] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_10))) & ((~(((/* implicit */int) arr_2 [i_14] [i_14]))))));
    }
    var_32 = ((/* implicit */unsigned int) var_3);
}
