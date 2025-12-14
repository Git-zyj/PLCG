/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197620
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
    var_14 = ((/* implicit */short) -547005869);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_15 ^= ((/* implicit */signed char) arr_2 [i_0 - 1] [i_1]);
                arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_3 [i_0]);
                arr_7 [i_0] [i_1] = var_11;
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_5 [i_2] [1U] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 547005869)) ? (((/* implicit */int) (short)25921)) : (-547005869)))))) - (5534342067277549511LL)))));
                arr_8 [i_0] = ((/* implicit */signed char) var_10);
            }
            var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_2 [i_0] [i_1])))))));
            var_18 = ((/* implicit */unsigned int) var_7);
            arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_10))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0 - 1]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_15 [i_0] = ((/* implicit */short) 2810024770309610640LL);
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 8; i_4 += 3) 
            {
                arr_19 [i_3] [i_0] [i_4] = ((/* implicit */_Bool) arr_17 [i_0] [i_3] [i_0]);
                var_19 &= ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0 + 1]);
            }
            for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                var_20 = ((/* implicit */_Bool) var_5);
                var_21 = max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) -547005869)) ? (arr_14 [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)94))))));
            }
            arr_22 [i_0] [i_0 - 1] [i_0] = 2080374784;
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        arr_32 [i_6] [i_0] [i_6] = ((/* implicit */_Bool) (signed char)28);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [7])) ? ((-((+(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0])))));
                        var_23 = var_6;
                        var_24 = ((/* implicit */unsigned int) arr_13 [i_7] [i_0] [i_0]);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (arr_25 [i_0 - 1] [i_6] [i_0])));
        }
        for (short i_9 = 1; i_9 < 9; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((arr_31 [i_11]) - (2548203382U)));
                            arr_45 [i_0] [i_11] [i_10] [i_9 - 1] [i_0] = ((/* implicit */unsigned short) ((max((10578565020650886983ULL), (((/* implicit */unsigned long long int) var_4)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_38 [i_11] [i_9]), (((/* implicit */short) var_9))))))));
                            var_27 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
            } 
            var_28 = ((max((var_6), (max((((/* implicit */unsigned long long int) (short)-20577)), (7549488036081882543ULL))))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_9 + 1]))))));
            arr_46 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_39 [(signed char)8] [(signed char)8] [i_0 + 1] [(signed char)8]))));
            var_30 = ((/* implicit */long long int) var_5);
        }
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */int) var_12)) - (((/* implicit */int) var_5)))))) ^ (((/* implicit */int) ((((arr_29 [i_0]) >= (7798836352916781476LL))) && (((/* implicit */_Bool) arr_14 [i_0 + 1])))))));
            var_31 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_0 + 1] [i_0])) ? (11953688167033787317ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (var_1)))));
        }
        arr_51 [i_0 + 1] [i_0] = ((/* implicit */int) var_9);
        arr_52 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_3 [i_0]);
        arr_53 [i_0] [i_0] = ((/* implicit */unsigned int) arr_30 [i_0 + 1]);
    }
    for (short i_14 = 2; i_14 < 22; i_14 += 3) 
    {
        arr_57 [i_14] = 4552469594025295677ULL;
        arr_58 [4ULL] = ((/* implicit */unsigned long long int) arr_55 [i_14]);
    }
    /* LoopNest 2 */
    for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
    {
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    for (signed char i_18 = 2; i_18 < 12; i_18 += 3) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
                        {
                            {
                                arr_71 [i_15] [i_16 - 1] [i_17] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 106790088U)) ? (arr_62 [i_16 - 1] [i_16 - 1] [i_15]) : (arr_55 [i_15])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : ((~(arr_63 [i_19] [i_15]))));
                                arr_72 [i_15] [i_16] [i_15] [i_15] [i_15] = ((/* implicit */int) -3646171158459577036LL);
                                arr_73 [i_16] = max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)-95)));
                            }
                        } 
                    } 
                } 
                var_32 *= ((var_1) - (((/* implicit */unsigned long long int) (-(arr_66 [i_16] [i_16 - 1] [i_15] [i_16] [i_15] [i_15])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_20 = 0; i_20 < 12; i_20 += 4) 
    {
        arr_76 [i_20] = max(((~((-(10897256037627669072ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_77 [i_20] [i_20] = ((/* implicit */short) var_3);
    }
}
