/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221024
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) >= (((/* implicit */int) arr_1 [i_0] [8ULL]))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(short)3] [i_0])) || (((/* implicit */_Bool) (signed char)118)))))) + (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (4ULL)))))));
        var_17 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) min((((short) var_6)), (((/* implicit */short) arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [6LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_4))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)2))))) ? (((/* implicit */long long int) (~(var_11)))) : ((+(var_10)))))) : (((((/* implicit */_Bool) (~(4294967285U)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (17ULL))) : (18446744073709551598ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [8LL] [i_0] = min((17ULL), (((/* implicit */unsigned long long int) var_9)));
                                var_18 = ((long long int) min((max((((/* implicit */unsigned long long int) var_13)), (18446744073709551590ULL))), (((/* implicit */unsigned long long int) ((6723816187694128539ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))));
                                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) 2582941636572774565LL))) ? (min((((/* implicit */long long int) var_9)), (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_4] [i_3])) % (arr_5 [i_4])))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 5290292547884888569LL))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) - (15353306853716818862ULL))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [8U] [i_1] [i_2] [i_1] [8LL] [i_2] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))), ((+(373810195U)))))) > (min((13ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-120)))))))));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((arr_14 [i_5] [i_5]) + (((((/* implicit */_Bool) (~(2147483647)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (signed char)38)))) : ((-(((/* implicit */int) (unsigned char)120))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(max((min((((/* implicit */unsigned long long int) var_4)), (4ULL))), (((/* implicit */unsigned long long int) max((373204773135917142LL), (((/* implicit */long long int) arr_15 [i_5]))))))))))));
        arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (min(((+(var_5))), (((/* implicit */unsigned int) arr_15 [i_5])))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((((/* implicit */int) arr_15 [i_5])) << (((/* implicit */int) arr_15 [i_5])))))))));
    }
    var_23 = ((/* implicit */_Bool) var_7);
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) var_11))));
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (short)-30642)))))));
    var_26 = ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -184200691)) ? (((/* implicit */unsigned long long int) var_13)) : (6443581720621194184ULL))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (max((4ULL), (4503599627370492ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) < (-709659843))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))))));
}
