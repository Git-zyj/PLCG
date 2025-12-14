/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231378
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */int) ((((arr_0 [i_0] [i_0]) ? (2111870003U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) != (((/* implicit */unsigned int) var_8))));
        var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) max((min((-5908495944269146010LL), (((var_9) % (((/* implicit */long long int) ((/* implicit */int) (signed char)78))))))), (((/* implicit */long long int) (signed char)78))));
        var_15 = ((((/* implicit */int) ((short) (~(((/* implicit */int) arr_4 [i_1])))))) | ((~(((/* implicit */int) ((2183097286U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1])) > (((/* implicit */int) arr_0 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : ((-9223372036854775807LL - 1LL))))) % (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2183097286U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (18234432082081338024ULL)))))));
        /* LoopSeq 4 */
        for (short i_2 = 1; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_17 -= ((/* implicit */long long int) arr_1 [i_1]);
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((long long int) var_11))));
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_1 [i_2 + 2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        }
        for (short i_3 = 1; i_3 < 11; i_3 += 4) /* same iter space */
        {
            arr_14 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) > (((/* implicit */int) (short)32230)))))))) ? (max((((arr_0 [i_1] [i_1]) ? (((/* implicit */long long int) var_11)) : (var_7))), (arr_7 [i_3] [i_3 + 2]))) : (((/* implicit */long long int) max((2973416429U), (((/* implicit */unsigned int) arr_13 [i_1])))))));
            var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)12619))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_12 [i_3 + 1] [i_3 - 1])))));
                        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_3 - 1] [i_3 + 1])) == (((/* implicit */int) arr_5 [i_5] [i_3 + 2]))))) > (((/* implicit */int) (short)0))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) && (((/* implicit */_Bool) arr_3 [i_3 - 1])))))));
                            var_22 = max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-7335))))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6])) || (((/* implicit */_Bool) var_9))))), (arr_18 [i_1] [i_1] [i_1] [i_1]))));
                            var_23 &= ((/* implicit */short) ((((((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) & (var_9)))) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_5]))) > (min((8989607068696576ULL), (18437754466640855040ULL))))))));
                            var_24 = ((/* implicit */int) (+(((((_Bool) var_10)) ? (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-15388)))))));
                            var_25 += ((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                        for (int i_7 = 1; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            arr_26 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_21 [i_1])), (8989607068696573ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_1])), (arr_19 [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */unsigned long long int) ((4190589510871799025LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))) & (((((/* implicit */_Bool) (short)-10041)) ? (8989607068696573ULL) : (((/* implicit */unsigned long long int) 0U))))))));
                            var_26 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) (((((((-(((/* implicit */int) var_10)))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])) ? (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (282332470803821596LL))) - (28LL))))) <= (var_11)))) : (((/* implicit */unsigned long long int) (((((((-(((/* implicit */int) var_10)))) + (2147483647))) << (((((((((((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1])) ? (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (282332470803821596LL))) - (28LL))) + (8093151878659645963LL))) - (4LL))))) <= (var_11))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            arr_31 [i_4] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned short) 8989607068696560ULL);
                            arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3 + 2]))));
                            var_27 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_3])))))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                var_28 -= ((/* implicit */short) (+(((/* implicit */int) (short)-25423))));
                var_29 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-1LL)))) ? (arr_11 [i_1] [i_1] [i_10]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_6) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                var_30 = ((/* implicit */signed char) (((((_Bool)1) || (((/* implicit */_Bool) arr_37 [i_1])))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)237)))))));
                var_31 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 5908495944269146009LL))))));
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)83))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1] [i_1]))) : (((9194348900317307435LL) << (((((-568982809) + (568982825))) - (16)))))));
            }
            /* vectorizable */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            arr_45 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1]))))) == (((((/* implicit */int) (short)25617)) | (-1252641099)))));
                            arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_11] [i_11] [i_12 - 1] [i_11] [i_12 + 1] [i_11]))));
                            var_33 = ((/* implicit */int) (((+(((/* implicit */int) (short)7334)))) != (((((/* implicit */int) (signed char)-89)) % (((/* implicit */int) (_Bool)1))))));
                            arr_47 [i_11] [i_1] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_12])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_11])) ? (((/* implicit */int) arr_21 [i_13])) : (var_6)))) : ((-(1140723643U)))));
                        }
                    } 
                } 
                arr_48 [i_1] = ((_Bool) arr_8 [i_1] [i_9] [i_1]);
                var_34 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                var_35 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_44 [(unsigned short)4] [(unsigned short)4] [i_1] [(unsigned short)4] [i_1])) : (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1]))))));
            }
            arr_49 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((~(((long long int) arr_18 [i_1] [i_1] [i_1] [i_1]))))));
            arr_50 [i_1] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_9] [i_1]))))));
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -609017175)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))));
            arr_51 [i_1] = ((/* implicit */unsigned short) ((((_Bool) ((654082800U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))) ? (((((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-96)), ((unsigned short)24170))))))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (var_0)))) ? (((long long int) var_10)) : (((/* implicit */long long int) (-(var_6))))))));
        }
        for (short i_14 = 2; i_14 < 12; i_14 += 4) 
        {
            var_37 = ((/* implicit */unsigned long long int) (((~(arr_22 [i_1] [i_1] [i_14 - 1] [i_1] [i_1]))) % (((/* implicit */long long int) arr_35 [i_1]))));
            var_38 = ((/* implicit */short) arr_13 [i_1]);
            var_39 = ((/* implicit */int) arr_33 [i_1] [i_1]);
            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) max((arr_1 [i_1]), (((unsigned int) ((((/* implicit */_Bool) -593000561)) ? (-1173562429) : (((/* implicit */int) arr_0 [i_1] [i_1]))))))))));
        }
    }
    var_41 = ((/* implicit */unsigned int) max((var_9), (var_2)));
}
