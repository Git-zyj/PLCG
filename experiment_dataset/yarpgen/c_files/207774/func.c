/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207774
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
    var_13 = ((/* implicit */short) ((unsigned long long int) var_9));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (67108863) : (67108875)));
        var_15 = ((/* implicit */signed char) ((unsigned short) (_Bool)0));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((67108875) / (2147483647))))))));
            var_17 -= ((/* implicit */short) min((min((((/* implicit */int) (short)(-32767 - 1))), (-67108883))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)147)) : (var_7)))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((((_Bool) (unsigned char)146)) ? (18187917603399945557ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-1334111732992323362LL)))))))))));
            arr_9 [i_2] [i_2] &= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)960))))))) : (((unsigned long long int) min((1939905793U), (((/* implicit */unsigned int) arr_6 [i_1]))))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                arr_18 [i_3] [i_3] [i_3] [i_1] |= ((/* implicit */unsigned char) arr_1 [i_3]);
                var_19 *= ((/* implicit */unsigned short) (_Bool)0);
            }
            arr_19 [i_1] [i_3] = ((/* implicit */signed char) var_11);
            var_20 = ((/* implicit */unsigned long long int) min((var_20), ((~(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (arr_4 [i_3] [i_1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        arr_26 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((short) (unsigned char)146));
                        arr_27 [i_3] [i_3] [(unsigned short)2] [i_5] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9)))) ? (var_8) : (max((var_8), (arr_25 [i_1] [i_1] [i_5] [i_1])))))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(var_4))))));
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
            {
                arr_34 [i_1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_0))))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((unsigned long long int) ((min((((/* implicit */unsigned long long int) (signed char)107)), (arr_25 [i_1] [i_1] [i_9] [i_9]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                            arr_42 [i_8] [i_8] [i_9] [i_8] [5] [i_8] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (short)10263)) * (((/* implicit */int) max(((unsigned char)109), ((unsigned char)239)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(max((((/* implicit */unsigned long long int) (short)-28419)), (arr_4 [i_1] [i_7]))))))));
            }
            for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
            {
                arr_45 [i_11] [i_11] [i_1] [i_1] = ((/* implicit */unsigned char) 3360891445U);
                var_24 *= ((/* implicit */unsigned char) (+(218106108U)));
                var_25 = ((short) ((((/* implicit */_Bool) (short)-32761)) ? (15120248800008854410ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                arr_46 [i_1] |= ((/* implicit */unsigned int) var_2);
            }
        }
        var_26 = ((/* implicit */unsigned long long int) ((short) 665849644U));
        var_27 = ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (546022642U)))) * (((((/* implicit */_Bool) (unsigned short)35730)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))) : (14277379569509347923ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
    {
        arr_51 [3] [3] = ((/* implicit */unsigned char) 3629117652U);
        arr_52 [i_12] = ((/* implicit */unsigned long long int) (~(arr_10 [i_12])));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) * (var_8)))) ? (var_12) : (((/* implicit */int) var_0)))))));
        var_29 *= ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_12] [i_12] [i_12]));
    }
}
