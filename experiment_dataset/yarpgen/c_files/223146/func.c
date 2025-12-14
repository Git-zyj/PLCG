/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223146
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
    var_16 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) min((min(((~(((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-14)))))), (((/* implicit */int) ((((((/* implicit */int) var_3)) & (var_10))) < (((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_1] [i_2])))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned int) ((((arr_0 [i_1]) ? (arr_3 [i_0]) : (((/* implicit */int) var_11)))) * (((((/* implicit */int) arr_2 [i_0] [i_1])) / (var_1)))));
                    var_17 += ((/* implicit */short) arr_0 [i_2]);
                    var_18 = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [(unsigned char)11])), (((var_10) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])))))) < (((/* implicit */int) max((max((((/* implicit */unsigned short) (short)9728)), ((unsigned short)65520))), (max(((unsigned short)16), (((/* implicit */unsigned short) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_19 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [2])) : (((/* implicit */int) ((unsigned char) var_10))))));
                        var_20 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_0 [i_2]))))));
                        arr_14 [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_0] [(short)1] [i_0] [(short)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((arr_12 [i_0] [i_0] [(unsigned short)11] [i_3]), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) var_12)))) && ((!(((/* implicit */_Bool) var_1)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_0] [(signed char)11] [(signed char)11])) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)1] [i_0])) : (((/* implicit */int) (signed char)-85))))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4 + 2])) || (((/* implicit */_Bool) arr_2 [i_3] [i_4 - 2])))))));
                            arr_19 [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_17 [(_Bool)1] [(_Bool)1] [i_4 + 1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */long long int) min((((/* implicit */short) arr_10 [i_2] [i_4 + 2] [i_2] [i_4] [9])), (var_14))))));
                        }
                        for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((int) var_15)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_3] [(unsigned char)4])) ? (((/* implicit */int) arr_18 [i_2] [i_2])) : (((/* implicit */int) var_14))))) ? (max((-849405631), (arr_3 [i_2]))) : ((-(((/* implicit */int) (unsigned char)28))))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45192))) / (((unsigned int) (unsigned short)15))));
                            arr_23 [i_2] = ((/* implicit */signed char) min(((unsigned short)65531), (((/* implicit */unsigned short) (signed char)46))));
                        }
                        arr_24 [(unsigned char)6] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((-212462794) != (((/* implicit */int) (unsigned short)65535))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) (~(var_6)));
    var_25 = ((/* implicit */signed char) var_2);
}
