/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204619
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 2])) >= ((-(13128986085968196370ULL))))))) : (((var_0) ^ (((/* implicit */unsigned int) arr_0 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (0ULL)))))))) * (((18446744073709551606ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191)))))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((short) max((arr_4 [i_1 + 1]), (arr_5 [i_1]))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_11 = ((/* implicit */short) (~(arr_7 [i_1 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) var_8);
                            arr_20 [i_1] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [1LL] [10LL] [i_1] [1LL]))));
                            arr_21 [i_1] [i_1] [3ULL] [i_1] [3ULL] = ((/* implicit */unsigned short) arr_15 [i_1] [i_2] [(short)0] [i_4] [i_4]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned int) (+(arr_14 [i_2] [i_2] [i_2] [i_6] [(short)4] [i_6])));
                            arr_27 [i_1] [i_2] [i_1] [i_6] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_24 [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 3] [i_7]))))), (min((1002914262U), (((/* implicit */unsigned int) (short)32256))))));
                            var_13 = ((/* implicit */long long int) max((var_13), ((~(var_10)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_32 [i_9] [i_1] [i_3] [i_3] [8ULL] [i_1] [i_1] = ((/* implicit */_Bool) var_4);
                            var_14 += ((/* implicit */long long int) min((((/* implicit */unsigned int) (-((~(arr_14 [i_8] [4ULL] [i_1] [i_1] [i_8] [i_1])))))), (arr_7 [i_2])));
                        }
                    } 
                } 
            }
            var_15 = ((/* implicit */short) var_9);
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) 1ULL)))))));
            var_17 += ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2469)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (arr_15 [i_1] [i_1] [i_2] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2460))) : (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            var_18 = ((/* implicit */unsigned short) (+((+(1ULL)))));
        }
    }
    for (short i_10 = 3; i_10 < 18; i_10 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) var_5);
        var_20 = ((/* implicit */_Bool) ((int) (unsigned short)65534));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((min(((~(var_2))), (((/* implicit */long long int) arr_26 [i_11] [i_11] [i_11] [i_11] [i_11])))) << ((((~(((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))) + (39)))));
        var_22 |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [8] [i_11] [8])))))));
        arr_38 [(short)15] = ((((((/* implicit */_Bool) arr_18 [i_11] [0ULL] [i_11] [i_11] [i_11] [i_11] [0ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_11] [i_11] [i_11] [i_11] [12ULL] [i_11] [i_11]))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27102))) / (arr_15 [i_11] [i_11] [i_11] [i_11] [i_11])))) ? ((-(2305825417027649536LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) + (2305825417027649559LL))));
        /* LoopSeq 2 */
        for (short i_12 = 3; i_12 < 15; i_12 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_9);
            arr_41 [i_11] [i_11] [i_11] = ((/* implicit */signed char) (~((+(1991297115U)))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (short i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (unsigned short)32764)))));
                            arr_50 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned int) arr_9 [i_12] [10U] [(_Bool)1] [i_12 + 2])), (var_0))));
                        }
                    } 
                } 
            } 
            arr_51 [i_11] [i_11] [i_11] = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) max((-2305825417027649536LL), (arr_39 [i_11] [i_12] [i_12 + 1])))), (5317757987741355255ULL))));
        }
        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_17 = 1; i_17 < 16; i_17 += 2) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_4))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    for (signed char i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (~(((/* implicit */int) (short)4096)))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-834415098100236604LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -2508296072934467980LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-11593)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((-(((/* implicit */int) arr_12 [(_Bool)1] [i_18] [(_Bool)1] [i_11]))))));
                            var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17990)))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((arr_47 [i_11] [i_11] [i_11] [i_16] [i_16] [9]) ? (((/* implicit */int) (unsigned short)27312)) : (((/* implicit */int) (_Bool)1)))))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_20 = 0; i_20 < 17; i_20 += 3) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_11])) - (((/* implicit */int) arr_34 [i_11]))));
                var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47545)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32767))) : (-1915254827621022590LL))))));
                var_32 += ((/* implicit */short) ((unsigned short) var_2));
                arr_65 [(short)8] [i_16] [i_20] [i_20] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (long long int i_21 = 1; i_21 < 16; i_21 += 2) 
                {
                    for (int i_22 = 1; i_22 < 16; i_22 += 3) 
                    {
                        {
                            arr_71 [i_21] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 1770695932)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_62 [i_22] [i_22] [i_20] [i_21]))));
                            var_33 = ((/* implicit */short) ((unsigned short) -7657556693376335494LL));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 16491866437295495727ULL)) || (((/* implicit */_Bool) arr_16 [i_22 + 1] [i_21] [i_20] [i_11] [i_11] [i_11]))))) > (((/* implicit */int) ((arr_55 [i_11] [i_16] [(_Bool)1] [i_22 - 1]) != (((/* implicit */long long int) arr_49 [6LL] [i_16] [i_20] [16ULL] [i_16])))))));
                            arr_72 [i_11] [i_16] [i_21] [i_21] = ((/* implicit */short) ((long long int) 0));
                            var_35 = ((/* implicit */short) ((((/* implicit */int) arr_64 [i_21 + 1] [i_21 + 1] [i_22 - 1] [i_22 - 1])) | (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            for (short i_23 = 1; i_23 < 16; i_23 += 1) 
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65305)) || (((/* implicit */_Bool) (short)26510)))))));
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((_Bool) var_0)) || (((/* implicit */_Bool) (short)-14795)))))));
                var_38 = ((/* implicit */unsigned long long int) (~(var_2)));
                var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (min((var_2), (9168223569571714978LL)))));
            }
        }
        /* LoopSeq 1 */
        for (int i_24 = 1; i_24 < 15; i_24 += 4) 
        {
            arr_77 [i_24] = ((/* implicit */short) (~((-(((/* implicit */int) var_8))))));
            arr_78 [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147450880)) || (((/* implicit */_Bool) var_4)))))) == (((arr_57 [i_11] [i_11] [i_11] [i_24 + 1]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_11] [i_11] [11ULL] [i_24 + 2])))))));
        }
    }
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((18446744073709551610ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ^ (((/* implicit */int) var_9))));
    var_41 = (((-(-7657556693376335509LL))) <= (((/* implicit */long long int) (-(2303670195U)))));
    var_42 |= ((/* implicit */short) ((max((((/* implicit */int) var_5)), (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_8)))))) & ((-((~(((/* implicit */int) (short)10410))))))));
}
