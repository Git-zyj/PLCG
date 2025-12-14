/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53655
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    var_15 = ((max(((~(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27)) << (((var_1) - (4193262814457690338LL)))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0] [i_1])), (var_11)))) ? (6533081604772827711LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) arr_6 [i_0])) + (arr_1 [i_4]))))));
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_2 - 1] [i_0 + 2])), (arr_5 [i_0] [i_2])))) ? (((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28))) : (2101221064559094574ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_1 [3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                                var_18 = ((/* implicit */unsigned int) arr_10 [i_4] [(unsigned short)5]);
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 3] [i_0 - 1] [i_0] [i_0])))))) - (((((((/* implicit */int) (short)-16)) <= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((arr_1 [i_0]), (((unsigned long long int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [(signed char)11])) != (arr_9 [i_0])))))))));
                    var_21 += ((/* implicit */unsigned int) ((((((int) var_8)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_0 - 1] [i_2 + 4])) >> (((((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 1])) - (30792)))))));
                }
                for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    var_22 = ((/* implicit */signed char) (((~(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) | (arr_0 [i_5] [i_5]))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))) : (((/* implicit */int) min((var_13), (((/* implicit */unsigned short) arr_3 [i_1] [i_0]))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (unsigned short)65535))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (11860495565838747620ULL))) : (((((/* implicit */_Bool) (signed char)108)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 + 1] [i_0 + 2])))))));
                        var_24 = ((/* implicit */long long int) arr_18 [i_0] [13U] [13U] [i_5 + 3] [(_Bool)1] [i_5]);
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) (short)-38))) == ((~(((((/* implicit */_Bool) var_11)) ? (arr_9 [i_5]) : (((/* implicit */unsigned long long int) arr_19 [i_6] [i_0] [i_5] [(unsigned short)3] [11ULL] [i_0]))))))));
                        var_26 = ((/* implicit */signed char) arr_14 [i_0]);
                    }
                    for (short i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((short) min(((-(((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0])), (var_13)))))));
                        var_28 = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [1LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) & (arr_20 [i_8] [i_7] [i_5] [(short)10])))) : (max((((/* implicit */long long int) var_6)), (var_11)))))) : (((16345523009150457056ULL) >> (((/* implicit */int) (short)37))))));
                            var_30 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_7 - 1])) ? (1LL) : (arr_6 [i_7 - 1]))) / (arr_19 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5792712282320606168LL)), (2101221064559094582ULL))))));
}
