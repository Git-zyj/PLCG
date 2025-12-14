/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242387
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (956795713U) : (max((var_5), (((/* implicit */unsigned int) ((signed char) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) var_7);
        var_20 = ((/* implicit */short) var_8);
        var_21 = ((/* implicit */_Bool) ((int) arr_0 [i_0 - 1]));
        var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_0 + 1] [i_0 + 1]));
    }
    var_23 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    var_24 = ((/* implicit */short) (((~(((/* implicit */int) var_3)))) >= (var_1)));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_25 = ((/* implicit */_Bool) var_7);
            var_26 = ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))))));
        }
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
        {
            var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) | (arr_7 [i_3 - 2]))) & (((/* implicit */int) (unsigned short)40064))));
            arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_1] [i_3] [i_3]))))))));
            var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((arr_7 [i_3]) / (((/* implicit */int) arr_9 [i_1] [i_3] [i_3 - 1])))) : (((((/* implicit */int) (unsigned short)50378)) & (((/* implicit */int) arr_8 [i_3 - 3] [(unsigned short)7])))))) > (((/* implicit */int) var_0))));
        }
        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) arr_12 [11] [i_1]);
                            var_30 &= ((/* implicit */int) ((signed char) (((((~(((/* implicit */int) arr_22 [i_1] [i_1] [i_5] [i_6 + 1] [i_7])))) + (2147483647))) << (((((/* implicit */int) ((signed char) arr_15 [i_4] [i_4] [i_7]))) - (85))))));
                            var_31 ^= ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_7 [i_6]) : (((/* implicit */int) (unsigned short)58334))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-13)) | (((/* implicit */int) arr_6 [0LL])))))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_5])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 - 2] [i_4] [i_5 - 1] [i_6 + 2] [i_7 + 1])))))));
                        }
                    } 
                } 
            } 
            var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(2147483643))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) - (10948563866708121658ULL)))))))));
            /* LoopSeq 1 */
            for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) var_16)))))) ? ((~(((/* implicit */int) arr_25 [(signed char)11] [5U] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)7202)) & (((/* implicit */int) arr_23 [i_9 + 1]))));
                    arr_28 [(unsigned short)11] [i_9] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((_Bool) arr_26 [i_9 + 1] [i_9 - 1] [i_8 - 2] [i_4 - 2]));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)2048)), (arr_17 [i_4 + 2] [i_4 - 2] [i_9] [i_9] [i_1] [i_1]))))));
                        var_36 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)254))))) ? (223140468U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_17)))))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_9])))) & (arr_29 [i_1] [i_1] [i_1] [i_4 + 1] [i_10] [i_1] [i_10])))));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 10; i_11 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (~(var_14))))));
                        var_38 ^= ((/* implicit */unsigned char) arr_5 [i_4 + 1] [i_1]);
                        var_39 -= ((/* implicit */long long int) (unsigned char)2);
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((arr_26 [i_4 + 1] [i_8 + 1] [i_11 - 2] [i_9 - 1]) > (arr_26 [i_4 - 2] [i_8 - 1] [i_11 - 2] [i_9 + 1]))))));
                        var_41 = ((/* implicit */unsigned int) ((((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    var_42 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((int) (unsigned char)254))) <= (((((/* implicit */_Bool) 4071826827U)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) (signed char)-107)) || (((/* implicit */_Bool) arr_31 [i_1] [i_4 - 2] [i_12] [i_8] [i_8] [i_8] [i_4]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_13 = 2; i_13 < 10; i_13 += 1) 
                    {
                        var_43 &= (~(((/* implicit */int) arr_9 [i_1] [i_8] [i_12])));
                        var_44 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_8] [i_13]);
                        var_45 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_1))))));
                    }
                    var_46 = ((/* implicit */long long int) (unsigned char)254);
                }
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (short)-29362)))));
                        var_48 = ((/* implicit */unsigned long long int) var_15);
                    }
                    var_49 = ((/* implicit */long long int) ((2147483136U) >> (((((/* implicit */int) ((signed char) max((((/* implicit */long long int) 194675080U)), (-3242136405092980530LL))))) + (134)))));
                }
                for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    arr_44 [i_1] [(signed char)9] [i_8] [i_16] = ((/* implicit */signed char) max((((/* implicit */int) (short)-2030)), ((~(((/* implicit */int) (signed char)115))))));
                    arr_45 [i_4 + 2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_5))) || (((/* implicit */_Bool) (unsigned short)60199))))), (((((-6324480521710663713LL) / (((/* implicit */long long int) -920764009)))) * (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_50 *= ((/* implicit */_Bool) 223140468U);
                        var_51 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-115))));
                    }
                    var_52 ^= ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)7202)))) ^ (((/* implicit */int) ((var_4) >= (((/* implicit */int) (unsigned char)215)))))))));
                    arr_48 [i_16] [i_8] [i_4] = ((((long long int) ((2030374347U) / (223140468U)))) << (((/* implicit */int) ((4071826806U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_0)))))))));
                }
                var_53 += ((/* implicit */long long int) var_0);
            }
            var_54 = ((/* implicit */unsigned long long int) (unsigned char)225);
        }
        var_55 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (((((/* implicit */_Bool) (-(arr_5 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)24053)))))) : ((+(var_11)))))));
        var_56 ^= ((/* implicit */unsigned char) ((((arr_16 [i_1] [i_1]) <= (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-26101)), (2147483139U)))))) ? (var_5) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))) / (4071826807U)))));
        var_57 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (unsigned char)34)))));
    }
}
