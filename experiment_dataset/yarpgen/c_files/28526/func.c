/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28526
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
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (short)-21887))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : ((~(((/* implicit */int) (signed char)-14))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4854106922954612115LL)) <= (6934618250647693693ULL))))) : (((((/* implicit */_Bool) 11411150598245851851ULL)) ? (3300191819U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)82)))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_2])) ? (5995359588884520935ULL) : (10679248343534046427ULL))))) ? (((16776700010810528900ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)16383), (((/* implicit */short) (signed char)-30)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [i_2] [i_0 + 3] [i_0 + 3])), (min(((short)2032), (arr_3 [i_2])))))))));
            }
            for (short i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)67)))))))), (((unsigned long long int) ((17580231645949530582ULL) >= (1985135064272819445ULL))))));
                var_19 = arr_5 [i_0] [i_1];
                arr_10 [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_3]) && (((/* implicit */_Bool) (-(arr_8 [i_3 - 1] [i_3 - 1]))))));
                var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((arr_4 [i_0 + 3] [i_1] [i_3]) + (2147483647))) << (((((var_8) + (4865827024552566754LL))) - (7LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [1ULL] [i_3 + 1] [i_3 + 1]))) : (min((var_1), (((/* implicit */long long int) (unsigned short)51515))))))));
            }
            arr_11 [i_1] = ((/* implicit */long long int) min(((-(((arr_7 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)94))) : (7767495730175505189ULL))))), (((/* implicit */unsigned long long int) ((((_Bool) 7767495730175505189ULL)) && (((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0])), (arr_6 [i_1] [i_1] [i_0])))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_21 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) (short)2045)) - (2022)))))), ((~(11629162765336527185ULL))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-4247)) && (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) (short)15328)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_4] [1U])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_5]))))) == (((((/* implicit */_Bool) 17283389379906472364ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) : (var_2)))));
                var_23 = ((/* implicit */unsigned long long int) arr_3 [i_4]);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_15)))));
            arr_21 [i_0 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) 6817581308373024431ULL)) && ((_Bool)0)));
            arr_22 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4246)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0 + 3])))));
        }
        var_25 = (~(((((/* implicit */int) (short)-4247)) & (((/* implicit */int) arr_20 [i_0 + 1] [i_0])))));
        var_26 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) ^ (4294967282U))), (((/* implicit */unsigned int) (~(-2001976264))))));
    }
    for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) max((min((((arr_23 [(short)3] [i_7]) ? (((/* implicit */int) arr_24 [i_7 + 1])) : (((/* implicit */int) arr_24 [i_7])))), (((/* implicit */int) arr_24 [i_7 + 1])))), (((((/* implicit */int) ((794847712U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7])))))) & (((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 1 */
        for (short i_8 = 1; i_8 < 23; i_8 += 3) 
        {
            arr_29 [i_8] [i_8 - 1] [i_8] = (!(((/* implicit */_Bool) ((1125899906842623ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 0ULL))))))));
            var_28 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_26 [i_7] [i_8])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_23 [i_7] [i_8])) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) arr_27 [i_8] [i_7 - 1] [(signed char)1])), (1864552914917477673ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_24 [i_8]))))) >> (((-1631672385479586987LL) + (1631672385479587007LL))))))));
            var_29 = ((/* implicit */unsigned int) 10679248343534046427ULL);
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
            {
                arr_32 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_27 [i_9] [i_8 - 1] [i_8]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [(signed char)20] [i_8])))))))) >> (((/* implicit */int) (_Bool)1))));
                arr_33 [i_9] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) > ((-(860661463U)))))), (max((((var_0) / (10679248343534046427ULL))), (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned long long int) arr_25 [i_8] [i_9]))))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((var_12), (((/* implicit */unsigned long long int) (signed char)5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (max((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))), (((((/* implicit */_Bool) var_5)) ? (6929734313793789923ULL) : (((/* implicit */unsigned long long int) 1717781714776158487LL))))))));
            }
            for (signed char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */short) ((max((min((9007227992754043588ULL), (((/* implicit */unsigned long long int) (short)-19914)))), (((/* implicit */unsigned long long int) (!(arr_24 [i_7 - 3])))))) != (21ULL)));
                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_7 + 1])) : (((/* implicit */int) arr_24 [i_7 + 1])))) + (((/* implicit */int) ((((/* implicit */_Bool) ((arr_24 [i_7 - 1]) ? (7767495730175505188ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) || (((18446744073709551594ULL) <= (((/* implicit */unsigned long long int) 2146797529U)))))))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % ((~((+(((/* implicit */int) (signed char)0))))))));
            }
            for (signed char i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
            {
                arr_38 [i_11] [i_8 + 1] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((((/* implicit */int) (short)-9553)) + (2147483647))) << (((arr_28 [i_7] [i_7]) - (2447824454896989996ULL))))), ((-(var_9)))))) ? (((((/* implicit */_Bool) ((var_12) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_14))) : (((/* implicit */unsigned long long int) arr_25 [i_7 - 3] [i_7 - 3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_11])) ? (((/* implicit */int) (short)19911)) : (((/* implicit */int) (short)-19907))))) ? (min((var_14), (8376818453625915946ULL))) : (((/* implicit */unsigned long long int) min((2148169778U), (((/* implicit */unsigned int) (short)24979)))))))));
                arr_39 [i_11] [i_8] [i_11] = ((signed char) (signed char)-114);
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (((signed char) arr_26 [i_7] [i_7]))))) >> (min((((/* implicit */int) (!((_Bool)1)))), (max((((/* implicit */int) (short)32767)), (var_9)))))));
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 23; i_12 += 3) 
    {
        arr_42 [i_12] = ((/* implicit */short) var_5);
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 17054743514176082667ULL)) ? (7767495730175505190ULL) : (((/* implicit */unsigned long long int) 2598536398U))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (8376818453625915946ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_12] [i_12])))))));
    }
    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        var_37 = ((max((((/* implicit */int) (short)-9)), (((((/* implicit */int) arr_34 [i_13] [i_13])) + (((/* implicit */int) arr_35 [i_13] [i_13])))))) < (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))));
        var_38 = ((/* implicit */_Bool) ((max(((~(arr_30 [i_13]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_13] [i_13]))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_13] [i_13])))));
        var_39 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (arr_40 [i_13] [i_13])))), ((-(1392000559533468948ULL)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
        var_40 = (+(min((((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_13] [i_13]))))), (((/* implicit */unsigned long long int) (signed char)-111)))));
    }
    var_41 = ((/* implicit */signed char) (short)(-32767 - 1));
    var_42 = ((/* implicit */unsigned long long int) (~(((((var_9) & (var_9))) ^ (((/* implicit */int) min((var_15), (((/* implicit */signed char) (_Bool)1)))))))));
    var_43 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) == (min((((/* implicit */unsigned long long int) var_4)), (10679248343534046427ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (var_9) : (((/* implicit */int) var_13))))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)48)), (var_8)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11470))) % (var_14))) : (((7767495730175505186ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}
