/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247675
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-(min((min((((/* implicit */long long int) var_5)), (-1746510303827589463LL))), (((((/* implicit */_Bool) -4957294929354300733LL)) ? (-4957294929354300740LL) : (((/* implicit */long long int) 528168513U)))))))))));
    var_12 *= ((((unsigned long long int) var_1)) ^ (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (arr_0 [19ULL]))))));
        var_15 = ((/* implicit */unsigned int) ((long long int) arr_0 [i_0 - 1]));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */int) (short)-19885)) + (2147483647))) << (((((arr_4 [i_1]) << (((arr_0 [i_1]) - (10728104625577077242ULL))))) - (14516779938754854912ULL)))))), (((((/* implicit */_Bool) arr_1 [21LL])) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)17164), ((short)17165))))) : (arr_3 [4U])))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((arr_5 [i_2]), (arr_2 [i_1])));
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) -4957294929354300752LL)))));
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (9071677713825256363ULL))), (((/* implicit */unsigned long long int) 5995258140015615756LL)))) != (((/* implicit */unsigned long long int) arr_7 [(unsigned char)8])))))));
            arr_14 [2U] = 0ULL;
            var_18 = ((/* implicit */long long int) arr_5 [i_1]);
            /* LoopNest 3 */
            for (unsigned short i_4 = 4; i_4 < 13; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((arr_16 [i_1] [i_5 - 2] [i_1] [i_1]), (((/* implicit */unsigned long long int) (-(((arr_19 [i_1] [i_1]) / (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1])))))))));
                            var_20 = ((/* implicit */unsigned short) arr_7 [i_1]);
                            arr_23 [i_4] [i_3] [i_4] = ((/* implicit */short) (-(-4957294929354300740LL)));
                            arr_24 [i_1] [i_1] [i_1] [i_4] [i_4] [i_1] [0U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (min((min((arr_2 [7LL]), (var_1))), (((/* implicit */unsigned long long int) (unsigned short)11474)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(arr_15 [i_4] [(unsigned short)12]))))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((arr_11 [9LL] [9LL] [i_3]) << (((min((((/* implicit */long long int) ((unsigned short) var_4))), (((((/* implicit */_Bool) (short)17164)) ? (arr_3 [i_4]) : (-4957294929354300742LL))))) - (65LL))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_6))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) min((arr_5 [9U]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)17165)), (-5995258140015615767LL))))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)17173)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63147)) ? (15270229132104852807ULL) : (((/* implicit */unsigned long long int) 0U)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (short)32767))))))));
        }
        var_24 = (~(arr_15 [i_1] [i_1]));
    }
}
