/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198632
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (max((((/* implicit */long long int) var_9)), (var_8))))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_2)) : (35184372084736LL))))))))));
    var_17 = ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)113)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_1 [(unsigned short)3])), (arr_0 [i_0]))), (max((((/* implicit */unsigned int) (_Bool)0)), (arr_0 [(_Bool)1])))))) && (((/* implicit */_Bool) (unsigned short)23159))));
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))) : (((int) (signed char)-102)))))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned char)127))))), (((unsigned int) (signed char)100))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_15))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((min((((/* implicit */short) (_Bool)1)), (arr_1 [i_1]))), (arr_1 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            arr_12 [(short)14] [(_Bool)1] [i_2] [i_1] [(_Bool)1] [10ULL] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_3 - 3] [i_1] [i_1]))))), ((-(((/* implicit */int) ((_Bool) arr_0 [i_4])))))));
                            arr_13 [i_0] [i_1] [(unsigned char)5] [i_3 - 1] [i_4] = ((/* implicit */unsigned char) max((max((arr_6 [i_1] [18ULL] [i_3] [i_1]), (((/* implicit */unsigned int) arr_10 [i_0] [(_Bool)1] [i_3 + 1] [(_Bool)1] [(_Bool)1])))), (((/* implicit */unsigned int) ((_Bool) arr_10 [(signed char)10] [17U] [i_3 - 2] [i_3 + 1] [1ULL])))));
                            arr_14 [i_1] [16ULL] [i_1] [i_3] [16ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_12))))))));
                            var_21 = ((/* implicit */signed char) (-(((((long long int) 3630824850940752103ULL)) & (((/* implicit */long long int) (-(8191U))))))));
                        }
                        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_22 = min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [(short)8] [(unsigned char)6]) < (((/* implicit */int) (unsigned short)22060)))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(short)4] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_17 [i_0] [i_0] [i_1] [0U] [(_Bool)1] [i_0]))))), (((/* implicit */unsigned int) (!((!((_Bool)1)))))));
                            var_23 = ((/* implicit */short) arr_9 [(short)12] [2ULL] [(short)15] [(short)15] [i_5] [(short)15]);
                            var_24 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [(_Bool)0] [i_1] [i_1] [(signed char)0])))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_10 [i_5] [i_3 - 2] [i_2] [i_1] [i_0]))))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) * (-30LL)))))) + (((((/* implicit */_Bool) max((5186216509904606147ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((unsigned long long int) (signed char)-125))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_1] [9ULL] [i_1] [i_1] [(signed char)7] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10778067099170745991ULL)) ? (((/* implicit */int) (short)-31253)) : (((/* implicit */int) (_Bool)1))));
                            arr_21 [i_0] [i_1] [(signed char)18] [i_1] [i_6] [18LL] = ((/* implicit */int) max((((/* implicit */long long int) ((short) (_Bool)1))), (((((var_15) + (9223372036854775807LL))) << (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_3 - 1] [i_6])) - (93)))))));
                            var_25 = ((/* implicit */long long int) ((((unsigned long long int) (~(536862720)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            var_26 = ((/* implicit */_Bool) min((-8108767370406177058LL), (((/* implicit */long long int) (_Bool)1))));
                            var_27 = ((/* implicit */unsigned char) ((short) var_11));
                        }
                        arr_22 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                        var_28 = ((/* implicit */short) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0])) || ((!(((/* implicit */_Bool) 5731093215297336918LL)))))))));
                    }
                } 
            } 
            arr_23 [i_0] [i_1] [0ULL] |= ((((/* implicit */_Bool) (signed char)-33)) || (((/* implicit */_Bool) arr_9 [7U] [i_1] [16ULL] [7U] [7U] [i_1])));
            var_29 = ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_0] [5ULL] [i_1] [i_1] [i_1]))))));
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) / (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_7] [i_0] [i_7] [(unsigned short)8]))) : (((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */unsigned long long int) arr_17 [17ULL] [i_0] [i_7] [i_7] [(unsigned char)9] [i_7])) : (var_11)))));
            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) 2147483647))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
            var_33 = ((/* implicit */long long int) ((int) (_Bool)1));
            var_34 += min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)125)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (739845806U))))), (var_0));
        }
        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) arr_30 [i_0]))))) && (((/* implicit */_Bool) max((((/* implicit */short) var_1)), (arr_30 [i_0]))))));
    }
    /* LoopSeq 3 */
    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                {
                    arr_41 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) min((min((var_15), (((/* implicit */long long int) (_Bool)1)))), (min((arr_9 [i_9] [i_10] [i_11] [i_9] [i_11] [3LL]), (arr_9 [i_9] [i_10] [i_11] [(short)9] [i_11] [i_11])))));
                    arr_42 [(unsigned char)12] [i_10] [i_11] = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_9 [i_9] [i_9] [i_9] [i_10] [(short)18] [i_11]), (((/* implicit */long long int) (signed char)-127))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_4))));
                    arr_43 [12ULL] [i_10] [i_11] [i_11] = ((/* implicit */long long int) ((arr_0 [(unsigned short)5]) != (((/* implicit */unsigned int) max((1172679773), (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        arr_48 [i_9] [i_9] [i_9] [11] [(_Bool)1] [i_12] = ((/* implicit */short) (~(min((max((arr_46 [5] [i_10] [i_10] [i_12]), (5461917557529585573ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_12] [i_11] [(short)17] [i_9] [15ULL])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12)))))))));
                        var_36 |= ((/* implicit */unsigned long long int) arr_31 [i_9]);
                        var_37 |= arr_40 [i_9] [i_9] [i_9];
                    }
                }
            } 
        } 
        arr_49 [i_9] = ((/* implicit */int) (~((((~(var_2))) >> (((arr_6 [(short)6] [i_9] [i_9] [(short)6]) - (3310692964U)))))));
        var_38 = ((/* implicit */int) (_Bool)1);
        arr_50 [i_9] = ((/* implicit */unsigned char) ((max((min((4294959104U), (((/* implicit */unsigned int) arr_45 [i_9] [i_9] [i_9] [1U])))), (((((/* implicit */_Bool) arr_0 [11LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9]))) : (var_2))))) & (((((/* implicit */_Bool) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-32766)))))) ? ((~(var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-125)) ^ (-2147483641))))))));
    }
    for (unsigned long long int i_13 = 3; i_13 < 13; i_13 += 1) 
    {
        var_39 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_4 [(short)14] [i_13 - 3]), (((/* implicit */int) var_12))))), (((long long int) ((((/* implicit */_Bool) (signed char)125)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_40 = ((/* implicit */short) (((!(((_Bool) arr_24 [(short)4] [(short)4] [(short)2])))) ? (((unsigned long long int) arr_1 [i_13])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_18 [8U] [i_13 - 2] [i_13 + 1]))))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_41 = ((/* implicit */short) arr_54 [i_14]);
        arr_57 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */short) arr_25 [i_14] [i_14])), (var_9))), (arr_30 [i_14])))) ? (((((/* implicit */int) (signed char)-54)) * (((/* implicit */int) (unsigned char)39)))) : (((/* implicit */int) min(((short)-1), (((/* implicit */short) (_Bool)1)))))));
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)70)) || ((_Bool)0)))))))));
        var_43 = ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 158914438)) : (1073741823U))))), (((/* implicit */unsigned int) (short)-219))));
        var_44 = ((/* implicit */short) arr_54 [i_14]);
    }
    /* LoopSeq 2 */
    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
    {
        var_45 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_15 + 1])) || (((/* implicit */_Bool) arr_60 [i_15 + 1]))));
        var_46 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_58 [i_15 + 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_15]))) & (8881708225482589740ULL)))));
        arr_62 [i_15] = ((/* implicit */short) ((_Bool) ((_Bool) var_2)));
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned char) 5989401679407900160ULL);
        arr_65 [i_16] [i_16] = ((/* implicit */unsigned long long int) (short)-22748);
    }
}
