/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193286
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
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) (signed char)55))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) var_15)) | (min((((arr_0 [i_0]) & (arr_0 [i_0 - 1]))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)3))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                arr_10 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (signed char)-118)), (min((((/* implicit */long long int) arr_1 [i_2 - 4])), (var_11)))));
                var_17 &= ((/* implicit */short) min((((/* implicit */int) min((arr_4 [14] [i_0 - 3]), (arr_4 [(signed char)6] [i_0 - 3])))), (((((/* implicit */_Bool) arr_4 [(signed char)14] [i_0 + 1])) ? (((/* implicit */int) arr_4 [(signed char)6] [i_0 - 3])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_0 - 2]))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_0]) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_1 - 4] [i_2 - 4])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_2] [i_2] [i_2 - 3] [i_1])), (arr_5 [i_0 + 1] [i_1 - 2] [i_2 - 2]))))) : (((((/* implicit */_Bool) (signed char)1)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3934)))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) (short)-29979)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (min((((var_2) | (((/* implicit */int) (short)25099)))), (((/* implicit */int) arr_4 [i_1] [i_0 + 1]))))));
                arr_14 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_1] [i_0 - 3])) ? (((/* implicit */int) arr_12 [8] [i_0 - 3] [i_1] [i_0 - 3])) : (-26)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_0 - 3] [i_1] [i_0 - 1])) / (((/* implicit */int) arr_12 [(_Bool)1] [i_0 - 1] [i_1] [i_0 - 2]))))) : (9346128278393421759ULL));
                var_19 -= ((/* implicit */signed char) ((arr_0 [i_0 - 2]) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 3])))))));
            }
            for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                arr_18 [i_0] [i_0] [i_4] [0] &= ((/* implicit */signed char) (-(((/* implicit */int) (!(arr_15 [i_1 - 1] [i_1 - 4] [i_1 - 4]))))));
                var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)237)), (532575944704ULL)))) ? (1233834186) : ((-2147483647 - 1))))), ((-(min((532575944678ULL), (((/* implicit */unsigned long long int) -1173051412))))))));
            }
            /* LoopSeq 2 */
            for (signed char i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
            {
                arr_21 [i_1] = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_17 [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 - 3]))))));
                var_21 = ((/* implicit */short) (~(var_15)));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((/* implicit */int) min((arr_5 [i_0 - 3] [i_1 - 1] [i_5 + 1]), (arr_5 [i_0 - 2] [i_1 - 2] [i_5 + 1])))))))));
                var_23 &= ((signed char) min((arr_7 [i_0 - 3] [(unsigned short)0] [i_0 + 1]), (arr_7 [i_0 - 1] [8] [i_0 + 1])));
            }
            for (signed char i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    arr_28 [(unsigned char)15] [i_1] [i_6] [i_7] [i_1] = ((/* implicit */int) min((7881299347898368ULL), (((/* implicit */unsigned long long int) ((_Bool) arr_26 [i_7] [i_6 + 1] [(short)5] [i_1 + 2] [i_0] [i_0 - 3])))));
                    var_24 = ((/* implicit */signed char) min((var_24), (min((var_4), (((/* implicit */signed char) ((_Bool) arr_4 [(signed char)0] [(signed char)0])))))));
                }
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (_Bool)0))));
            }
            arr_29 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 532575944699ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)30))))) && ((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)0))))))), (var_12)));
            arr_30 [i_1] = ((/* implicit */unsigned long long int) (((~((~(((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) (signed char)-101))));
        }
        var_26 |= ((/* implicit */signed char) ((unsigned short) arr_11 [i_0 - 2] [i_0 - 2]));
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        arr_35 [(unsigned char)14] [(signed char)13] = ((/* implicit */_Bool) min((((((((/* implicit */int) var_4)) >= (678865532))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_10)), (arr_5 [i_8] [i_8] [i_8]))))) : (((-1662043770747196411LL) & (var_12))))), (((/* implicit */long long int) (-((-(1792))))))));
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-15))));
        arr_36 [i_8] [i_8] = ((/* implicit */_Bool) arr_22 [i_8] [i_8]);
    }
    for (signed char i_9 = 1; i_9 < 22; i_9 += 1) 
    {
        arr_41 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(9100615795316129837ULL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((long long int) ((long long int) (short)-29979)))));
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        var_29 = ((/* implicit */signed char) (-(((min((arr_34 [i_10]), (((/* implicit */long long int) var_2)))) / (arr_0 [i_10])))));
        var_30 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_45 [i_10] [i_10])) | (((/* implicit */int) arr_45 [i_10] [i_10])))));
        var_31 &= min((7881299347898350ULL), (((/* implicit */unsigned long long int) (signed char)-26)));
        arr_46 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)0), ((unsigned short)16384)))) ? (((arr_19 [i_10]) ? (((/* implicit */int) arr_19 [i_10])) : (((/* implicit */int) var_7)))) : (((int) arr_19 [i_10]))));
    }
    var_32 = ((/* implicit */unsigned char) ((unsigned short) var_14));
}
