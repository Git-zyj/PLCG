/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243678
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
    var_11 = ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~((+(((/* implicit */int) var_10))))))) | (min((((((/* implicit */_Bool) var_3)) ? (var_9) : (var_7))), (((/* implicit */unsigned int) var_4))))));
    var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-21146)))) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) arr_1 [i_0]);
            var_15 = (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [(unsigned char)11]))))));
            var_16 += arr_1 [i_1];
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((unsigned int) var_1));
                            arr_14 [i_0] [i_1] [i_1] [i_2 + 1] [i_1] [i_4] [i_1] = ((/* implicit */signed char) ((arr_4 [i_1]) != (((((/* implicit */_Bool) arr_4 [10])) ? (arr_2 [i_2] [i_3] [i_4]) : (((/* implicit */long long int) var_7))))));
                            var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned char)66))) ? (511U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (arr_10 [i_0] [i_1] [(unsigned char)9] [i_3] [i_3] [i_4]))))));
                            arr_15 [i_1] [(unsigned char)7] [i_2] [i_0] [(unsigned short)1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [8ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (7846438121797463945ULL)));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_19 = arr_6 [i_0] [i_0 + 2] [i_0] [i_0];
            arr_19 [i_0] [i_5] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (arr_8 [i_0]))));
            arr_20 [i_0] [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) (unsigned char)86)))));
        }
        var_20 = ((/* implicit */unsigned int) min((var_20), ((~(arr_12 [12LL] [i_0 + 1])))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0])) ? (arr_9 [i_0] [i_0 + 2]) : (arr_9 [i_0 + 1] [i_0 - 1])));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */int) ((arr_9 [i_0 - 1] [i_0 + 2]) * (arr_9 [i_0 + 2] [i_0 + 1])));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_8] [i_6] [i_0 + 2])) && (((/* implicit */_Bool) arr_25 [i_0] [i_6] [i_7] [i_7])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (2198184901U)));
                        arr_30 [i_0] [(_Bool)1] [18] [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0]))) : (131071U)));
                        arr_31 [i_0] [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_8 + 2])) : (((/* implicit */int) arr_24 [i_8 - 1]))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-25)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (2013622094U)));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)4))))) != (((arr_21 [i_9] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) arr_37 [i_0 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)135)))))));
        }
        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_39 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_39 [i_0 - 1] [i_0 + 2]))));
            var_29 = ((/* implicit */unsigned char) var_2);
        }
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */int) arr_36 [i_0] [i_0 + 2] [15LL] [i_12] [i_12]);
            arr_43 [i_0 - 1] [17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_0 - 1] [i_0] [i_0 + 2] [i_0] [i_0] [1ULL]))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_39 [i_0 + 1] [i_0 - 1]))));
        }
        arr_44 [i_0] = ((/* implicit */unsigned long long int) var_7);
    }
    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_39 [i_13 + 1] [i_13]))));
        var_33 = ((/* implicit */signed char) (+((-(2198184932U)))));
        arr_47 [i_13] = 131070U;
    }
    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) arr_10 [i_14] [i_14] [21LL] [i_14] [i_14] [i_14])), (4294836225U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_14 - 1]))) : (var_0)))) : (max((max((-7483723118980694985LL), (((/* implicit */long long int) arr_18 [i_14] [4U])))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)56)), (var_9))))))));
        var_35 += ((/* implicit */signed char) arr_39 [i_14] [i_14]);
        var_36 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_5 [i_14] [(_Bool)1] [5U]), (arr_11 [5U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3031694312065754604LL)) && (((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) 131071U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14]))) : (arr_13 [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14])))))));
        /* LoopNest 2 */
        for (long long int i_15 = 2; i_15 < 15; i_15 += 4) 
        {
            for (unsigned short i_16 = 1; i_16 < 16; i_16 += 2) 
            {
                {
                    var_37 = ((/* implicit */long long int) ((unsigned short) (+((-(((/* implicit */int) arr_23 [i_14] [i_14 + 3] [i_15])))))));
                    var_38 = ((/* implicit */_Bool) ((int) min((131066U), (var_9))));
                    var_39 = ((/* implicit */unsigned int) arr_23 [19] [(unsigned char)12] [i_16]);
                }
            } 
        } 
        var_40 = ((/* implicit */long long int) max((min((2281345195U), (((/* implicit */unsigned int) (signed char)47)))), (((/* implicit */unsigned int) ((short) arr_46 [i_14 + 2] [i_14])))));
    }
}
