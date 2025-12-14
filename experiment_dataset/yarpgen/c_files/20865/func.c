/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20865
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1444249026528663841LL)) ? (-1444249026528663841LL) : (((/* implicit */long long int) 606391977))));
        arr_2 [i_0 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_4))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (max((607514493791863030LL), (arr_1 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
        var_21 = ((/* implicit */short) arr_5 [8LL] [4U]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 10943227732813048357ULL))))), ((+(((/* implicit */int) var_18))))))) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)22)), ((unsigned short)56264))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)56264);
    }
    var_22 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned short)9271)) - (9269)))))), (min((max((((/* implicit */long long int) 4243784402U)), (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)52836)))))))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_23 = ((/* implicit */_Bool) arr_12 [i_4] [i_3]);
            var_24 -= ((/* implicit */unsigned int) var_17);
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) < (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_17)), (arr_10 [i_3])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))) : (arr_12 [i_3] [i_4])))))));
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) ((arr_17 [i_6]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9247))) > (-5949410896790431373LL)))) : (var_13)));
                var_27 = ((/* implicit */unsigned int) ((((var_3) != (((/* implicit */long long int) -263567578)))) ? ((+(((/* implicit */int) arr_19 [i_3] [(signed char)3] [i_6])))) : (((/* implicit */int) var_15))));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_5] [i_7]))) * (var_5)))));
                var_29 = ((/* implicit */signed char) ((var_10) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) arr_11 [i_3])) + (((/* implicit */int) var_16))))));
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 3; i_9 < 16; i_9 += 3) 
                {
                    arr_26 [i_3] [i_5] [(short)5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_9 - 1] [i_9 - 1] [i_9])) == (((/* implicit */int) (signed char)38))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_9 - 1] [i_9 + 1] [i_5])) ? (((/* implicit */int) arr_19 [i_9 + 1] [i_9 - 2] [i_3])) : (((/* implicit */int) arr_23 [i_9 + 1]))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_29 [i_10] [i_9 + 1] [(unsigned short)7] [i_8] [i_5] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_23 [i_9])) > (((/* implicit */int) (unsigned short)56249)))))));
                        var_31 = ((((/* implicit */int) arr_27 [i_9] [i_9 - 2] [i_9] [i_9 - 2] [i_9 - 3] [12ULL])) / (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_19 [i_3] [i_5] [i_9])))));
                        arr_30 [i_8] [i_5] [i_8] [8ULL] [i_8] [i_9] = ((/* implicit */unsigned long long int) (+(((arr_6 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_3] [i_3] [i_8] [i_9 - 2] [i_8] [i_9])))))));
                        arr_31 [i_5] [i_8] [i_5] [i_3] = ((/* implicit */unsigned short) arr_4 [i_9 - 2]);
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_36 [i_3] [i_11] [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_37 [i_3] [i_3] [i_5] [i_8] [i_9 + 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56264))) | (arr_35 [(unsigned short)12] [i_9] [i_8] [(unsigned short)12] [(unsigned short)12] [11]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)52866)) >= (((/* implicit */int) (short)(-32767 - 1)))))))));
                    }
                    for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        arr_41 [(_Bool)1] [i_5] [(short)7] [(signed char)15] [(_Bool)1] = (+(arr_24 [i_3] [i_9 - 1] [12U] [i_9 - 1] [i_12] [i_9 - 1]));
                        var_32 = ((/* implicit */unsigned short) ((-1729449347) + (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_27 [i_9 - 3] [i_9 - 3] [i_9 - 1] [i_9 - 1] [i_13] [i_9 - 3]))));
                        arr_44 [i_3] [i_3] [i_3] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) / (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((var_13) | (var_9)))) : (2895976760U)));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_9 + 1])) ? (((/* implicit */int) arr_27 [i_9] [i_9 - 2] [i_9 + 1] [i_13] [i_9 - 2] [i_13])) : (((/* implicit */int) arr_23 [i_9 - 3]))));
                        var_35 = (+(((/* implicit */int) arr_19 [i_9 - 2] [i_9 - 3] [i_9 - 2])));
                    }
                    for (unsigned short i_14 = 1; i_14 < 15; i_14 += 4) 
                    {
                        arr_47 [(unsigned short)0] [i_14 - 1] [i_9] [i_5] [i_5] [i_3] = ((/* implicit */signed char) ((arr_28 [i_9 + 1] [i_14 + 2]) < (arr_28 [i_9 - 3] [i_14 + 1])));
                        var_36 = ((((((/* implicit */long long int) 1664842965)) - (5653732074883896133LL))) / (((/* implicit */long long int) (~(((/* implicit */int) var_12))))));
                        arr_48 [i_3] [i_3] [i_3] [(unsigned char)9] [(unsigned short)13] = ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_14] [i_14 + 1] [i_14] [i_14 + 2] [i_9 - 2] [i_9 - 2] [i_9 - 2])) < (((/* implicit */int) arr_46 [i_14] [i_14 + 2] [(signed char)10] [i_14] [i_9 - 3] [i_14 + 1] [i_9 - 3]))));
                        var_37 = ((/* implicit */int) ((unsigned char) var_8));
                    }
                }
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_33 [i_3] [i_3] [i_3] [(unsigned short)16] [(unsigned short)11] [i_3] [(unsigned short)16]) ^ (arr_6 [i_5])))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1398990535U)))))));
                arr_49 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -4194304)) < (var_6)))) << (((((/* implicit */int) arr_11 [i_5])) + (32)))));
            }
            var_39 |= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) (short)-6586)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_5]))) : (var_5))) + (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_46 [(short)9] [i_5] [(short)7] [(short)7] [11ULL] [(signed char)7] [(signed char)7])) : (((/* implicit */int) var_11)))))))));
            var_40 = ((/* implicit */unsigned long long int) ((signed char) arr_10 [i_3]));
        }
        arr_50 [i_3] = ((/* implicit */signed char) arr_17 [i_3]);
    }
    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        arr_53 [i_15] [i_15] = ((1965003586657725063LL) < (((/* implicit */long long int) 3427736528U)));
        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_52 [i_15]), (((/* implicit */unsigned int) arr_5 [i_15] [i_15]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */int) arr_7 [i_15])) : (((/* implicit */int) arr_7 [i_15]))))) : (var_4)));
        /* LoopSeq 1 */
        for (int i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            arr_56 [i_15] [i_16] = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - ((+(var_5))))) ^ (1951436634U));
            arr_57 [12U] [(unsigned short)0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) ((unsigned short) 1780685303U))) : (((/* implicit */int) ((_Bool) arr_54 [i_16] [i_16] [i_15])))))), (((unsigned long long int) var_6))));
            var_42 = ((/* implicit */signed char) (~(arr_52 [i_15])));
        }
        var_43 = ((/* implicit */signed char) var_10);
    }
}
