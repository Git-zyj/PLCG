/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236995
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_18))));
    var_21 = ((/* implicit */unsigned long long int) ((int) (short)-13520));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [4ULL] [4ULL] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_19)))) ? (((int) var_19)) : (((((/* implicit */_Bool) -863947229)) ? (((/* implicit */int) (short)24898)) : (((/* implicit */int) (unsigned short)63278))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_22 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (short)13520))))))));
        }
        for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_24 -= ((/* implicit */int) ((long long int) arr_0 [i_0 + 1]));
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2])) : (((/* implicit */int) arr_4 [7ULL] [i_2] [i_2 - 2]))))) ? (((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (short)13519)))) : (((((/* implicit */_Bool) (short)13519)) ? (var_15) : (((/* implicit */int) (unsigned short)63))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    arr_14 [i_3] [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */signed char) var_18);
                    var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)13536))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-6606268702457882473LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13519))))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((long long int) (signed char)126)) : (var_16)));
                }
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 2])))))) | (var_0))))));
            }
            /* LoopSeq 2 */
            for (short i_5 = 3; i_5 < 8; i_5 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) arr_12 [i_5 - 2] [i_2 + 2] [i_5]);
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_0] [i_0] [6ULL])) <= (((/* implicit */int) arr_12 [i_0] [i_2 + 1] [i_0]))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 2; i_8 < 9; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_16);
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8 - 2] [i_7] [i_6]))) * (var_16)));
                        var_33 = ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))));
                    }
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)590))));
                        arr_26 [0LL] [0LL] [2ULL] [0LL] [6ULL] = ((/* implicit */long long int) ((var_19) << (((var_12) - (3639979728609879639ULL)))));
                        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (var_11)))) ? (arr_19 [i_2 - 1] [(signed char)5] [i_7 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_24 [i_9] [i_2] [i_6] [i_9] [2U] [i_9]))))));
                    }
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((arr_12 [i_0] [i_0 - 2] [i_2 - 2]) ? (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_2 - 1])))))));
                }
                arr_27 [i_0] [i_0] [i_0] [(short)8] = ((/* implicit */unsigned int) (-((+(var_6)))));
            }
            var_37 ^= ((/* implicit */unsigned long long int) (signed char)125);
        }
        for (int i_10 = 3; i_10 < 9; i_10 += 1) 
        {
            var_38 = (short)13517;
            arr_31 [i_0] [i_0 + 2] [i_10 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
            var_39 = ((/* implicit */signed char) var_17);
            arr_32 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_11 = 1; i_11 < 9; i_11 += 1) /* same iter space */
        {
            var_40 -= ((/* implicit */_Bool) ((arr_25 [(unsigned short)2] [i_0 + 1] [i_0 + 2] [i_11 + 1] [i_0 + 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            arr_35 [i_0 + 2] [i_11] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22523))) : (var_0)))) ? (arr_15 [i_0 + 1] [6LL] [i_11 - 1]) : (((/* implicit */long long int) (~(var_13))))));
            arr_36 [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13499)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0 - 2] [i_11 + 1])))));
        }
        for (unsigned char i_12 = 1; i_12 < 9; i_12 += 1) /* same iter space */
        {
            arr_41 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            var_41 = (+(((/* implicit */int) (unsigned short)65517)));
        }
        /* LoopSeq 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_42 = ((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13517))) : (14866827793063943138ULL)))));
            /* LoopSeq 2 */
            for (short i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                arr_47 [i_0 - 2] [i_0 - 2] [i_14] = ((/* implicit */_Bool) (-(0)));
                arr_48 [0LL] [i_13] [6LL] |= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_22 [6U] [(unsigned short)4] [i_13] [i_14])) >> (((var_10) - (1903351830))))));
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) arr_16 [i_13] [i_13]))));
                arr_49 [(_Bool)1] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0 + 1])) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 2])) : (((int) var_5))));
                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? ((~(3579916280645608477ULL))) : (((/* implicit */unsigned long long int) var_19))));
            }
            for (int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 + 2])) ? (((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_46 = ((/* implicit */unsigned long long int) var_3);
                arr_54 [i_0 + 2] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((int) var_14));
            }
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -406986819)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)19))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            var_48 = ((/* implicit */int) min((var_48), ((((!(((/* implicit */_Bool) var_18)))) ? ((~(((/* implicit */int) var_17)))) : (((/* implicit */int) arr_56 [i_0 + 1] [i_16] [6]))))));
            /* LoopSeq 1 */
            for (unsigned int i_17 = 1; i_17 < 9; i_17 += 4) 
            {
                var_49 ^= ((/* implicit */unsigned short) 17929548387772797510ULL);
                var_50 = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_16) == (((/* implicit */long long int) -1)))))) | (((((/* implicit */_Bool) var_17)) ? (var_13) : (var_13))));
                var_51 = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_17] [i_17] [i_0 + 1] [i_17 + 1]))));
                arr_62 [i_16] [i_16] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) arr_46 [(signed char)7] [i_16] [i_16] [i_17]))));
                arr_63 [i_0 + 1] [i_0 + 1] [i_16] [i_16] = ((/* implicit */_Bool) var_14);
            }
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                arr_66 [i_16] [i_16] = ((/* implicit */unsigned long long int) (-(arr_58 [(_Bool)1] [i_0 + 1] [i_0 - 1])));
                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)109))))) ? (((((/* implicit */_Bool) var_11)) ? (var_19) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                var_53 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_50 [i_0 - 2] [(_Bool)1] [i_0 - 2] [i_16]))));
            }
        }
        for (long long int i_19 = 1; i_19 < 9; i_19 += 1) 
        {
            var_54 = ((/* implicit */_Bool) arr_21 [i_19 + 1]);
            var_55 &= ((/* implicit */unsigned long long int) arr_5 [i_0]);
            arr_71 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_19)) : (var_12)));
        }
        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) (+(0))))));
    }
    var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (-(var_18)))) ? ((~(((/* implicit */int) (short)-30459)))) : (var_10)))));
    var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_13)))) ? (var_12) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (short)-591))))))));
}
