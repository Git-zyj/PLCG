/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194239
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 1] = ((/* implicit */signed char) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) (unsigned char)31))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52308)))))) ? (max((((/* implicit */int) (unsigned short)54907)), (163946132))) : (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)110)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
    {
        arr_11 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-23)) / (163946132))) | (((/* implicit */int) ((8930683454461826255ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))))))));
        var_17 *= ((/* implicit */_Bool) var_11);
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4]))))) | (((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (short)1149))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_6 - 1] [i_6 - 1])) == (((var_6) & (((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))))));
                            arr_28 [i_4] [i_8] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_4] [i_5] [i_5]))));
                            var_20 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_22 [0ULL])))) <= (((/* implicit */int) (unsigned char)230))));
                        }
                    }
                } 
            } 
        } 
        var_21 *= ((_Bool) (signed char)-33);
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_1 [(unsigned short)10]))));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_31 [i_10] [i_9] [i_4] [i_4]))));
                var_24 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)189)) % (((/* implicit */int) var_13)))) << ((+(((/* implicit */int) (signed char)2))))));
                var_25 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-124))));
                arr_33 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-33))));
                arr_34 [i_4] [i_4] [i_9] [(signed char)3] = arr_29 [i_10] [i_9] [i_4];
            }
        }
        for (unsigned char i_11 = 2; i_11 < 12; i_11 += 3) 
        {
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((16383) <= (((/* implicit */int) arr_20 [i_4] [i_4] [i_4])))))));
            var_27 *= ((/* implicit */short) ((unsigned long long int) (signed char)-2));
            var_28 = ((arr_14 [i_11 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
            arr_38 [(unsigned char)4] [i_11] = ((((/* implicit */_Bool) arr_20 [i_11] [i_11 - 1] [i_4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_14 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))));
        }
    }
    for (unsigned char i_12 = 1; i_12 < 17; i_12 += 3) 
    {
        var_29 *= ((/* implicit */signed char) ((max(((+(((/* implicit */int) (signed char)0)))), (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)12)))))) != (((((/* implicit */int) (signed char)-49)) / (min((((/* implicit */int) arr_40 [i_12] [i_12 + 3])), (var_6)))))));
        var_30 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)-2))))));
        var_31 = ((/* implicit */_Bool) (-(((int) (signed char)87))));
        /* LoopSeq 1 */
        for (signed char i_13 = 3; i_13 < 18; i_13 += 1) 
        {
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)63)), ((short)-1149)))) >= ((~(((/* implicit */int) (unsigned char)192))))))) >= ((-(((/* implicit */int) ((unsigned char) arr_7 [i_12 + 1] [4U] [i_13 - 1]))))))))));
            /* LoopSeq 3 */
            for (short i_14 = 2; i_14 < 18; i_14 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_12 + 4] [i_13 - 2])) || (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) (!((_Bool)0)))))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 21; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        {
                            var_34 = min((var_0), (((signed char) arr_41 [i_14 - 2])));
                            var_35 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 11573698689359185584ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (short)6770))))) : ((~(((((/* implicit */int) arr_5 [i_12 - 1] [(signed char)19] [(signed char)19])) << (((arr_4 [(signed char)15]) - (581103898U)))))))));
                        }
                    } 
                } 
            }
            for (int i_17 = 1; i_17 < 17; i_17 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned long long int) (-(arr_39 [i_13 - 3] [i_13])));
                var_37 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                arr_56 [(signed char)17] [i_13 + 2] [(signed char)17] [i_12 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_5 [i_12] [i_12] [i_17 - 1]))))))));
            }
            for (int i_18 = 1; i_18 < 17; i_18 += 4) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (~(min((arr_41 [i_18 + 3]), (arr_41 [i_18 + 1]))))))));
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) var_15))));
                    var_40 = (~(((((/* implicit */_Bool) -16405)) ? ((+(((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) (unsigned short)28097)))));
                }
                arr_64 [i_18] [i_13 - 2] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_18 + 4] [(signed char)9])) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_63 [i_12 + 3] [i_12 + 3] [i_12 + 3] [i_12 + 3]))))), (1638035557U))))));
            }
        }
        var_41 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) + (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), ((signed char)79))))) : (((var_2) ? (arr_42 [i_12 + 1] [i_12 + 1]) : (((/* implicit */unsigned int) 16383))))))));
    }
    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_40 [i_20] [i_20])))) + (2147483647))) >> (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)43)) ? (2656931738U) : (arr_3 [i_20] [(short)13] [i_20])))) : (((5741753716537641474ULL) | (((/* implicit */unsigned long long int) arr_4 [i_20])))))) - (2656931736ULL))))))));
        var_43 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(1880037212)))) + (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_20])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)67))))) - (1797998604U)))));
    }
    var_44 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((unsigned char) 393652890765001794ULL))))), (((/* implicit */int) ((-16365) < (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1)))))))));
    var_45 = ((/* implicit */short) var_6);
}
