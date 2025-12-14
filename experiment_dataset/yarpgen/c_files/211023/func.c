/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211023
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (+(arr_1 [i_0] [i_0]))))));
            var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) >= (((/* implicit */int) arr_4 [i_1] [i_0]))));
        }
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(arr_6 [i_0] [i_0]))))));
            arr_9 [i_0] [i_0] [i_2] &= ((/* implicit */signed char) var_1);
            var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                var_16 &= ((/* implicit */int) ((signed char) 7ULL));
                var_17 = ((/* implicit */long long int) (+(var_11)));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3]))) * (18446744073709551582ULL))))));
                arr_12 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4294967294U)) / (((var_11) & (((/* implicit */unsigned long long int) 633037591U))))));
                arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((7ULL) << (((arr_2 [i_2] [i_3]) - (8221110313609416224LL)))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_1))));
                            arr_26 [i_7] [i_6] [i_4] [i_4] [i_0] = ((int) arr_2 [i_5 + 2] [i_5 + 2]);
                            arr_27 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_14 [i_5 - 2]))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_4] [i_0])) - (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) var_4)) : (((var_1) & (arr_11 [i_0] [i_4] [i_4])))));
        }
        /* LoopSeq 2 */
        for (int i_8 = 4; i_8 < 14; i_8 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_0] [i_8 - 3] [i_0]))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_14 [i_0])) ? ((-2147483647 - 1)) : (-720436390))))))));
        }
        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            var_23 *= ((/* implicit */unsigned int) ((unsigned short) var_2));
            var_24 = ((/* implicit */short) ((arr_21 [i_0] [i_0] [i_9 - 1] [i_9] [i_9] [i_9]) | (0)));
        }
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) - (((/* implicit */int) var_6))));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_10] [i_10])) >> (((2147483647) - (2147483625)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_10] [i_10]))) : (arr_33 [(unsigned short)1] [i_10]))) - (((/* implicit */long long int) min((((/* implicit */int) ((short) arr_22 [i_10] [i_10] [i_10]))), ((-2147483647 - 1))))))))));
        arr_35 [(unsigned short)2] = ((/* implicit */short) ((((arr_6 [i_10] [i_10]) & (arr_6 [i_10] [i_10]))) % (((/* implicit */long long int) (-(min((var_8), (2147483641))))))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_5))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
    {
        arr_40 [i_11] [i_11] = ((/* implicit */signed char) (+(var_8)));
        var_29 = (!(((/* implicit */_Bool) arr_37 [i_11])));
    }
    var_30 = var_8;
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            {
                var_31 = ((/* implicit */int) ((long long int) 18446744073709551601ULL));
                /* LoopNest 3 */
                for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 19; i_16 += 3) 
                        {
                            {
                                var_32 = ((15040218607241031589ULL) != (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (((((-2147483647) + (2147483647))) >> (((2147483647) - (2147483635)))))))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((15040218607241031589ULL), (((/* implicit */unsigned long long int) -1361615523))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18446744073709551611ULL)) ? (-2LL) : (((/* implicit */long long int) -2147483625))))))) : (arr_46 [i_12])));
                                var_34 = ((/* implicit */int) max((var_34), (arr_54 [i_12] [i_16])));
                            }
                        } 
                    } 
                } 
                var_35 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((_Bool)1)))) << (((((/* implicit */int) var_5)) + (16)))));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_36 = ((/* implicit */unsigned char) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551575ULL)) && (((/* implicit */_Bool) var_8)))))), ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) -6478054242894075217LL)) >= (arr_46 [i_13]))))))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_44 [i_17] [i_13])) + (2147483647))) << (((((var_4) + (351294038))) - (20)))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_44 [i_12] [(signed char)11])) ? (((/* implicit */int) ((arr_48 [i_12] [i_13] [i_17] [i_17]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))))) : (((/* implicit */int) ((arr_49 [i_12] [i_12] [i_12] [i_12]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
                }
                for (int i_18 = 3; i_18 < 18; i_18 += 1) 
                {
                    var_38 += ((/* implicit */signed char) arr_58 [(signed char)0] [i_12] [5U] [i_12]);
                    var_39 = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */long long int) 0U)) : (5085779421846795575LL)))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-126)), (var_4)))) | (((2305843009213693951ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32754)))))))) ? (((((/* implicit */_Bool) arr_55 [i_18 - 2] [i_18] [i_18 - 2] [i_12])) ? (((/* implicit */unsigned int) var_4)) : (3036805232U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_44 [i_13] [i_12]))))));
                }
            }
        } 
    } 
}
