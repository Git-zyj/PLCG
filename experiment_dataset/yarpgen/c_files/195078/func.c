/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195078
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
    var_19 = ((/* implicit */long long int) ((short) var_5));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (unsigned char)185))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned short) (short)4092)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 15641070429705328108ULL))));
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-1))));
                        arr_14 [i_0] [i_1] [i_0] [i_3] [4U] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)126)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-15))) * (9090527131743605285ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9)))));
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)213))));
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) 4575657221408423936LL))))))));
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] [i_0] [i_0] = (~(((/* implicit */int) (unsigned short)33638)));
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) var_16))))));
                        var_26 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
                    }
                    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1 + 1]))));
                    arr_21 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_28 ^= arr_10 [i_0] [i_1] [i_1] [i_7] [i_0] [i_1 - 1];
                    var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))));
                    arr_24 [i_0] [i_0] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_2))) == ((+(((/* implicit */int) var_15))))));
                }
                var_30 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                var_31 = ((/* implicit */unsigned long long int) var_14);
            }
            arr_25 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)4095))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                arr_30 [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8508576660328643206LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (4575657221408423922LL)));
                var_32 = ((/* implicit */unsigned char) 4575657221408423931LL);
            }
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_26 [i_1 - 2] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_26 [(short)2] [(unsigned short)8] [i_1 - 2] [i_1 - 1]))));
        }
        for (int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            arr_33 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */unsigned int) var_7))))) ? ((+(((/* implicit */int) (unsigned short)23138)))) : (((/* implicit */int) ((short) 18023758405914132150ULL))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) 18446744073709551604ULL);
                var_35 = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_23 [i_0] [i_9] [i_10])))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned short i_12 = 3; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_12 + 3] [i_12 - 3] [i_12 - 3] [i_12] [i_12] [i_12 + 1] [i_12 - 1])))))));
                            arr_43 [i_12] [i_11] [i_10] [i_11] [i_0] = ((/* implicit */unsigned long long int) (short)32760);
                        }
                    } 
                } 
            }
            for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                var_37 = ((((/* implicit */_Bool) arr_42 [(signed char)11] [(signed char)11] [i_13])) ? (((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)61469))))))) : (((((/* implicit */_Bool) ((short) -4575657221408423937LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : ((-(-2358864275592567475LL))))));
                var_38 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_45 [i_13])))) ^ (((((/* implicit */_Bool) arr_45 [i_9])) ? (((/* implicit */int) arr_45 [i_0])) : (((/* implicit */int) (unsigned short)48134))))));
                var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 63488LL)) ? (((/* implicit */unsigned long long int) -4575657221408423918LL)) : (7838964370836336086ULL)));
            }
            for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (-(((int) 4575657221408423964LL)))))));
                var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */int) (unsigned char)199)) * (((/* implicit */int) ((unsigned char) (unsigned short)28633)))))));
                var_42 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1728327332)))) && (((/* implicit */_Bool) ((long long int) (unsigned short)4120)))));
            }
        }
    }
    for (short i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        var_43 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_15])))))) < (max((((/* implicit */long long int) arr_49 [i_15])), (arr_48 [i_15])))));
        arr_50 [i_15] [(unsigned short)21] = ((/* implicit */unsigned char) arr_49 [i_15]);
        var_44 *= ((/* implicit */short) (unsigned char)255);
        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) arr_48 [i_15]))));
        var_46 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)3093))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)-27811)) : (((/* implicit */int) var_18)))) : ((-(((/* implicit */int) (signed char)(-127 - 1))))))), ((((+(((/* implicit */int) var_17)))) * ((-(((/* implicit */int) var_0))))))));
    }
    /* LoopSeq 2 */
    for (short i_16 = 0; i_16 < 25; i_16 += 1) 
    {
        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_16] [i_16])) ? (max((((7402884992010334702LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15551))))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))));
        arr_55 [i_16] = (unsigned char)16;
    }
    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
        {
            var_48 = var_12;
            arr_61 [i_17] = ((/* implicit */signed char) ((arr_51 [i_17]) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))));
        }
        for (long long int i_19 = 4; i_19 < 23; i_19 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_20 = 2; i_20 < 21; i_20 += 3) 
            {
                var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (((long long int) 65535ULL))));
                var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((unsigned short) ((unsigned char) (-(((/* implicit */int) var_8)))))))));
                var_51 = ((/* implicit */short) ((unsigned short) ((unsigned int) min(((short)11078), (var_4)))));
            }
            var_52 = ((/* implicit */unsigned short) ((signed char) ((short) arr_57 [i_19 - 3] [i_19 - 4])));
        }
        arr_66 [i_17] [(unsigned char)4] = (+(((/* implicit */int) (unsigned char)9)));
        var_53 = ((/* implicit */unsigned char) max((var_53), (((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_60 [(unsigned char)17] [i_17])) : (((/* implicit */int) var_12))))) | (((((/* implicit */_Bool) 14746970983602119025ULL)) ? (66584576LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 2; i_22 < 23; i_22 += 3) 
            {
                var_54 = ((/* implicit */short) (+(((/* implicit */int) (signed char)70))));
                var_55 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) * (2146959360ULL)));
                var_56 = ((/* implicit */signed char) (-(-9LL)));
                var_57 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */_Bool) -9LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_0))))))));
            }
            arr_72 [i_17] [i_17] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)3295))));
        }
        for (unsigned short i_23 = 0; i_23 < 24; i_23 += 1) 
        {
            var_58 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned short)65024)) * (((/* implicit */int) ((unsigned char) (unsigned char)79)))))));
            var_59 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 117640906U)) / (2249600790429696LL)))), (10357936662996770620ULL))) / (var_5)));
            var_60 = ((/* implicit */long long int) ((((((((/* implicit */int) (unsigned short)255)) | (((/* implicit */int) arr_57 [i_17] [i_23])))) <= (((/* implicit */int) arr_64 [i_23] [i_17])))) && (((/* implicit */_Bool) (((~(((/* implicit */int) var_8)))) | (((/* implicit */int) (signed char)8)))))));
        }
        for (short i_24 = 0; i_24 < 24; i_24 += 4) 
        {
            arr_78 [i_17] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)48862))))))));
            var_61 ^= ((((/* implicit */_Bool) 4575657221408423922LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27215))) : (-3835019854513905988LL));
            /* LoopNest 3 */
            for (unsigned char i_25 = 0; i_25 < 24; i_25 += 4) 
            {
                for (long long int i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    for (short i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (short)8464))))))));
                            var_63 = ((/* implicit */short) (-(((/* implicit */int) var_15))));
                            var_64 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)42)))))));
                        }
                    } 
                } 
            } 
        }
        arr_85 [i_17] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)73))))))))));
    }
}
