/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5052
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) 8153418176674143080ULL)) ? (var_1) : (8183940724493455970ULL))) | (max((56ULL), (((/* implicit */unsigned long long int) ((long long int) -2097779263)))))));
        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) ((unsigned short) var_3))) + (((/* implicit */int) ((_Bool) (_Bool)1)))))))));
        var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (7732893925703662416ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) >> (((((/* implicit */int) (unsigned short)21)) % (var_6))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((unsigned short) var_5)))));
        var_14 = ((/* implicit */unsigned int) max((max((arr_4 [i_1]), (-2147483635))), (min((((/* implicit */int) (short)511)), (arr_4 [i_1])))));
        var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((max((-2147483639), (((/* implicit */int) (short)32767)))) >> (((-2147483624) + (2147483630)))))) : (((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
            arr_9 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33746)) >> (((var_2) - (4207724377054234821ULL)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_4)))))))));
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((12930329833656779984ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))))), (min((18446744073709551601ULL), (((/* implicit */unsigned long long int) arr_2 [i_2])))))))));
            arr_10 [i_1] = ((/* implicit */unsigned char) ((_Bool) (+(var_0))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (short)26441))))) && (((/* implicit */_Bool) var_7))));
            arr_14 [i_1] [i_3] [i_3] = ((/* implicit */long long int) (-((~(1)))));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) -564226411);
        }
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) 63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) min((arr_13 [i_1] [i_1]), (((/* implicit */unsigned long long int) (short)-26444))))) ? (((((/* implicit */_Bool) 4154133248U)) ? (8388607ULL) : (1388724446279744484ULL))) : (((/* implicit */unsigned long long int) ((2147483647) >> (((-310584947) + (310584951)))))))));
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((unsigned long long int) (-((-(((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_18 [i_5] [i_5 - 1])) : (((/* implicit */int) var_7)))))))));
        arr_22 [i_5] = ((/* implicit */short) ((var_2) / (((/* implicit */unsigned long long int) 2147483645))));
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073701163024ULL)) ? (var_5) : (((/* implicit */unsigned long long int) var_6)))))));
    /* LoopSeq 1 */
    for (int i_6 = 1; i_6 < 14; i_6 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_1 [i_6] [i_6 + 1])), (var_2))), (((/* implicit */unsigned long long int) var_6))));
        /* LoopSeq 4 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) 2147483645)));
            arr_30 [i_6] [i_7] = ((/* implicit */_Bool) max((0), (((/* implicit */int) (_Bool)1))));
            arr_31 [i_6] [9] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 163737480695249674ULL)) ? (((/* implicit */int) (short)17721)) : (((/* implicit */int) (short)-17721))));
        }
        for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (18446744073701163017ULL) : (16414068984181630997ULL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((int) ((_Bool) (unsigned char)229)))));
            var_26 ^= var_2;
            var_27 = ((/* implicit */unsigned short) ((1U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57069)))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((unsigned short) var_8)))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
        {
            arr_37 [i_6] [i_6] = ((/* implicit */unsigned char) -6433853524706936559LL);
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 17; i_10 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8054946692743634165ULL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (15062527636707521258ULL))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_24 [i_10] [i_6])) : (-1487001929))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_26 [(short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33766))))))));
                    var_31 = ((/* implicit */int) var_4);
                }
            }
            for (int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
            {
                arr_47 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (18446744073709551615ULL))));
                arr_48 [i_6] = ((/* implicit */int) ((_Bool) arr_27 [i_9 - 1]));
            }
            var_32 = ((/* implicit */int) ((unsigned char) 3301217132034052619ULL));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                arr_51 [i_6] [i_6] [i_13] = ((/* implicit */_Bool) ((unsigned long long int) 2147483627));
                var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_35 [i_13] [i_9] [i_13])) == (((/* implicit */int) var_3)))))));
                var_34 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) var_0)) - (22ULL)))));
            }
        }
        for (unsigned int i_14 = 2; i_14 < 15; i_14 += 2) /* same iter space */
        {
            var_35 ^= ((/* implicit */unsigned short) (((-((+(var_5))))) * (((/* implicit */unsigned long long int) min((arr_0 [i_6 + 3]), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_33 [16ULL])))))))));
            var_36 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)14), ((unsigned short)65521)))))))));
            /* LoopSeq 1 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                var_37 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (_Bool)1)), (max((295202894), (arr_42 [(short)14] [i_14] [i_14])))))));
                var_38 = ((/* implicit */_Bool) ((short) max(((unsigned char)237), (((/* implicit */unsigned char) (_Bool)1)))));
                var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (min((((/* implicit */unsigned int) var_9)), (20U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((1923693697) - (1923693697))))))));
            }
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (18446744073701163017ULL))))))))));
        }
        var_42 = ((/* implicit */int) var_4);
    }
    var_43 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), ((((((-2147483647 - 1)) == (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (13ULL)))))));
    var_44 ^= ((/* implicit */int) (unsigned short)31816);
}
