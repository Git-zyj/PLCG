/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238151
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~((~(((((/* implicit */int) var_15)) + (((/* implicit */int) var_4)))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) var_16);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_10 [i_1] [i_0] |= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_2] [i_0])))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_8)) : (arr_0 [i_0]))) - (3812205708LL)))));
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) (~(var_14)));
                            var_21 |= (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) * ((+(((/* implicit */int) arr_3 [(unsigned char)4] [(unsigned char)4]))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_4)))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_13 [i_0] [7ULL] [i_2] [i_2] [i_3]))));
                    }
                } 
            } 
        }
        var_23 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -2147483634)))))));
    }
    for (signed char i_5 = 2; i_5 < 9; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 2; i_6 < 8; i_6 += 3) 
        {
            arr_21 [i_6] [i_6 + 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_4)), (max((((arr_9 [i_5] [i_5] [i_5 - 2] [i_5] [i_5] [i_6]) ? (var_9) : (((/* implicit */unsigned long long int) arr_0 [i_5])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_6 - 1])))))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (max(((~(((/* implicit */int) var_17)))), (((/* implicit */int) arr_18 [i_5] [i_6])))) : (((/* implicit */int) var_17))));
            /* LoopSeq 4 */
            for (long long int i_7 = 3; i_7 < 7; i_7 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) var_3);
                arr_26 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) arr_2 [i_7])) ? (arr_0 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6]))) : (arr_17 [i_6 - 2] [i_6 - 2])))))));
            }
            for (short i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                var_26 = ((/* implicit */int) (((((~(var_9))) * (((/* implicit */unsigned long long int) max((arr_7 [i_5] [i_5] [i_8] [i_5]), (((/* implicit */int) arr_9 [i_5 - 1] [i_5 - 1] [i_6 - 1] [i_6 - 1] [i_8 + 1] [i_8 + 1]))))))) - (((((/* implicit */_Bool) arr_14 [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_15))))) : ((+(var_12)))))));
                arr_29 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_5])), (var_14)))), (min((((/* implicit */long long int) arr_4 [i_5] [i_5] [i_5])), (arr_24 [i_6])))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_8 + 1] [i_8 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (arr_20 [i_5] [i_5])))))));
            }
            for (signed char i_9 = 2; i_9 < 8; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        {
                            arr_37 [i_5] [i_5] [i_10] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (var_3)))) ? (var_10) : (((/* implicit */int) ((((/* implicit */int) var_2)) > (arr_7 [i_6] [i_6] [i_9] [i_6]))))))) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_31 [i_6] [i_6]))))))));
                            var_27 += ((/* implicit */unsigned char) ((short) ((unsigned short) ((unsigned short) var_6))));
                            arr_38 [i_5] [i_6] [i_9] |= ((/* implicit */unsigned char) max((((((175113634) - (((/* implicit */int) (unsigned short)7184)))) >= (((/* implicit */int) (unsigned short)58340)))), (arr_23 [i_5] [i_5] [(unsigned char)5])));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) var_11);
                arr_39 [i_9 + 1] [i_5] [i_5] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_5] [i_9] [i_9 + 2] [i_5])) | (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) arr_33 [i_5] [i_9] [i_6 - 2] [i_9 + 1]))) : (((((/* implicit */int) var_16)) | (((/* implicit */int) var_11)))))))));
                var_29 |= ((/* implicit */short) var_5);
                arr_40 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)7169)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) (signed char)112))));
            }
            for (int i_12 = 3; i_12 < 8; i_12 += 1) 
            {
                var_30 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (var_4))))) <= (((((/* implicit */_Bool) arr_18 [i_5] [i_6])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (min(((-(var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_5 + 1] [i_5 + 1] [i_12]) : (((/* implicit */int) var_11)))))))));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_31 ^= ((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) arr_34 [i_5 - 2] [i_6 - 1] [i_5 - 2])))))), (arr_6 [i_5] [i_6] [i_12 + 1] [i_13])));
                    var_32 ^= (!(((/* implicit */_Bool) max((((var_16) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5 - 1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6])))))))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 3) 
                {
                    var_33 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_12]))) ? (((((/* implicit */int) arr_27 [i_12] [i_5] [i_5])) / (arr_14 [i_5] [(signed char)2] [i_5]))) : (((((/* implicit */int) arr_41 [i_5] [i_12 - 2] [i_5] [i_5])) + (((/* implicit */int) arr_30 [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 1])))))));
                    var_34 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [i_5 + 1] [i_12 + 1])), (arr_5 [i_14 - 1] [i_12 + 2] [i_6 + 2] [i_5 + 1]))) > (arr_5 [i_14 + 1] [i_12 + 2] [i_6 + 2] [i_5 - 1])));
                    var_35 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (~(var_12))))) ? (((min((arr_20 [i_6] [i_6]), (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_19 [i_5])), (arr_7 [i_14 - 1] [i_12] [i_6] [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_5 + 1] [i_5 + 1] [i_6 + 1])))));
                }
            }
        }
        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_17))));
        var_37 ^= ((unsigned short) ((((((/* implicit */int) arr_34 [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_13 [i_5] [i_5 - 2] [i_5] [i_5 + 1] [i_5])))) < (((/* implicit */int) arr_9 [i_5] [8] [i_5] [i_5] [i_5] [i_5]))));
    }
    for (signed char i_15 = 2; i_15 < 9; i_15 += 3) 
    {
        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_15] [i_15 - 2] [i_15 - 2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) arr_14 [i_15] [i_15] [i_15])) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_15] [i_15]))) : (var_8))))))))));
        arr_52 [i_15] = ((/* implicit */short) max((((/* implicit */unsigned int) ((int) arr_25 [i_15 - 1]))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_14 [i_15 - 1] [i_15 - 2] [i_15 - 2])) : (var_8))), (((/* implicit */unsigned int) min((arr_13 [i_15] [i_15] [i_15] [i_15] [i_15]), (((/* implicit */unsigned short) var_2)))))))));
        arr_53 [i_15] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_15 - 1] [i_15]) : (((/* implicit */unsigned long long int) arr_17 [i_15] [i_15])))));
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(var_5)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))));
    }
    var_40 = ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))), (max((var_14), (((/* implicit */unsigned int) var_6))))))));
}
