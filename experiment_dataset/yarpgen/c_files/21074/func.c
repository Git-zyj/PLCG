/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21074
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (arr_0 [i_0])))) ? (((long long int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) (-(arr_0 [i_1])))) : (max((((/* implicit */unsigned int) (-(var_2)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_15)) : (var_10)))))));
            var_16 -= ((/* implicit */_Bool) (((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))) % (((/* implicit */long long int) ((((unsigned int) var_8)) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) var_5)))))))))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((-9223372036854775796LL), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((signed char) 9223372036854775803LL))))))));
            arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)7728)) * (((/* implicit */int) (short)3230))))) : (((((/* implicit */_Bool) (short)2239)) ? (var_0) : (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0]))))))) ? (((unsigned int) ((((/* implicit */int) arr_2 [i_1])) / (arr_0 [i_1])))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_1]))))), (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (10526570763340000054ULL)))) ? (((var_13) ? (((/* implicit */int) arr_1 [(unsigned short)4] [i_2])) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) (signed char)-1)) - (arr_0 [i_0])))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_18 ^= ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_3])));
                var_19 = ((/* implicit */_Bool) var_11);
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7195)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [3])) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) : (9223372036854775807LL)))));
            var_21 = ((((((/* implicit */_Bool) var_8)) ? (arr_9 [i_0] [i_0] [i_0] [9]) : (((/* implicit */int) (short)3251)))) & (((/* implicit */int) ((short) arr_3 [i_0] [i_4] [i_4]))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_4]))))) : (((((/* implicit */int) arr_7 [i_4])) * (((/* implicit */int) var_11))))));
            var_23 -= ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_5)))));
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_14 [i_0]))));
            var_25 = ((/* implicit */short) ((((/* implicit */int) (short)16368)) >> (((max((((/* implicit */long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */int) arr_1 [i_0] [i_5]))))), (((((/* implicit */_Bool) (unsigned short)7193)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25714))) : ((-9223372036854775807LL - 1LL)))))) - (25703LL)))));
        }
        var_26 = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_27 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) 1863509740)) || (((/* implicit */_Bool) var_12)))) ? (arr_0 [i_6]) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)4234))))))) >= ((+(((/* implicit */int) ((((/* implicit */_Bool) 8761613334841566629ULL)) || (((/* implicit */_Bool) var_14)))))))));
            arr_21 [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [(signed char)7])))));
            var_28 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) arr_6 [i_0]))) : (((/* implicit */int) (short)-1))))), (arr_12 [i_6])));
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            arr_24 [i_0] [i_7] [i_7] = ((((/* implicit */int) (unsigned short)52301)) / (((/* implicit */int) arr_23 [i_0])));
            arr_25 [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_12 [i_0]), (((/* implicit */unsigned int) (unsigned short)58340))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (short)3246)) || (((/* implicit */_Bool) arr_0 [i_0]))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_7])) == (4294967294U)))), ((unsigned short)13250))))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) (short)-2240)) : (-227017039)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 528482304)))) : (max((((/* implicit */long long int) (_Bool)0)), (arr_10 [i_0] [i_0] [i_0] [i_0])))))) ? (arr_15 [i_0] [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6175)) ? (arr_12 [i_0]) : (((/* implicit */unsigned int) var_9))))) ? (((var_9) / (((/* implicit */int) arr_2 [i_0])))) : ((-(((/* implicit */int) arr_19 [i_0] [i_0]))))))));
        var_29 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0])) + (var_15)))) ? ((-(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)875)) && (((/* implicit */_Bool) arr_11 [i_0])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)2248))))) : ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) 227017021)))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        var_30 = ((/* implicit */short) max((((((/* implicit */int) arr_28 [i_8])) << (((1379539566) - (1379539565))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)3331)))))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((((-1870158602) < (((/* implicit */int) (short)25714)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -4695305133754030240LL))))) : (((/* implicit */int) ((short) 227017031))))) : (((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-47)), (arr_28 [i_8]))))))));
        arr_29 [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 173470077U)) ? ((-(4427775881951854634ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42198)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22863))) : (9223372036854775787LL))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14368)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11307)))))) ? (((((/* implicit */_Bool) 6425404206130095550LL)) ? (((/* implicit */int) (short)32076)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) ((short) -2160341194833604388LL))))) / (-1665694003))))));
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-25714)) ? (-9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_34 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_32 [(unsigned short)9])) : (((/* implicit */int) arr_31 [i_10]))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)31264)) & (((/* implicit */int) arr_28 [13LL])))));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_11])) ? (arr_36 [i_8] [2ULL] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)-10292)))))) ? ((-(((/* implicit */int) arr_32 [i_11])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8] [i_10])) || (((/* implicit */_Bool) arr_28 [i_11])))))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_10])) ? (((/* implicit */int) arr_30 [i_8] [i_10])) : (((/* implicit */int) arr_30 [i_8] [(short)7]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_11])) ^ (((/* implicit */int) arr_27 [i_10] [i_11])))))));
                arr_37 [i_8] [i_10] = ((/* implicit */short) arr_34 [i_8] [i_10] [i_11]);
            }
            arr_38 [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)4096)) >> (((((/* implicit */int) (unsigned short)28232)) - (28232))))) == (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))));
            arr_39 [i_8] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) -6425404206130095551LL)))));
        }
        for (long long int i_12 = 4; i_12 < 14; i_12 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)1)) ? (arr_34 [i_8] [(short)4] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_8])) ? (var_15) : (((/* implicit */int) arr_32 [i_8])))))))) ? (max((((arr_35 [i_8] [i_8] [i_12]) - (15U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_12])) ? (((/* implicit */int) (short)-32077)) : (((/* implicit */int) arr_27 [i_8] [i_8]))))))) : (((/* implicit */unsigned int) max((((int) (short)-32066)), (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [2])) || (((/* implicit */_Bool) arr_27 [i_12] [i_8])))))))))))));
            var_38 |= ((/* implicit */unsigned int) ((((long long int) arr_27 [i_8] [i_12 - 4])) % (((/* implicit */long long int) (-(((((/* implicit */_Bool) 1940340113U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32071))))))))));
            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_35 [i_12] [i_12 - 4] [i_12])))) ? (((max((4124097806U), (((/* implicit */unsigned int) (signed char)-4)))) % (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))))) : (((/* implicit */unsigned int) ((int) arr_41 [(short)6])))));
            var_40 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) * ((-(arr_41 [i_8]))))) != (((/* implicit */unsigned long long int) ((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_8]))) : (var_3))))))));
        }
        for (long long int i_13 = 4; i_13 < 14; i_13 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((-8257080246320304900LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)9))))))) % (arr_34 [i_8] [i_13] [i_13])));
            arr_46 [i_13] = ((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) arr_45 [i_13 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_8] [i_13 - 3] [i_8]))) : (var_6))) | (((/* implicit */unsigned long long int) -191556698)))));
            arr_47 [i_13] [i_8] [i_8] |= ((/* implicit */short) ((((var_2) != ((+(((/* implicit */int) (unsigned short)38090)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_8]))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [(_Bool)1] [i_8] [i_13])) && (((/* implicit */_Bool) arr_32 [i_8])))))) >= (6400891899426738061ULL))))));
            var_43 ^= ((/* implicit */long long int) ((((_Bool) ((arr_44 [i_13 - 1] [i_13 - 1] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) : (arr_34 [i_8] [i_8] [i_8])))) ? (max((((((/* implicit */_Bool) arr_35 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) var_15)) : (var_3))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_40 [i_13]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8] [i_13 - 4]))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_44 = ((/* implicit */_Bool) max((var_44), (((((((/* implicit */int) max(((short)96), (((/* implicit */short) arr_42 [(short)4] [i_13] [i_14]))))) / (((int) (_Bool)1)))) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_8] [i_13])) % (((/* implicit */int) (unsigned short)16275))))) && (((/* implicit */_Bool) ((long long int) 3577428359U))))))))));
                var_45 = ((/* implicit */signed char) arr_44 [i_14] [i_14] [i_14]);
                var_46 ^= ((/* implicit */unsigned char) arr_40 [i_14]);
            }
        }
    }
    var_47 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((/* implicit */int) (unsigned short)0))))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))) : (2426654007088935149ULL))))));
}
