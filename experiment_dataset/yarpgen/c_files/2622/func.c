/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2622
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
    var_10 = ((/* implicit */int) var_1);
    var_11 = ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_0] = max((arr_1 [i_0] [i_1 + 2]), (var_0));
            var_12 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) (unsigned short)37070)) ? (((/* implicit */int) (unsigned short)37070)) : (((/* implicit */int) (unsigned short)37070))))))) : ((+(arr_2 [i_1] [i_1] [i_1 + 2])))));
            var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned int) var_9))))) ? (arr_3 [i_0] [i_0] [i_0]) : (max((arr_3 [i_1] [2LL] [(signed char)5]), (var_8)))));
            var_14 *= ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */_Bool) (unsigned short)37075)) ? (1385758885U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28465)))))));
            arr_5 [(unsigned short)8] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)28466)) == (((/* implicit */int) var_7))))));
        }
        arr_6 [i_0] = max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((((long long int) -442854759)) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)28460)) - (28422))))));
        var_15 = ((/* implicit */short) ((var_6) * (arr_2 [i_0] [i_0] [i_0])));
        var_16 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 1])) ? (((/* implicit */int) var_9)) : (arr_14 [i_3 + 2] [i_3 + 1])));
                var_18 = ((/* implicit */int) var_5);
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((long long int) 1454700335U)))));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
            {
                arr_19 [i_2] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_14 [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_3 - 1] [i_5]))) : (arr_7 [i_2]))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28465)) >= (arr_14 [i_3 + 1] [i_3 + 1])));
                var_21 = ((unsigned short) (signed char)0);
                arr_20 [i_2] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)28460)))) ? (((((/* implicit */_Bool) (unsigned short)17358)) ? (2835744847U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) arr_14 [i_2] [i_2]))));
            }
            arr_21 [i_2] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2]);
        }
        for (signed char i_6 = 1; i_6 < 16; i_6 += 3) /* same iter space */
        {
            arr_24 [i_2] [i_2] [15] = ((/* implicit */unsigned int) var_1);
            arr_25 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (arr_13 [(unsigned short)6]))) > (min((var_8), (((/* implicit */unsigned int) arr_9 [i_2] [15])))))) ? (max((arr_12 [i_2] [i_2] [i_6]), (((/* implicit */unsigned long long int) arr_7 [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_14 [i_2] [i_6])) <= (2840266961U))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (short)-18828))) | (var_8)))))))));
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_16 [(signed char)14] [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (max((2840266971U), (((/* implicit */unsigned int) 1719368755)))))) << (((((((4294967278U) * (arr_8 [(short)14]))) - (179949839U))) - (592096736U)))));
                var_23 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_26 [i_2] [i_2] [i_6] [i_2])) >= (((/* implicit */int) var_9)))) ? (((/* implicit */int) arr_9 [i_2] [i_6])) : (((((/* implicit */_Bool) max((arr_7 [(_Bool)1]), (((/* implicit */unsigned int) (unsigned short)37046))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(signed char)2] [i_6] [(signed char)6]))))) : (((/* implicit */int) var_7))))));
                arr_29 [i_2] [i_2] [(signed char)6] [i_2] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)126));
            }
            for (int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                var_24 = min((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [(unsigned char)6]))) ^ (var_6))), (((/* implicit */unsigned int) arr_26 [i_2] [i_2] [i_6] [i_8])))), (((/* implicit */unsigned int) arr_28 [i_2] [i_2] [i_2])));
                var_25 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((max((var_6), (((/* implicit */unsigned int) (unsigned short)37046)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37071)))))), (min((((/* implicit */long long int) var_1)), (arr_15 [i_6] [i_6 + 1] [i_6 + 1])))));
            }
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(1454700326U))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [i_6] [(unsigned char)11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)247)))))))) >> (((((/* implicit */int) ((unsigned char) 3673723620643426922LL))) - (90)))));
        }
        var_27 = ((/* implicit */signed char) (~(arr_23 [i_2] [i_2] [i_2])));
        var_28 = ((/* implicit */int) ((((max((var_2), (((/* implicit */unsigned int) var_9)))) >> (((/* implicit */int) ((signed char) 1112958471U))))) >> (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(signed char)11] [(signed char)11] [(short)17] [i_2]))) * (var_6)))) ? (min((2074582767U), (var_6))) : (min((((/* implicit */unsigned int) arr_17 [i_2] [i_2] [(unsigned char)4])), (2835744847U))))) - (2074582745U)))));
        arr_34 [i_2] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) (unsigned char)1)), (1459222448U)))));
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
        {
            var_29 += ((/* implicit */int) var_1);
            var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_31 [i_2] [i_9])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) arr_31 [i_2] [i_9])) % (((/* implicit */int) arr_17 [i_2] [i_9] [i_9]))))));
            arr_38 [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((int) 3024351510U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (arr_37 [i_2])))) ? ((-(((/* implicit */int) (unsigned char)247)))) : (((((/* implicit */_Bool) 337274956)) ? (((/* implicit */int) (short)-20916)) : (((/* implicit */int) (_Bool)1))))))) : (((arr_12 [i_2] [i_2] [i_9]) % (((/* implicit */unsigned long long int) ((long long int) arr_10 [i_2])))))));
            var_31 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_5)))) ? (((/* implicit */int) max((arr_16 [i_9] [14U]), (((/* implicit */unsigned short) arr_26 [i_2] [i_2] [(short)11] [i_9]))))) : (((int) (unsigned short)5351))))), (((long long int) arr_27 [i_2] [i_9] [i_9]))));
        }
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                var_32 &= ((/* implicit */int) ((min((((/* implicit */long long int) var_9)), (arr_41 [i_11] [i_10] [i_2]))) / (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_42 [(signed char)3] [i_10] [i_2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
                arr_43 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)28490)) : (((/* implicit */int) (unsigned short)14599)))))) ? (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(unsigned char)17] [i_11]))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_33 [i_11])), (((((/* implicit */_Bool) var_9)) ? (-1143063890) : (-905008200))))))));
                var_33 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_32 [i_10] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_11]))))) : (((((/* implicit */int) (signed char)14)) << (((((/* implicit */int) (unsigned short)38835)) - (38832))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28148)) ? (3182008825U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21)))))))))));
                arr_44 [i_11] [i_10] [i_2] = ((/* implicit */unsigned short) 4294967295U);
            }
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 3713909422U)) ? (((/* implicit */long long int) var_6)) : (5421319548700898060LL))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-7666)))))))))))));
            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */int) ((unsigned char) min((12636124483689152508ULL), (((/* implicit */unsigned long long int) arr_10 [10])))))) ^ (((((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_42 [15] [i_2] [i_2] [i_10]))))))));
        }
    }
    var_36 += ((/* implicit */unsigned int) var_3);
}
