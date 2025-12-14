/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44831
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)44)) <= (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) (short)-15534)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))))))), (((((var_2) <= (((/* implicit */unsigned long long int) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) >= (((/* implicit */int) (short)15534)))))) : ((+(var_0)))))));
                    var_20 *= ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)64)), ((short)-15541)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_13 [i_3] [i_3] [i_1 + 1] [i_3] [i_0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15534))));
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_11))))) * (((((/* implicit */_Bool) 1692693791U)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2])))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) % (arr_7 [i_3] [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)1] [i_1 - 3] [i_1 + 1])))))))))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))) << ((((~(((/* implicit */int) (short)-2557)))) - (2539)))));
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(short)0] [i_1 - 3] [i_1 + 2])) / (((/* implicit */int) (short)2583))))) ? (min((((/* implicit */unsigned long long int) (short)-15534)), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2556)) ? (arr_14 [i_0] [i_1 - 3] [i_0] [i_0]) : (var_4)))))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (max((var_12), (((/* implicit */unsigned long long int) (short)-14023)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)150)), (arr_1 [i_0]))))))));
                    var_25 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) min(((short)-2561), ((short)14909)))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)480))))) == (12927807837876311368ULL))))));
                    var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 555679012U))))), (((((/* implicit */_Bool) 789802847U)) ? (4294967286U) : (var_9)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)31374)), (arr_14 [i_0] [i_0] [i_1 - 2] [i_4])))) ? (((var_6) | (((/* implicit */unsigned long long int) arr_10 [i_0] [i_4] [i_1] [i_0])))) : ((~(var_7))))) : (((/* implicit */unsigned long long int) min(((~(var_4))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)15537))))))))));
                    arr_17 [i_0] [i_1] = ((max((((13836827858824379278ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)15537))))))) << (((max((((var_6) << (((arr_10 [i_0] [i_1 - 1] [i_1] [i_4]) - (75627592U))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))) - (10853237110905241578ULL))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    var_27 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) (short)2542)) : (((/* implicit */int) (short)31377)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    arr_22 [i_0] [i_0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((1171901465U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)15533))))))));
                }
                var_28 -= ((/* implicit */unsigned long long int) (+(1692693791U)));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_6)) ? (15402417090605379482ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))))) / (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) (unsigned char)156))))))) << ((((~(max((((/* implicit */unsigned int) (unsigned char)0)), (3123065851U))))) - (1171901437U)))));
    var_30 = ((/* implicit */short) (~(max((((((/* implicit */unsigned long long int) var_0)) & (13129947085522223494ULL))), (((/* implicit */unsigned long long int) max((4250442953U), (((/* implicit */unsigned int) (unsigned char)150)))))))));
}
