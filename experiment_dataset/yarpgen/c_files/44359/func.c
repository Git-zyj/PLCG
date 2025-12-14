/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44359
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
    var_19 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 7277199153673231440LL)) ? (-9074139311126270726LL) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (-7277199153673231440LL)))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (signed char)8)) / (((/* implicit */int) (short)-32766)))));
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (((long long int) 4973844847861473498LL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
            {
                for (signed char i_6 = 4; i_6 < 14; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((signed char) (signed char)82));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) 10235611445362567035ULL)) ? (-4973844847861473491LL) : (var_8))))));
                            var_24 = ((/* implicit */short) -4973844847861473490LL);
                            arr_24 [i_0] [i_4] [i_0] [(signed char)11] [i_5] = ((/* implicit */short) ((4973844847861473486LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-65)))));
                        }
                    } 
                } 
            } 
            var_25 *= ((signed char) (signed char)-105);
            arr_25 [10U] [10U] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4973844847861473488LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26789))) : (-4973844847861473491LL)))) * (((unsigned long long int) (_Bool)1)));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) ((4973844847861473501LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-34)))));
                var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                arr_28 [i_0] = ((/* implicit */unsigned long long int) (short)-32755);
                arr_29 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)32756)) || (((/* implicit */_Bool) (signed char)56))))) != (((/* implicit */int) (short)64))));
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 11; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_8] [i_8] [(signed char)14] [i_10] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1))));
                            var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) -7277199153673231441LL)))) : (((long long int) 2052119324U))));
                            var_30 = ((/* implicit */unsigned long long int) -121238684490161343LL);
                        }
                    } 
                } 
            }
            for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
            {
                var_31 += ((/* implicit */_Bool) ((1895710269U) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                arr_40 [12LL] [(short)14] [12LL] [i_11] = ((/* implicit */_Bool) var_6);
            }
            for (unsigned int i_12 = 2; i_12 < 14; i_12 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) (signed char)39);
                arr_43 [i_4] [(signed char)0] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) 7277199153673231445LL)));
                var_33 *= ((/* implicit */signed char) ((long long int) (short)26785));
            }
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                arr_46 [i_0] [(short)10] [(short)10] [(signed char)9] &= ((/* implicit */long long int) ((short) (unsigned char)52));
                /* LoopNest 2 */
                for (unsigned char i_14 = 4; i_14 < 12; i_14 += 4) 
                {
                    for (short i_15 = 3; i_15 < 12; i_15 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14549)))));
                            arr_53 [i_0] = ((/* implicit */long long int) 2052119306U);
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_16 = 2; i_16 < 13; i_16 += 4) 
        {
            var_35 = ((/* implicit */signed char) var_1);
            var_36 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (var_8)))) == (min((var_10), (var_11)))));
            arr_56 [i_16] = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)127)) >> (((576460752303423488LL) - (576460752303423487LL))))), (((/* implicit */int) min((((/* implicit */short) (signed char)-120)), ((short)-20537))))));
            var_37 = ((/* implicit */long long int) ((8ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 7U))))));
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((signed char) (signed char)(-127 - 1)))))) == (((((/* implicit */_Bool) -4973844847861473499LL)) ? (1381764011784891391LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))))));
        }
        for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 3) 
        {
            arr_61 [i_0] [i_17] = min((((/* implicit */long long int) ((unsigned int) 2399257002U))), (((long long int) (unsigned char)206)));
            var_39 = ((/* implicit */unsigned int) ((long long int) ((3091099780U) >> (((var_8) + (3993200336216374842LL))))));
        }
        for (signed char i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            var_40 = ((/* implicit */long long int) min((var_40), (((((/* implicit */long long int) 1895710297U)) | ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (274877906943LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))))))));
            /* LoopSeq 3 */
            for (short i_19 = 0; i_19 < 15; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_20 = 1; i_20 < 14; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */int) (short)-11476)) * (((/* implicit */int) (unsigned char)255))));
                            var_42 ^= ((/* implicit */unsigned int) 137438953468LL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 15; i_22 += 4) 
                {
                    for (long long int i_23 = 1; i_23 < 12; i_23 += 4) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) -137438953468LL);
                            arr_76 [i_0] [i_18] [i_18] [i_22] [i_22] = ((/* implicit */short) (signed char)-117);
                        }
                    } 
                } 
            }
            for (short i_24 = 0; i_24 < 15; i_24 += 4) /* same iter space */
            {
                var_44 &= ((/* implicit */signed char) (short)-11465);
                var_45 += ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 998427232519580049ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
            }
            for (long long int i_25 = 1; i_25 < 13; i_25 += 4) 
            {
                var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) -4973844847861473499LL))) + (((((/* implicit */_Bool) 2399257034U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))));
                var_47 = ((/* implicit */signed char) min((((long long int) min(((short)11), (((/* implicit */short) var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (3116658504U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))))))));
            }
            var_48 = ((/* implicit */long long int) (signed char)77);
        }
    }
    var_49 = ((/* implicit */unsigned long long int) -9223372036854775807LL);
}
