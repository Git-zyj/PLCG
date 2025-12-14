/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204844
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
    var_18 = ((/* implicit */signed char) 1ULL);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)17685)) | (((/* implicit */int) arr_6 [i_0]))))) ? ((+(5ULL))) : (((/* implicit */unsigned long long int) (+(var_5))))))) ? (arr_7 [i_0] [0ULL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_8 [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned char) (signed char)92))))) ? (((((/* implicit */_Bool) 3155024856U)) ? (arr_7 [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_4])))))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_14 [i_0] [i_0])), ((short)-9637)))) == (((/* implicit */int) var_0)))))));
                                arr_16 [11ULL] [i_1] [i_1] [(_Bool)1] [11ULL] = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0 + 2])) * (((/* implicit */int) arr_4 [i_0 + 2])))) * (((((/* implicit */int) arr_4 [i_0 - 2])) * (((/* implicit */int) arr_4 [i_0 - 2]))))));
                                var_20 = ((/* implicit */long long int) var_12);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_0] [(short)7] [(unsigned char)7] = ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-2)), ((unsigned char)150)));
                        var_21 = ((((/* implicit */_Bool) (-(max((var_10), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_2]))))))) ? (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-103))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)125))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0] [i_0 - 2] [i_0]))) : ((+(arr_11 [i_0] [i_0] [(short)12] [i_5] [i_5]))))));
                        arr_20 [i_5] [i_2] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)215)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10954))));
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_2 [i_0 + 1])))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)127)) ? (arr_8 [i_2]) : (var_5))) * (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1])))));
                    }
                }
            } 
        } 
    } 
}
