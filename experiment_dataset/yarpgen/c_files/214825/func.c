/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214825
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((/* implicit */int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) var_11)))) != (((/* implicit */int) (unsigned short)27033)))))));
    var_17 = ((/* implicit */unsigned short) (-(((((_Bool) var_9)) ? (((/* implicit */unsigned int) ((int) var_8))) : (max((var_4), (((/* implicit */unsigned int) var_12))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_9 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)68)))) != (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_8 [3] [i_1] [i_1 - 1])) : (((/* implicit */int) (unsigned short)38502))))));
                        var_18 += ((/* implicit */unsigned int) arr_3 [(unsigned short)1]);
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4 - 1]))))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_1] [i_2] [11U])) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_2])))), (arr_10 [i_0] [i_1] [i_1] [i_3])))));
                            arr_13 [i_0] [i_0] [(signed char)18] [i_2] [i_0] [i_0] [i_0] = arr_6 [20U] [i_4 + 4] [i_1 - 3] [i_3];
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_6 [i_0] [i_4 + 1] [i_2] [i_1 + 1]))));
                            arr_14 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_11 [(short)11] [i_1] [i_1] [i_2] [(unsigned char)2]));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_20 += ((/* implicit */signed char) (+(max((((/* implicit */int) (unsigned char)68)), (arr_7 [i_0] [i_2] [i_3] [i_5 - 1])))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_5 - 1])), (((((/* implicit */_Bool) 1510538331)) ? (((/* implicit */unsigned long long int) -420109683)) : (15110739077297047329ULL)))))) ? ((~(var_5))) : (((/* implicit */int) max(((unsigned short)24), (((/* implicit */unsigned short) ((((/* implicit */long long int) arr_7 [16U] [i_2] [i_2] [(signed char)12])) != ((-9223372036854775807LL - 1LL)))))))))))));
                            var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) % (arr_4 [i_1 - 1] [(unsigned char)8] [i_1 - 1]))))));
                            var_23 = ((/* implicit */signed char) (+((((+(((/* implicit */int) var_14)))) % (((/* implicit */int) (signed char)-61))))));
                        }
                    }
                    arr_17 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_2])) ? (arr_4 [(unsigned short)20] [i_1] [i_2]) : (((/* implicit */int) arr_0 [(unsigned char)1])))))) ? (((/* implicit */long long int) arr_2 [i_0])) : (((long long int) arr_2 [i_2]))));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(arr_5 [(signed char)18] [(signed char)18] [i_2]))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned int) var_14)), (var_1))), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_11))));
}
