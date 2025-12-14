/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217713
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
    var_17 = ((/* implicit */unsigned char) (+(((((unsigned int) (short)-19330)) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
    var_18 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) << (((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)207))))) - (199)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_0) : (((/* implicit */int) var_13)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) % ((~(((/* implicit */int) (unsigned short)65535)))))))));
        var_20 += ((/* implicit */short) (+(((((/* implicit */_Bool) max((15650454282320528368ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) (short)-19965)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)15))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
            arr_7 [5ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)106))));
            /* LoopSeq 1 */
            for (signed char i_3 = 4; i_3 < 19; i_3 += 2) 
            {
                arr_10 [8ULL] [8ULL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3 - 3])) ? (15650454282320528368ULL) : (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3 - 4] [i_3 + 1]))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (var_12))))));
                arr_11 [i_1] [i_3] = ((/* implicit */signed char) (unsigned char)240);
                var_23 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_6 [i_1] [i_2] [i_2])))) / (((var_12) << (((arr_3 [i_3]) + (83700473576834034LL))))));
            }
            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                arr_14 [i_4] [i_4] [(unsigned char)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))));
                arr_15 [20] [8ULL] = ((/* implicit */short) ((unsigned short) 590516835));
                arr_16 [i_1] [i_2] [(unsigned char)8] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) (short)17462));
            }
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                var_25 = ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (13728219312184318769ULL));
                var_26 = ((/* implicit */unsigned short) (-(var_0)));
                var_27 += ((/* implicit */int) ((unsigned short) (short)-2012));
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            arr_22 [i_6] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1])) ? (((/* implicit */unsigned long long int) arr_21 [i_1])) : (var_4)))) ? (arr_21 [i_6]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_21 [i_1])) < (var_16))))));
            var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27936)) ? (5227338019375210589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [12LL] [i_1])))))) ? (arr_6 [i_1] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1]))))))))), (((((/* implicit */_Bool) ((short) (unsigned char)66))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32319))) : (min((4925194892184651598ULL), (((/* implicit */unsigned long long int) (short)-2825))))))));
        }
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 1998565305236530139LL)) : (1ULL))) : (max((((/* implicit */unsigned long long int) (unsigned char)233)), (5782236705895415824ULL)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)30683)) ? (arr_17 [i_1] [i_1] [i_1] [i_1]) : (var_4))))) : ((+(((/* implicit */int) var_14))))));
    }
}
