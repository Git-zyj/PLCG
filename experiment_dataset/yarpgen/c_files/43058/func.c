/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43058
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_0])) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 4640168092252303263ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_5 [i_0]))), (((/* implicit */long long int) arr_2 [i_2 - 1] [i_1])))))));
                                arr_15 [18U] [i_1] [i_2 - 1] [i_3] [i_4] [i_4] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) 0U)) ? (arr_4 [i_2]) : (4640168092252303240ULL))) == (((/* implicit */unsigned long long int) (+(-5309689901147458321LL))))));
                            }
                        } 
                    } 
                } 
                arr_16 [(unsigned char)4] = ((/* implicit */unsigned short) ((long long int) min((6335145222232319880LL), (((/* implicit */long long int) var_9)))));
                var_20 = ((/* implicit */long long int) 17133913174399665860ULL);
                var_21 = ((/* implicit */unsigned char) ((short) -4888447920489387764LL));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        var_22 += ((/* implicit */unsigned short) var_11);
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    {
                        arr_27 [i_5] [i_6] [i_7] [7ULL] = ((/* implicit */unsigned long long int) min(((unsigned short)52210), (((/* implicit */unsigned short) (unsigned char)181))));
                        arr_28 [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && ((!(((/* implicit */_Bool) arr_20 [9ULL])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 3; i_9 < 14; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 2; i_10 < 12; i_10 += 4) 
        {
            var_23 -= ((/* implicit */long long int) max(((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */int) var_9)) >> (((arr_26 [i_10 - 2] [i_10] [i_10] [i_10 - 1]) - (8314654434764319974LL))))) : (((((/* implicit */_Bool) 6082453831947211909LL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)30097)))))), ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7987))) > (3338814757984170211LL))))))));
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_16), (((/* implicit */unsigned int) (unsigned short)10883))))), (((((/* implicit */_Bool) var_17)) ? (-8006290814523579656LL) : (arr_1 [i_10])))))) || (((/* implicit */_Bool) max((arr_18 [i_9 - 2]), (((/* implicit */long long int) (unsigned char)4)))))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((4640168092252303263ULL) - (4640168092252303247ULL)))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((((/* implicit */_Bool) 16641264946789696234ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13806575981457248353ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) (short)(-32767 - 1)))))) || (((/* implicit */_Bool) ((long long int) 1750668807U)))))))))));
        }
        var_27 = ((/* implicit */unsigned long long int) max(((~((+(((/* implicit */int) (unsigned short)38333)))))), (((/* implicit */int) ((_Bool) arr_31 [i_9 - 3] [i_9 - 1])))));
        arr_33 [i_9 - 2] = ((/* implicit */signed char) (((((~(((/* implicit */int) var_6)))) >= (((/* implicit */int) arr_0 [i_9] [i_9 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : ((~((-(8852125U)))))));
    }
    for (long long int i_11 = 3; i_11 < 22; i_11 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) min((min((4165198987785779470ULL), (((/* implicit */unsigned long long int) (short)9243)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_21 [i_11 + 1] [i_11] [i_11 + 1])), (arr_26 [i_11] [i_11 + 2] [i_11 + 1] [i_11]))))));
        /* LoopSeq 4 */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            arr_42 [i_11 - 1] [i_11 - 1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((4034674177U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)28907)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (arr_24 [i_11] [i_12]) : (((/* implicit */int) (short)-28902))))));
            arr_43 [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_40 [i_11 - 1] [i_11 + 1]))) || (((/* implicit */_Bool) (+(arr_39 [i_11] [i_11] [6ULL]))))));
        }
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2469265818789854318ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11 - 3] [i_11] [i_11])) ? (((/* implicit */int) arr_38 [i_11 + 2] [i_11] [i_11])) : (((/* implicit */int) var_15)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_30 *= ((/* implicit */_Bool) ((unsigned short) arr_47 [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 2]));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_14))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) 5552775656360617010LL);
            }
            for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                var_33 = ((/* implicit */unsigned char) arr_24 [i_11] [i_13]);
                arr_55 [i_11] [(unsigned short)23] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? ((~(14489912616696532207ULL))) : (((14281545085923772145ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */long long int) arr_36 [i_17])) / (arr_20 [i_11]))) : (max((-2544730115833614225LL), (((/* implicit */long long int) (unsigned short)4852))))));
                var_34 = ((/* implicit */long long int) min((var_34), ((~(9223372036854775782LL)))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 349975880235743242LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33258))) : (arr_50 [i_13] [i_13] [i_13]))), (((/* implicit */unsigned long long int) (unsigned char)204))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_11))), (((unsigned short) var_11)))))) : (((((/* implicit */_Bool) (unsigned short)60680)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28943))) : (-1505400876460614221LL)))));
            }
            var_36 = max((((((13806575981457248376ULL) * (13806575981457248376ULL))) / (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)35439))))))), (((/* implicit */unsigned long long int) max(((~(5552775656360616997LL))), (((/* implicit */long long int) arr_36 [i_11 - 1]))))));
        }
        for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            arr_58 [11LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-32289))))))) / (((((/* implicit */_Bool) max((8077926666557342432ULL), (((/* implicit */unsigned long long int) -2147483647))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28902))) : (((unsigned long long int) 3219725392U))))));
            arr_59 [(_Bool)1] [i_18] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)28891)) ? (((/* implicit */long long int) 4294967295U)) : (6007965963658449084LL))), (((/* implicit */long long int) (unsigned short)30097))));
            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))));
        }
        for (short i_19 = 2; i_19 < 23; i_19 += 2) 
        {
            var_38 += ((/* implicit */unsigned short) (~(((unsigned long long int) min((((/* implicit */unsigned char) arr_37 [(unsigned short)15])), (var_15))))));
            var_39 = (~(arr_41 [i_11 - 3] [i_11] [i_11]));
            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((min((((/* implicit */long long int) arr_57 [i_11] [i_11])), (arr_62 [i_11 - 2]))) / ((-((~(arr_26 [i_19] [i_11] [i_11] [i_11]))))))))));
            arr_63 [i_19] [i_19 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_11] [i_19] [i_19]))))), (((((/* implicit */_Bool) 6007965963658449084LL)) ? (1007051901595259096LL) : (((/* implicit */long long int) 1117747673U))))))) > ((-(4165198987785779470ULL)))));
        }
    }
}
