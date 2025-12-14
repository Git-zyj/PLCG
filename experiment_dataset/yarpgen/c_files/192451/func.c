/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192451
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((/* implicit */int) ((arr_0 [i_0] [(short)8]) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))) ^ (((arr_2 [(_Bool)1]) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 3] [i_0])) : (((/* implicit */int) (short)7365)))))), ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(15032385536LL)))) ? ((-(((/* implicit */int) min(((unsigned short)44955), ((unsigned short)20584)))))) : ((+(((((/* implicit */_Bool) 2409968661283463743LL)) ? (((/* implicit */int) (unsigned short)44955)) : (((/* implicit */int) (_Bool)1))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_2 [i_0])), (var_6))), (max(((unsigned short)46363), ((unsigned short)0)))))) ? (min((((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))));
                    var_21 = ((/* implicit */unsigned char) arr_7 [(unsigned short)0] [(unsigned short)0] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (3458764513820540928LL))))) - (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_0] [i_0]) : (arr_11 [i_0] [i_0])))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (((~(1758864391900721269LL))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_16)))))))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_9 [i_0] [i_0] [i_4]))))) ? (((((/* implicit */_Bool) max(((unsigned short)0), ((unsigned short)61240)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)17), (((/* implicit */unsigned short) arr_1 [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (822117847823811349LL))))) : (var_5)));
                                var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4] [i_2] [i_1])) << (((((/* implicit */int) max((var_16), (((/* implicit */unsigned short) arr_7 [i_3] [i_2] [i_0]))))) - (12689)))))), (((long long int) arr_4 [i_0] [i_0 + 1] [i_1 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) >= (4019249212444322707LL))))));
        var_26 = ((/* implicit */unsigned int) arr_7 [i_0] [i_0 - 1] [9LL]);
    }
    var_27 = ((/* implicit */long long int) ((unsigned short) ((max((((/* implicit */long long int) var_13)), (var_15))) - (var_15))));
}
