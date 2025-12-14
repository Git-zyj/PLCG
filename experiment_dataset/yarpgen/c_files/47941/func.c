/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47941
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [(signed char)21] [13U] [(_Bool)1] [i_3]))))), (((((/* implicit */_Bool) ((unsigned long long int) 4701988193832237399ULL))) ? (((4701988193832237415ULL) / (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((/* implicit */unsigned long long int) (-(arr_6 [i_2] [i_1] [i_2] [i_2]))))))));
                        var_14 = ((/* implicit */unsigned long long int) (+(((long long int) ((arr_4 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_1 - 1] [i_2] [8U]))) % (-7635697920850064359LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (13744755879877314201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_0 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_1 - 1] [16LL] [16U] [(_Bool)1] [i_5]), (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_2] [i_4]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) : (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4701988193832237404ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (3799935667523717874LL))))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(2839756648110916970ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_2] [i_1] [i_4])) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (_Bool)1))))))))) : (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (15606987425598634645ULL))) >> (((/* implicit */int) arr_8 [i_2] [i_5])))))))));
                        }
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            var_18 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6])) && (((/* implicit */_Bool) 4701988193832237419ULL))))) : (((int) var_4))))), (((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_6] [i_0 + 1] [i_6] [i_0 + 1])) ? (4701988193832237415ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 1] [i_6 - 2])))))));
                            arr_21 [i_0] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_6 + 2])), (max((((/* implicit */unsigned int) (unsigned char)174)), (arr_17 [i_0] [i_2] [i_2] [i_4] [i_6])))))) : (13744755879877314197ULL));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_4] [i_4] [i_2] [(_Bool)1] [i_7] &= ((/* implicit */unsigned char) (((((!(var_2))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [18ULL] [18ULL] [i_0 - 1] [18ULL] [18ULL] [i_4] [i_7])))));
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */unsigned long long int) (+(arr_14 [i_1 - 1] [i_1] [(_Bool)1] [i_1] [i_1])))) : (((((/* implicit */unsigned long long int) 0LL)) / (var_12)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_28 [i_8] [i_8] [i_2] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (-(4701988193832237399ULL)))) && (((/* implicit */_Bool) var_9)))));
                            var_20 ^= ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1] [i_1] [i_1])))))));
                            var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((unsigned char) (_Bool)1)))))), (max((arr_14 [i_0] [i_1 + 1] [i_2] [i_4] [i_8]), (arr_17 [i_0 + 1] [i_4] [i_0 + 1] [i_4] [i_4])))));
                        }
                        arr_29 [i_0] [i_1 - 1] [i_2] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((3989343640U), (((/* implicit */unsigned int) arr_19 [i_0] [i_1 + 1] [i_2] [3U] [15] [(short)9] [12LL]))))) ? (arr_12 [i_4] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9884730040923706566ULL)) ? (arr_15 [i_2] [i_0] [18ULL] [i_0] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), (((arr_22 [i_1 - 1] [i_1 - 1] [i_4] [i_0 - 1] [i_0]) & (((/* implicit */long long int) var_10))))));
                        arr_30 [i_4] [i_4] [12LL] [i_4] [i_4] [i_0] = ((max((((/* implicit */long long int) arr_16 [(short)6] [i_2] [i_1 + 1] [(_Bool)1] [i_1 - 1] [i_1 + 1])), (-32LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [(_Bool)1] [i_1 - 1] [0ULL] [i_4] [i_4] [i_0 - 2])) < (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [(_Bool)1] [i_0])), (arr_9 [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned int) ((arr_19 [(unsigned char)16] [(signed char)13] [i_1] [13LL] [i_2] [i_2] [i_9]) ? (((/* implicit */int) ((((/* implicit */long long int) var_10)) != (var_0)))) : (((((/* implicit */int) arr_7 [i_9] [i_1] [i_0 + 1])) + (var_10)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) var_1))))), (((unsigned int) arr_4 [i_1]))))));
                        arr_35 [6U] [15ULL] [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) arr_22 [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] [20ULL]))), (arr_22 [i_1 - 1] [i_1 + 1] [i_9] [i_1] [i_1])));
                        var_23 ^= ((/* implicit */long long int) ((arr_0 [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_19 [i_0] [i_1 - 1] [i_1 + 1] [i_9] [i_1 + 1] [i_0 + 1] [i_2]))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */int) var_11);
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] |= ((/* implicit */long long int) (((-(((/* implicit */int) ((unsigned char) var_7))))) != (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 3601513128037976772ULL)) ? (-1189178995299054443LL) : (arr_22 [i_1 + 1] [(signed char)8] [i_2] [i_0 - 1] [(signed char)0])))))));
                    }
                    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) min((var_7), (arr_32 [i_1] [i_1] [i_1] [i_1])))), (arr_26 [i_0] [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_2]))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) & (((min((15606987425598634646ULL), (var_12))) >> (((/* implicit */int) var_5))))));
    var_27 ^= ((/* implicit */_Bool) var_6);
}
