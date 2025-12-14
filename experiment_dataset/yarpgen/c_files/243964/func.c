/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243964
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
    var_10 += ((/* implicit */int) var_2);
    var_11 = ((/* implicit */int) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) var_3)))));
        var_13 += ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned int) ((arr_3 [(short)5]) << (((((/* implicit */int) (unsigned char)180)) - (177))))));
        var_15 ^= ((/* implicit */short) (~((+(677301129)))));
    }
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_5 [i_2] [i_2])), (arr_4 [i_2]))))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_17 = ((/* implicit */int) ((signed char) ((unsigned int) ((((/* implicit */_Bool) -4309884734772476848LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)759))) : (arr_14 [(signed char)9])))));
            arr_15 [i_2] [i_2] &= ((/* implicit */int) ((unsigned char) (+(arr_5 [i_2] [i_2]))));
            arr_16 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_11 [i_2])) * (((/* implicit */int) arr_6 [i_3]))))));
            var_18 = ((/* implicit */int) ((((arr_5 [i_3] [i_2]) * (((/* implicit */unsigned int) arr_13 [i_3] [i_2])))) << ((((~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127)))))) + (31)))));
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                arr_19 [i_2] [i_3] [0ULL] |= ((unsigned int) (-(((/* implicit */int) arr_18 [i_4 + 3] [i_4 - 1]))));
                var_19 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))));
                var_20 += ((/* implicit */unsigned char) (short)-25209);
                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4 - 1] [i_4 + 2] [i_4 + 3])) && (((/* implicit */_Bool) arr_17 [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 2]))))), ((-(arr_17 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1])))));
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_23 [i_5] [i_3] = ((/* implicit */short) var_0);
                var_22 = ((/* implicit */unsigned long long int) 4294967291U);
                var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_18 [i_3] [i_5])) ? (((arr_20 [i_2] [i_2] [i_2]) & (((/* implicit */long long int) arr_9 [i_2] [(unsigned short)9])))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_5])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_1))))) : ((~(arr_17 [i_2] [i_3] [i_5] [(_Bool)1]))));
                    arr_26 [i_6] [i_6] [i_6] [i_2] [i_6] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_6] [i_6]);
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_6])) ? (arr_13 [i_2] [i_2]) : (arr_13 [i_3] [i_3])));
                    var_26 = ((/* implicit */unsigned char) (~(arr_14 [i_2])));
                }
                for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_2] [i_3] [i_5] [i_7])))))))), (((((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 + 1] [i_5] [(unsigned char)6])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((var_5) ? (7827317735644258114ULL) : (((/* implicit */unsigned long long int) -4309884734772476848LL))))))));
                    arr_29 [i_2] [i_3] [i_5] [i_7] [i_5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_4 [i_7 - 2])))) ? (arr_9 [i_3] [i_7 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_7 - 2] [i_7 - 2])))))));
                    var_28 |= ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 1153571736U)) <= (arr_4 [i_3]))))))) * (arr_7 [i_2])));
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_9))), ((-(((/* implicit */int) var_1))))))), (((long long int) arr_28 [i_2] [i_2] [i_2] [i_8]))));
            arr_32 [(signed char)7] [i_8] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(unsigned char)18] [2ULL] [i_8])) % (((/* implicit */int) arr_27 [i_2] [i_2] [i_8]))))) ? (((((/* implicit */_Bool) arr_8 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5380))) : (1153571736U))) : ((+(arr_31 [(short)17] [i_8] [i_8])))))));
            var_30 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) arr_28 [i_2] [i_2] [i_2] [8ULL])));
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_31 = (~(((/* implicit */int) arr_8 [i_8])));
                var_32 = ((/* implicit */long long int) arr_17 [i_2] [(unsigned short)9] [(unsigned short)10] [(unsigned short)10]);
            }
            for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                var_33 += ((/* implicit */int) max((((/* implicit */signed char) arr_12 [i_2] [18ULL])), (((signed char) (((_Bool)1) ? (arr_14 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) arr_33 [i_10 - 2] [i_10] [i_10 + 2])), ((+(arr_14 [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [i_10] [i_10 - 1])) || (((/* implicit */_Bool) arr_28 [i_10 - 1] [i_8] [(signed char)0] [i_2])))))))));
                var_35 = ((/* implicit */_Bool) (~(arr_33 [i_2] [i_8] [i_10 - 1])));
            }
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                var_36 ^= ((/* implicit */long long int) arr_5 [i_2] [i_2]);
                arr_41 [i_2] [i_8] [(unsigned char)0] = ((/* implicit */signed char) arr_11 [i_8]);
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    arr_46 [i_12] [i_12] [i_11] [8U] [i_8] [i_2] = ((/* implicit */signed char) ((int) (-(arr_30 [i_2] [i_11] [i_12]))));
                    var_37 = ((/* implicit */unsigned char) max((1104243841U), (((/* implicit */unsigned int) (unsigned char)75))));
                    var_38 |= ((/* implicit */signed char) 4309884734772476848LL);
                }
            }
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))))) % (((/* implicit */int) ((((/* implicit */int) (signed char)-58)) <= (((/* implicit */int) var_2)))))));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) var_5))));
                        }
                    } 
                } 
                arr_56 [i_2] [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_2] [2LL] [8U])) ? (((((/* implicit */_Bool) (short)-5380)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-5380)))) : (((/* implicit */int) arr_8 [i_8]))));
            }
        }
        var_41 += ((/* implicit */signed char) (-((-(min((2075207356043934309ULL), (((/* implicit */unsigned long long int) arr_35 [i_2] [(_Bool)1] [i_2]))))))));
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_54 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)5] [i_2]) >> (((arr_4 [i_2]) - (8028965666095479854ULL)))))) ? (((/* implicit */int) arr_36 [i_2] [i_2])) : (((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [(signed char)17] [i_2] [(signed char)17])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_53 [(signed char)7] [i_2] [i_2] [i_2] [i_2]))))))))))));
    }
    var_43 = ((/* implicit */unsigned int) var_5);
}
