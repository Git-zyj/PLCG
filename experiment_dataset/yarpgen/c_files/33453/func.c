/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33453
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
    var_20 = ((/* implicit */short) min((2093284406947383238ULL), (15002973208408307594ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_1 [i_0 - 1] [i_0])))), (((/* implicit */int) (signed char)-59))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) var_6)), ((-(var_12))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        arr_4 [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)29049)) : (((/* implicit */int) (unsigned char)69))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                        arr_12 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 - 1] [i_1 - 1]))))), (min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(_Bool)1] [i_3])), (((unsigned int) (signed char)-59))))));
                        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8974316094787555345LL))))), (((unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) (unsigned short)24356))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-17362)))) && ((!(var_17)))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_10))))) || (((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1 - 2] [i_0 - 2]))));
                var_25 = ((/* implicit */_Bool) min(((((+(((/* implicit */int) arr_13 [i_1])))) << (((((/* implicit */int) arr_8 [i_0] [(unsigned char)2] [i_0] [i_0])) - (56158))))), (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_0 - 1] [i_1 - 1])))));
            }
        }
        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
        {
            arr_17 [i_0] = max((((unsigned long long int) var_19)), (((11366218326064566935ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24365))))));
            var_26 *= ((/* implicit */unsigned short) arr_15 [16U] [(short)0] [i_5]);
            arr_18 [i_5] = ((/* implicit */unsigned short) max((7080525747644984680ULL), (((/* implicit */unsigned long long int) (short)17819))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_5])) || (((/* implicit */_Bool) var_8)))), (arr_13 [10U]))) ? (((/* implicit */int) arr_7 [(signed char)7])) : ((-(((/* implicit */int) arr_13 [i_0 - 2]))))));
        }
        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
        {
            arr_22 [17ULL] [17ULL] = ((/* implicit */unsigned short) var_15);
            var_27 -= ((/* implicit */unsigned short) ((((((unsigned long long int) arr_20 [i_0] [i_6])) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_6] [i_6] [i_6])), (arr_15 [i_0] [6ULL] [i_6])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)35)) <= (((/* implicit */int) arr_8 [i_0 - 2] [(_Bool)1] [i_6] [i_6 - 2]))))) : (((/* implicit */int) ((1799061515) > (((/* implicit */int) arr_10 [i_0] [(unsigned char)9] [i_0] [i_0])))))));
        }
    }
    for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) var_10);
        arr_28 [i_7] = ((/* implicit */unsigned char) (signed char)-125);
        var_28 &= ((/* implicit */_Bool) var_10);
    }
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */_Bool) (unsigned short)48970)) || (((/* implicit */_Bool) 11366218326064566935ULL))))));
        arr_31 [i_8] = ((/* implicit */unsigned short) var_0);
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 10086351897213347069ULL)) ? (((/* implicit */unsigned long long int) -7334838562439501781LL)) : (var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_30 [i_8])))))), (((/* implicit */unsigned long long int) min(((+(var_1))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)143)), ((unsigned short)65535))))))))))));
    }
}
