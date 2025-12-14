/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229062
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
    var_13 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((short) var_3))) ? ((-(3736404678733651929ULL))) : (((/* implicit */unsigned long long int) var_5)))));
    var_14 *= ((/* implicit */int) ((((/* implicit */_Bool) 6144U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (21U)))) ? (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((1334406877U) >> (((((/* implicit */int) var_3)) - (13114))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_15 &= ((/* implicit */int) min((max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((long long int) var_0)))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_5))));
        var_17 = 6524877716943877262ULL;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) 598156110010071847LL)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)50830)))))))));
        /* LoopSeq 4 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            arr_7 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_2 + 1] [i_2 - 1])), (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_5 [i_2] [8LL] [8LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (max((((int) arr_3 [i_1] [i_2])), (((((/* implicit */int) var_0)) * (var_5))))) : (((/* implicit */int) arr_1 [i_2]))));
            arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_8)) : (((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))));
            var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_2 + 1])) : (arr_2 [i_2 - 2])))));
            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_8), (((/* implicit */signed char) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (arr_3 [i_2 + 1] [i_2 - 2]))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3805800336U)))), ((-(53646686305183881ULL)))))));
            var_21 -= ((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1]);
        }
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_22 = ((int) min((0ULL), (((/* implicit */unsigned long long int) ((arr_0 [i_1] [6U]) % (((/* implicit */int) (short)-1)))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_4)))))))) : (var_6))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_4 - 2] [i_4 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 2])))));
                    var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) -355020256)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_7)))) < (((/* implicit */int) ((((/* implicit */int) (unsigned short)65527)) != (((/* implicit */int) (unsigned char)133)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)48)))) % ((+(var_6)))))));
                    arr_17 [8ULL] [8ULL] [(signed char)5] [i_5] = ((/* implicit */signed char) ((unsigned short) (short)-49));
                    var_26 = ((/* implicit */long long int) (-(max((152719127U), (((/* implicit */unsigned int) (short)-10799))))));
                }
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((arr_3 [i_6] [i_6]), (((((/* implicit */_Bool) (unsigned char)174)) ? (1069918593865173359ULL) : (((/* implicit */unsigned long long int) var_6))))))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((1069918593865173359ULL), (((/* implicit */unsigned long long int) (unsigned short)1023)))))));
                }
                for (unsigned int i_7 = 4; i_7 < 12; i_7 += 1) 
                {
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_7 - 4])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_3 [i_4 - 2] [i_4 - 2])))) ? (arr_3 [i_4 - 1] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_0)))))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_21 [i_1] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_4] [i_1]))) : (var_10)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 882685071)), (arr_18 [i_1] [i_1] [i_7 + 3] [i_7])))) : ((~(max((((/* implicit */unsigned long long int) 9)), (13479796382449524598ULL)))))));
                }
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned char)38)))) ? (((/* implicit */long long int) ((/* implicit */int) ((10532804517973399886ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (-4726334815272889840LL)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) -120593277)), (4294967295U)))) : (max((arr_18 [i_9 + 2] [i_8] [i_4 + 1] [i_4 + 2]), (((/* implicit */long long int) arr_14 [i_4 + 1]))))));
                        var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_8))))))), (min((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-62)), (-2077994024))))))));
                        var_33 = ((/* implicit */short) ((long long int) max((arr_9 [i_4] [i_9 - 1]), (((/* implicit */short) arr_29 [i_9] [i_1] [i_9] [i_9 + 1])))));
                    }
                    arr_30 [i_8] [8U] [i_8] [i_3] [i_8] = ((/* implicit */unsigned short) ((_Bool) (+(min((((/* implicit */unsigned int) (_Bool)1)), (0U))))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((3678870380U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 2] [i_4 - 2]))))) > (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)2244))))))))));
                    var_35 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned short)6341)) == (((/* implicit */int) var_1)))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_10))) : (((/* implicit */unsigned long long int) ((arr_11 [3ULL]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [0LL])))))))) == (((/* implicit */unsigned long long int) ((arr_0 [i_3] [i_4 + 2]) & ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_36 = ((/* implicit */unsigned short) -1928918701);
                }
                arr_31 [i_4] [i_1] = ((/* implicit */int) arr_3 [i_1] [i_3]);
            }
        }
        for (int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            var_37 += ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) > (((/* implicit */int) (unsigned char)252))))), (min((((/* implicit */int) (unsigned short)23410)), (((((/* implicit */_Bool) var_4)) ? (2077994023) : (((/* implicit */int) var_8))))))));
            var_38 = ((/* implicit */int) ((var_9) ? (arr_5 [i_1] [5] [5]) : (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned int) arr_32 [i_1] [i_1])), (2147483648U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (long long int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            arr_38 [i_1] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_29 [(unsigned char)11] [i_11] [3ULL] [(unsigned char)11]);
            arr_39 [i_11] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4160817737U)) ? (-2111429380) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11]))) : (min((var_10), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) (short)6156))));
        }
        arr_40 [(_Bool)1] = ((/* implicit */unsigned char) ((short) min((max((((/* implicit */int) var_7)), (2077994024))), ((-(((/* implicit */int) (unsigned char)71)))))));
        var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 2097136)))))))) < (((arr_12 [i_1]) + (((/* implicit */unsigned long long int) ((long long int) arr_29 [i_1] [i_1] [i_1] [14])))))));
        arr_41 [i_1] [i_1] = ((/* implicit */long long int) max(((+(min((76485938), (((/* implicit */int) var_1)))))), (((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)217)))))))));
    }
    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        var_40 += ((/* implicit */unsigned char) (+((~((-(2147483626)))))));
        var_41 = ((signed char) max((((var_10) - (18446744073709551612ULL))), (((/* implicit */unsigned long long int) min((arr_43 [i_12]), (((/* implicit */unsigned char) var_9)))))));
        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-62))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    /* LoopNest 3 */
    for (unsigned char i_13 = 1; i_13 < 20; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            for (long long int i_15 = 3; i_15 < 17; i_15 += 4) 
            {
                {
                    arr_52 [i_13] = ((/* implicit */unsigned char) arr_46 [i_13 - 1] [i_15 - 1]);
                    var_43 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55392)) & (2147483626)))) ? (((unsigned long long int) arr_48 [i_13 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)256)))));
                    var_44 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) max((var_1), ((_Bool)0))))))) ? (max((((((/* implicit */_Bool) arr_48 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_48 [i_13]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_46 [i_13 + 1] [i_15 - 1])) : (arr_49 [i_13] [i_13] [(short)10] [(_Bool)1])))));
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) ? (((/* implicit */unsigned long long int) 4294967286U)) : ((+(15363086274337465106ULL)))));
                }
            } 
        } 
    } 
    var_46 = ((/* implicit */unsigned long long int) var_3);
}
