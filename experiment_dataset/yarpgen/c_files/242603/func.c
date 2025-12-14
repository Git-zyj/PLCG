/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242603
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            var_13 += ((/* implicit */int) ((((/* implicit */int) max((max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-43)))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)236)) == (var_9))))))) == (((arr_3 [i_1 + 3] [i_1 - 2]) + (arr_3 [i_1 - 1] [i_1 + 1])))));
            var_14 = ((unsigned char) ((max((var_2), (arr_1 [i_0] [i_1]))) | (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3)))))));
            var_15 = ((/* implicit */unsigned char) min((var_15), (((unsigned char) max((2398219440008153282LL), (-5075066849971694681LL))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_10 [i_2] [i_2] [i_1] [i_2] = min((((((/* implicit */_Bool) ((unsigned char) arr_9 [i_3] [i_2] [i_2] [i_1] [i_0]))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_1 - 2] [i_2] [(unsigned char)5] [i_3]))) : (max((((/* implicit */int) (signed char)39)), (arr_3 [i_0] [i_1]))))), (((/* implicit */int) (unsigned char)0)));
                        var_16 = ((/* implicit */signed char) min((arr_1 [i_1] [i_1 + 1]), ((-((-(-79820870)))))));
                        var_17 |= ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) var_4)) : (var_12))))), (((/* implicit */int) (unsigned char)234))));
                    }
                } 
            } 
        }
        var_18 = max((var_1), (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)24)))) & (((((/* implicit */int) (signed char)125)) >> (((var_9) - (502219475)))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_19 -= ((/* implicit */long long int) (signed char)125);
        arr_15 [i_4] = arr_13 [i_4];
    }
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_24 [i_7] [i_6] [i_7] [i_8] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((var_6) > (arr_19 [i_5] [i_5] [i_7])))) + (((/* implicit */int) (signed char)15)))));
                        arr_25 [i_5] [i_7] [i_7] [i_8] [(unsigned short)12] [i_5] = ((/* implicit */unsigned short) ((arr_23 [i_5] [i_6] [i_7] [17] [i_8]) == (((/* implicit */int) max((max((((/* implicit */unsigned short) var_4)), (arr_18 [i_8] [i_5]))), (max((var_5), (((/* implicit */unsigned short) (signed char)-123)))))))));
                        var_20 = ((/* implicit */int) (unsigned char)19);
                    }
                    arr_26 [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((arr_20 [(unsigned char)21]), (((/* implicit */unsigned char) (signed char)-52)))))) && (((/* implicit */_Bool) ((int) (+(var_2)))))));
                }
            } 
        } 
        arr_27 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_5] [3LL]))))))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 21; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            var_21 ^= (+(((/* implicit */int) min(((unsigned short)3658), ((unsigned short)805)))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))));
                            var_23 -= ((/* implicit */unsigned short) max((max((-8), (var_0))), (min((min((var_9), (arr_33 [i_5]))), (max((((/* implicit */int) arr_31 [i_12] [i_12] [i_12] [(unsigned short)12])), (var_12)))))));
                        }
                        arr_38 [i_9] [i_9] [i_9] [i_10] [i_10] = ((/* implicit */long long int) max((arr_23 [i_5] [i_9] [i_9] [i_10] [9LL]), (((min((854010566), (((/* implicit */int) arr_30 [i_5] [i_9 + 2] [(unsigned short)6] [i_11])))) | (((/* implicit */int) ((((/* implicit */long long int) arr_23 [i_5] [i_5] [i_10] [10LL] [i_11])) > (arr_21 [i_9]))))))));
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10] [i_10] [i_9 + 1] [i_9 + 2]))) > (arr_36 [i_9 - 1] [i_9])));
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
    {
        var_25 &= ((/* implicit */int) max((((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_2)))), (((unsigned char) arr_37 [i_13] [i_13] [i_13] [1] [i_13] [i_13] [i_13]))));
        arr_43 [(unsigned char)22] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_32 [i_13] [i_13] [i_13] [i_13]))) - (((/* implicit */int) arr_32 [i_13] [i_13] [11LL] [(unsigned short)0]))));
    }
    var_26 = ((/* implicit */long long int) ((unsigned char) ((signed char) ((long long int) var_11))));
    var_27 = ((/* implicit */long long int) ((max((((/* implicit */long long int) (~(var_0)))), (min((9223372036854775807LL), (((/* implicit */long long int) 2147483647)))))) > (((min((var_1), (((/* implicit */long long int) (signed char)-1)))) & (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17; i_14 += 2) 
    {
        for (int i_15 = 0; i_15 < 17; i_15 += 4) 
        {
            {
                arr_51 [i_15] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)230)))))))) ? (((long long int) arr_28 [(unsigned char)17] [(unsigned char)17])) : (((/* implicit */long long int) ((int) arr_44 [i_15])))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)52))))) ? (((((((/* implicit */long long int) -1)) != (var_1))) ? (((/* implicit */int) ((unsigned char) arr_28 [i_14] [6LL]))) : ((-(var_12))))) : (max((((((/* implicit */int) (unsigned char)123)) - (((/* implicit */int) arr_37 [i_14] [i_14] [(unsigned char)16] [i_15] [(unsigned char)16] [(unsigned char)16] [i_15])))), ((~(arr_33 [i_14]))))))))));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(1060818869))))));
            }
        } 
    } 
}
