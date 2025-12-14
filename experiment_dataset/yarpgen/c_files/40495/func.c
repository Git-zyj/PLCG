/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40495
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
    var_12 = (unsigned short)65535;
    var_13 = ((/* implicit */long long int) (unsigned short)65529);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_4 [i_1] &= ((/* implicit */int) (unsigned char)211);
            arr_5 [i_0] = ((/* implicit */int) 1721285786U);
        }
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_14 |= ((/* implicit */unsigned char) var_6);
            arr_10 [(unsigned char)3] [11LL] [i_0] = ((/* implicit */long long int) (~(max((((/* implicit */int) ((unsigned short) var_5))), (((var_11) & (arr_7 [(unsigned short)7] [i_2])))))));
        }
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            var_15 &= arr_3 [i_0 - 1] [4U];
            var_16 = ((/* implicit */unsigned short) 1069547520);
            var_17 = (-(((/* implicit */int) ((((((/* implicit */long long int) var_10)) % (-1665162950432546597LL))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (3298387583U))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || ((!(((/* implicit */_Bool) var_11)))))))));
                    var_19 = ((/* implicit */int) arr_12 [i_0]);
                }
            } 
        } 
    }
    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
    {
        var_20 = (+(((/* implicit */int) (unsigned char)242)));
        /* LoopSeq 2 */
        for (int i_7 = 1; i_7 < 19; i_7 += 2) /* same iter space */
        {
            arr_25 [(unsigned char)4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) arr_23 [15])) : (((/* implicit */int) ((((arr_24 [i_6 + 1]) & (((/* implicit */long long int) 0)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51328))) == (arr_24 [17U]))))))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned short) var_4));
            var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) ((long long int) (unsigned char)47))) ? (((/* implicit */long long int) ((int) (~(((/* implicit */int) arr_22 [i_6])))))) : (max((((/* implicit */long long int) ((int) var_0))), (arr_24 [i_7 - 1])))))));
        }
        for (int i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 22; i_9 += 1) 
            {
                arr_33 [12U] [i_6 - 2] [(unsigned char)18] [(unsigned char)20] |= ((int) ((((int) -4389903567135582685LL)) * (((((/* implicit */int) (unsigned char)112)) / (((/* implicit */int) arr_22 [i_6]))))));
                var_23 |= ((/* implicit */unsigned char) min((arr_32 [10U] [i_8] [i_8 + 2] [8U]), (-2147483637)));
            }
            var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) arr_23 [i_6 - 2]))));
            arr_34 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 16LL))));
            arr_35 [i_8] [17] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)248)) ^ (((/* implicit */int) (unsigned char)225)))))));
            arr_36 [i_6 - 2] [19U] [i_8] = ((/* implicit */int) ((unsigned char) ((int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_30 [i_6 + 1] [i_6 - 2] [i_6]) : (9)))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            arr_39 [i_10] = arr_38 [i_10];
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        arr_46 [(unsigned char)20] [i_10] [i_10] [i_10] [(unsigned char)4] [18] |= ((/* implicit */int) (unsigned char)164);
                        var_25 = ((/* implicit */unsigned int) ((((int) ((arr_24 [1LL]) < (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11])))))) * (((/* implicit */int) min(((unsigned char)10), ((unsigned char)164))))));
                        arr_47 [i_10] = ((/* implicit */unsigned int) (+(((int) (unsigned char)17))));
                        arr_48 [i_11] [i_11] [i_11] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_44 [i_6 - 1] [i_6] [i_10] [i_10] [(unsigned char)22] [i_12])), (arr_28 [i_12] [15LL] [(unsigned char)9]))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) % (1665162950432546607LL)))))) ? (((((/* implicit */_Bool) 2140798239U)) ? (((/* implicit */int) ((unsigned char) var_4))) : ((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_12]) : (((/* implicit */int) arr_27 [4LL] [i_10]))))))));
                        var_26 = ((/* implicit */long long int) ((unsigned short) (+(((((/* implicit */_Bool) 1692471445)) ? (1665162950432546607LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 - 1]))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [(unsigned short)16] [(unsigned char)4])) >> (((((/* implicit */int) arr_42 [i_13])) - (41250))))))));
            arr_52 [5] [1U] = ((int) ((int) ((((/* implicit */_Bool) -655067763)) ? (arr_28 [i_6 - 2] [(unsigned char)1] [(unsigned char)18]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))))));
            var_28 |= ((/* implicit */unsigned int) arr_41 [i_6] [i_13]);
            var_29 = ((/* implicit */unsigned char) ((min((((long long int) (unsigned short)65531)), (((/* implicit */long long int) ((var_11) ^ (((/* implicit */int) var_9))))))) >= (((/* implicit */long long int) min((((int) (unsigned char)170)), (var_11))))));
        }
        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
        {
            var_30 = ((((arr_21 [i_6 - 1]) << (((((arr_50 [18]) + (454245259))) - (3))))) - (((/* implicit */int) ((unsigned char) 1692471452))));
            arr_57 [i_14] [i_14] = arr_21 [10];
            arr_58 [i_14] [7LL] [i_14] = ((int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49444)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)136))))) + (min((((/* implicit */unsigned int) -1692471452)), (var_7)))));
        }
    }
}
