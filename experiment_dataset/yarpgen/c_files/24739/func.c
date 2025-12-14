/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24739
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((var_3) - (var_3))) % (max((((/* implicit */long long int) var_7)), (-5359501668491886395LL))))) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned char) var_8)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((4882277164594145516ULL), (((/* implicit */unsigned long long int) 6431394809732765967LL))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) var_9))), (((((/* implicit */_Bool) var_3)) ? (6431394809732765967LL) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_1 + 1]))))));
                            arr_13 [i_0] [i_1] [(unsigned char)1] [i_3] = ((/* implicit */short) min((((/* implicit */int) ((short) var_9))), (((((/* implicit */int) (short)22083)) ^ (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_1 - 1]))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(7303000675747838892LL))) | (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (var_2)))))) ? (max((((/* implicit */long long int) var_0)), (-7303000675747838869LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_0))))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((max((13564466909115406128ULL), (((/* implicit */unsigned long long int) (short)7502)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6431394809732765967LL)) ? (7721660228749373026LL) : (((/* implicit */long long int) ((/* implicit */int) (short)25082)))))) ? (((((/* implicit */int) var_6)) << (((arr_16 [i_0] [(unsigned char)2] [i_0]) - (91845902780261696ULL))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1 + 1]))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (((var_0) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)28041))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((long long int) arr_16 [i_0] [i_0] [i_5])), ((~((~(var_11))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_4] [i_4] [(short)4] = ((/* implicit */unsigned int) (-(min((var_11), (((/* implicit */long long int) var_4))))));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((_Bool) max((8747893177760911814LL), (((/* implicit */long long int) (_Bool)1))))))));
                            arr_25 [i_0] [i_1] [i_4] [i_4] [i_6] [i_1] [i_6] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 13564466909115406100ULL)) || (((/* implicit */_Bool) var_3)))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((4294967281U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1 - 2] [16LL]))))) ? (min((min((arr_15 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)32799)))), (((/* implicit */unsigned long long int) ((arr_22 [i_4] [i_4] [i_4] [i_1 - 2] [i_4]) >= (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((long long int) var_8)))));
                        }
                        for (long long int i_7 = 4; i_7 < 17; i_7 += 4) 
                        {
                            arr_30 [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != ((-9223372036854775807LL - 1LL)))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((4294967286U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((arr_2 [i_4 + 2] [i_1 + 1]) & (((/* implicit */long long int) var_4)))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)49987)), (586909982U)))) ? (((long long int) var_7)) : (((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        }
                    }
                    for (unsigned char i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        arr_33 [i_4] [i_4] [i_4] [i_8] = ((/* implicit */_Bool) max((((arr_22 [i_4] [i_1] [i_4] [i_4 - 1] [i_4]) - (arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */long long int) ((_Bool) 2964325697U)))));
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (var_11))))))) && (((/* implicit */_Bool) ((var_0) ? (586909982U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                    }
                }
            }
        } 
    } 
}
