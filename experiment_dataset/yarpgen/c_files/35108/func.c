/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35108
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2032267982365598555LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-6030435650339746094LL)))) && (((/* implicit */_Bool) 1249274632923740949LL))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33853)) ? (max((((/* implicit */long long int) (unsigned short)65517)), (6030435650339746122LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (1622419642427986818LL))))))))));
                            arr_11 [22LL] [i_1] [(signed char)18] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-19594)), ((unsigned short)46632)));
                        }
                    } 
                } 
                arr_12 [(signed char)0] [i_0 + 1] [(short)10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)15593)) : (arr_3 [i_0] [i_0] [i_1])))))) && (((/* implicit */_Bool) -1622419642427986819LL))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_18 = var_9;
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            arr_18 [i_4] [i_4] = ((short) var_5);
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                arr_22 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                arr_23 [i_6] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((long long int) (signed char)-62));
                arr_24 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4] [i_5] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (arr_6 [i_5] [i_5] [i_5] [i_4])));
            }
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
            {
                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_6 [i_4] [i_4] [i_4] [i_4]))) >= (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4] [i_7] [i_4] [i_4]))));
                var_20 = ((/* implicit */unsigned long long int) (signed char)42);
            }
            for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_21 |= ((/* implicit */unsigned int) (unsigned short)19926);
                arr_30 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_4] [(signed char)17] [i_8] [i_8])) ? (1622419642427986832LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_4] [i_4])))));
                arr_31 [i_4] = ((/* implicit */unsigned char) ((signed char) -4LL));
            }
            arr_32 [i_4] = ((/* implicit */signed char) 0LL);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8405771863626905247LL)) ? (arr_10 [i_4] [i_5] [i_5] [i_5] [i_5]) : (arr_10 [i_4] [i_4] [i_5] [i_5] [i_5])));
        }
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                arr_39 [i_4] [i_4] [(unsigned short)8] = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) (unsigned short)18406)) ? (((/* implicit */long long int) 14U)) : (1622419642427986818LL))), (((/* implicit */long long int) 0)))));
                arr_40 [i_9] &= ((/* implicit */unsigned short) min((((((/* implicit */int) arr_0 [i_10])) - (((/* implicit */int) arr_0 [i_10])))), (((((/* implicit */_Bool) arr_0 [(unsigned short)1])) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) arr_0 [i_4]))))));
            }
            arr_41 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((~(((/* implicit */int) (unsigned short)26932)))) > (((/* implicit */int) ((14621416654714031274ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51)))))))))) > (max((max((var_12), (((/* implicit */long long int) arr_29 [12] [13LL] [13LL])))), (arr_15 [i_4] [i_9])))));
        }
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                arr_49 [i_4] [i_4] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) ((5464796646708137316LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64952))))));
                var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) >= (((/* implicit */int) var_2)))))) : (min((3825327418995520342ULL), (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)-4))))))));
            }
            for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                arr_54 [i_13] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (unsigned short)57045))));
                var_24 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (2353510191U)))) > (9223372036854775793LL)))), (-1566125755)));
                var_25 &= ((/* implicit */long long int) ((short) var_12));
            }
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [19] [i_11] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_4] [19LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4])))))));
            arr_55 [i_4] [i_4] = ((/* implicit */unsigned short) ((long long int) (-((~(((/* implicit */int) (unsigned short)54125)))))));
        }
        for (short i_14 = 1; i_14 < 17; i_14 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                var_27 = ((/* implicit */signed char) (~(686464127U)));
                arr_61 [i_4] [i_4] [7ULL] = (short)32767;
                var_28 = ((/* implicit */long long int) arr_26 [i_4] [i_14 - 1]);
            }
            for (long long int i_16 = 3; i_16 < 15; i_16 += 3) 
            {
                arr_64 [i_4] [7LL] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((signed char) 0)))));
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 19; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5464796646708137316LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (6030435650339746130LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)105)) > (((/* implicit */int) (signed char)3)))))))))));
                            arr_70 [(unsigned short)9] [i_14] [i_14] [i_14 + 1] [i_4] [i_14] [i_14] = ((/* implicit */signed char) (-(((int) arr_35 [i_4]))));
                        }
                    } 
                } 
            }
            for (signed char i_19 = 2; i_19 < 17; i_19 += 1) 
            {
                arr_73 [i_4] [i_4] [i_19] = ((/* implicit */unsigned short) var_7);
                arr_74 [i_4] [(signed char)6] [i_4] [i_4] |= (unsigned short)8883;
            }
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (1668000166051685547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11400)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) -6030435650339746130LL))))), (min((((/* implicit */unsigned long long int) ((-6030435650339746130LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58516)))))), (1760536852154936985ULL))))))));
            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 13289091124043115930ULL))) ? (((((((/* implicit */_Bool) 6030435650339746130LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)9)))) * (-7))) : (((/* implicit */int) (signed char)-44))));
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 10; i_20 += 4) 
    {
        for (long long int i_21 = 2; i_21 < 9; i_21 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_1))));
                                arr_89 [i_20] [i_20] [i_21 + 1] [i_21 + 1] [(unsigned short)0] [i_24] = arr_58 [i_22];
                                arr_90 [i_20] [i_21] [i_20] [i_23] [4LL] [(short)9] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-67)) ? (1760536852154936974ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12930))))))), ((~(((/* implicit */int) arr_17 [10LL] [i_22]))))));
                                arr_91 [i_20] [i_20] [i_20] [i_23] [i_24] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)5556)) > (((/* implicit */int) (unsigned short)14987))))), (arr_53 [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21 - 2])))) >= (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_17 [i_22] [i_22])) : (((/* implicit */int) (signed char)63))))) != (arr_80 [(unsigned char)8]))))));
                            }
                        } 
                    } 
                } 
                var_33 = ((/* implicit */short) ((-1322384777) - (((/* implicit */int) max(((short)26017), ((short)15347))))));
            }
        } 
    } 
}
