/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48805
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(var_1)))))) ? ((~((~(var_1))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_3)))))))));
    var_16 = ((/* implicit */unsigned int) ((short) (-((~(((/* implicit */int) var_11)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) <= ((~(var_8))))))));
        var_18 += ((/* implicit */unsigned long long int) ((unsigned char) -710146985));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [(short)7])))) * (((/* implicit */int) var_14))))) && (((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) != ((~(((/* implicit */int) arr_0 [i_0]))))))));
        arr_4 [i_0] [14U] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)119))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
            var_20 = ((/* implicit */int) (((_Bool)1) ? (2251798739943424ULL) : (2251798739943424ULL)));
            var_21 = ((/* implicit */unsigned short) ((int) var_0));
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((var_8) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_1])))))));
            /* LoopSeq 3 */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (var_8)));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_5] [6U] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [3ULL] [i_3])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_3] [i_3] [i_1] [i_6]))) & (arr_13 [i_4 + 2]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                            arr_25 [i_1] [9ULL] [i_4] [4LL] [i_6] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_3] [i_3])) + (((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned int) ((_Bool) 2779982142317700359LL));
            }
            for (int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)1)) - (-710146985)))) + ((+(var_12)))));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (+(((var_8) & (var_8)))));
                            var_27 = ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_9]))) ^ (arr_31 [i_1] [i_3] [i_7] [i_8] [i_9] [i_9])));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_13)) >> (((((/* implicit */int) arr_12 [1] [i_7])) - (63))))) : (((((arr_30 [i_1] [i_3] [i_7] [i_7] [i_7]) + (2147483647))) >> (((var_9) - (1173275730))))))))));
                arr_33 [i_1] [i_3] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_12)))) & (((arr_9 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            }
            for (signed char i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [2LL] [i_3])) == (((/* implicit */int) var_13))))) : ((~(((/* implicit */int) var_4)))))))));
                arr_38 [i_1] [(short)0] [i_10 + 1] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_8)))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_30 = ((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */unsigned long long int) var_1)) : (var_8));
                            var_31 += ((/* implicit */unsigned long long int) arr_1 [i_1]);
                            var_32 = ((/* implicit */long long int) arr_35 [i_3] [i_10 - 1] [(_Bool)1]);
                            var_33 = ((/* implicit */unsigned char) var_1);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_21 [i_12] [i_11] [i_10] [i_10] [i_3] [i_1]))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) min((var_35), (arr_47 [i_1] [1ULL])));
                    var_36 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_26 [i_1] [i_1] [i_13])));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)20))));
                }
                arr_50 [(unsigned short)7] [i_13] [i_13] [(unsigned short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_0))))));
                arr_51 [i_13] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_2)))));
                arr_52 [10ULL] [i_3] [i_13] = ((/* implicit */unsigned int) arr_32 [i_1] [i_1]);
            }
            for (long long int i_15 = 2; i_15 < 9; i_15 += 4) 
            {
                var_38 = ((/* implicit */_Bool) arr_9 [i_15]);
                var_39 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)119))));
            }
        }
        var_40 = ((/* implicit */long long int) var_8);
        var_41 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_2)))) + (2147483647))) << (((((var_1) + (1002078019899196566LL))) - (4LL)))));
    }
    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12))));
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) var_6))))))));
        var_44 *= ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((int) arr_56 [i_16]))) / (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
        arr_58 [i_16] [(unsigned char)16] = ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_56 [i_16])));
    }
    for (unsigned short i_17 = 2; i_17 < 23; i_17 += 2) 
    {
        arr_61 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) | ((~((~(((/* implicit */int) (short)-28949))))))));
        var_45 = ((/* implicit */signed char) (~((~((~(((/* implicit */int) (_Bool)1))))))));
        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_5))))))) ? (var_7) : (((/* implicit */long long int) (~(((/* implicit */int) (!(var_5)))))))));
        var_47 = ((/* implicit */_Bool) arr_60 [i_17 + 1]);
        var_48 = ((/* implicit */unsigned char) var_6);
    }
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            {
                var_49 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_60 [i_18]))))));
                var_50 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_4)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        for (unsigned long long int i_21 = 2; i_21 < 19; i_21 += 4) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                {
                    var_51 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_23 = 2; i_23 < 17; i_23 += 4) 
                    {
                        arr_78 [i_20] [i_20] [i_22] [i_21] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_59 [i_20])))));
                        var_52 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_13)) / (((/* implicit */int) var_6))))));
                        arr_79 [i_22] [(unsigned char)19] [(signed char)8] [i_22] [0ULL] [i_20] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((short) arr_71 [i_20] [i_21 + 1] [i_22]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        var_53 = ((/* implicit */_Bool) (~((~((-(var_8)))))));
                        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) var_2))));
                    }
                    for (unsigned short i_25 = 0; i_25 < 20; i_25 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) var_13);
                        var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) (-((-(((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_21] [i_22] [i_25]))))))))))));
                        var_57 = ((/* implicit */long long int) ((unsigned int) var_7));
                        var_58 = ((/* implicit */unsigned char) var_12);
                    }
                    for (long long int i_26 = 3; i_26 < 18; i_26 += 3) 
                    {
                        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) arr_69 [i_20] [i_21]))));
                        var_60 = ((/* implicit */long long int) arr_84 [i_20] [i_21] [(unsigned char)5] [i_22] [i_22]);
                    }
                }
            } 
        } 
    } 
}
