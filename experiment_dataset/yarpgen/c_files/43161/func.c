/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43161
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
    var_19 = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((((((/* implicit */int) ((signed char) (short)255))) + (2147483647))) >> (((((long long int) arr_4 [(short)8])) + (1809432201995935359LL))))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-255)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [i_4] [i_4 + 3] [i_2] [i_3] [i_4 + 1])))))))) ^ (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (var_2)))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_5)))))) * (((unsigned long long int) min((var_12), (((/* implicit */long long int) arr_6 [i_0])))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
        {
            arr_17 [i_0] = ((/* implicit */signed char) var_5);
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [8ULL] [i_6 + 3] [i_6] [i_7] [i_5 + 1] [i_6])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-20220)) : (((/* implicit */int) arr_6 [i_7])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) arr_5 [i_0] [i_5] [i_6] [(unsigned char)5]))))));
                        arr_22 [i_0] [i_5 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_5 + 2])) ? (759468199559419289LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_6] [i_6] [i_7])) ? (((/* implicit */int) var_5)) : (arr_13 [i_0] [i_5 - 2]))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [3] [i_0] [i_0] [(_Bool)1] [i_0] [i_5 - 2] [i_5]))));
            var_25 = ((/* implicit */unsigned int) (-(var_7)));
        }
        /* vectorizable */
        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 3) /* same iter space */
        {
            var_26 |= ((/* implicit */unsigned short) (((~(((/* implicit */int) (short)255)))) - (((/* implicit */int) arr_18 [i_8 + 1] [i_8 + 1]))));
            /* LoopSeq 2 */
            for (long long int i_9 = 3; i_9 < 12; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    var_27 = ((/* implicit */long long int) ((unsigned long long int) arr_15 [i_8 + 1] [i_9] [i_9 + 1]));
                    var_28 -= (-(arr_15 [i_8 + 1] [i_8 - 1] [i_8 - 1]));
                    arr_31 [i_0] [2LL] [i_10] |= ((/* implicit */short) ((arr_18 [i_8] [i_0]) ? (((/* implicit */unsigned long long int) (~(var_10)))) : ((-(arr_15 [i_0] [i_10] [i_9 - 1])))));
                }
                for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    var_29 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((534395661) % (((/* implicit */int) (_Bool)1))))) == ((-(18446744073709551615ULL)))));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_9 + 2])) ? (var_18) : (((/* implicit */int) arr_21 [i_0] [i_8] [i_8] [i_9 + 1] [i_8 + 1] [i_8 + 2]))));
                }
                for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned long long int) arr_23 [i_9 - 2] [i_9 - 3])) : (var_7))))));
                        var_32 *= ((/* implicit */unsigned char) (-(var_9)));
                        var_33 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) (signed char)84)) << (((arr_4 [i_0]) + (1809432201995935361LL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (signed char)84)) << (((((arr_4 [i_0]) + (1809432201995935361LL))) - (1645924622328360869LL))))));
                    }
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) var_2))));
                }
                arr_42 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_36 [i_0] [i_8 - 2] [(short)0] [i_0])))) ? (var_9) : (((/* implicit */int) ((arr_19 [i_9] [i_8 + 2] [i_8]) >= (((/* implicit */int) arr_16 [i_0] [i_0])))))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_0] [i_8 - 1]))));
                arr_45 [7U] [i_0] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_8 - 1] [i_0]))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            arr_48 [i_15] [i_15] [(unsigned char)10] |= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_0] [8LL] [i_0] [4ULL] [i_0] [i_15] [i_15]))))));
            var_36 *= ((/* implicit */unsigned long long int) var_3);
        }
    }
}
