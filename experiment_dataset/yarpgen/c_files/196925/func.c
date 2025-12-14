/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196925
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >= (((((/* implicit */_Bool) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) var_5))))) : (((int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0 + 1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (12424925370136402898ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))));
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [8LL])))))));
        }
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((min((-4893129047700621803LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_5)))) : (((((/* implicit */_Bool) (unsigned short)56082)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_0] [i_0])))))));
                        var_14 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) + (((/* implicit */int) var_10)))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28619)) ? (((/* implicit */int) var_8)) : (var_1)))) ? (((((/* implicit */_Bool) ((((arr_3 [i_3]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)56082)) - (56082)))))) ? (max((arr_3 [i_0 - 2]), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54388)))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-21)))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((_Bool) var_3)))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)9453), (((/* implicit */unsigned short) (short)-29534))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_3]))))) : (max((((/* implicit */long long int) (unsigned char)32)), (var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (13300950863917043024ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17962)))))) || (((/* implicit */_Bool) var_8)))))) : (max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */short) var_4))))), (var_2)))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0])), (var_9))))) & (max((((unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) 1545817811)), (arr_0 [i_0])))))));
    }
    for (long long int i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            arr_20 [i_5 - 2] [i_6] = ((/* implicit */unsigned long long int) var_10);
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_5 - 2]) : (arr_3 [i_6])))) ? (((-1737376667) + (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned short)60868))))));
            var_20 = ((/* implicit */unsigned short) min((max((((var_1) ^ (((/* implicit */int) arr_16 [i_6])))), ((~(((/* implicit */int) (unsigned short)40536)))))), ((-(((((/* implicit */int) var_4)) * (((/* implicit */int) var_10))))))));
            var_21 = ((/* implicit */int) arr_17 [i_5] [i_6]);
        }
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    {
                        var_22 ^= ((/* implicit */long long int) var_6);
                        arr_29 [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_22 [i_5 - 2]) - (arr_22 [i_5 - 2])))) - (max((((((/* implicit */_Bool) var_0)) ? (arr_25 [i_5 - 1] [i_5 + 1] [13] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9459))))), (((/* implicit */unsigned long long int) arr_19 [i_9]))))));
                        var_23 ^= ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */int) (!(((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
    var_25 = ((/* implicit */long long int) 1058340138);
    /* LoopNest 3 */
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    var_26 *= ((/* implicit */short) max((((unsigned long long int) (~(((/* implicit */int) (unsigned short)2761))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_10] [i_10])) ? (((/* implicit */int) (short)13531)) : (((/* implicit */int) arr_14 [(unsigned char)21] [(unsigned char)21] [i_11] [i_10])))))))));
                    var_27 = ((((/* implicit */_Bool) 10410373210065649195ULL)) ? (7152953900285309955LL) : (((/* implicit */long long int) 3600911984U)));
                    var_28 *= ((/* implicit */short) min((min((var_11), ((unsigned short)3195))), (((/* implicit */unsigned short) (short)9358))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1860107009U)) ? (var_5) : (((/* implicit */long long int) arr_37 [i_10] [i_10] [i_12])))))) || (((/* implicit */_Bool) (+(arr_8 [21ULL]))))))));
                }
            } 
        } 
    } 
}
