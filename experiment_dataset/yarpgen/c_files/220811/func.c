/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220811
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
    var_15 &= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) (unsigned short)43525)) % (var_0))) : ((-(((/* implicit */int) (unsigned char)56)))))), (-1)));
    var_16 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1 - 1])) | (((/* implicit */int) arr_4 [i_1 + 3]))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) min((arr_3 [i_2 + 1]), (arr_3 [i_0])))) : (((/* implicit */int) arr_3 [i_3])));
                        }
                    } 
                } 
                var_19 &= ((/* implicit */short) min((min((max((((/* implicit */unsigned long long int) (unsigned short)14633)), (13484994016736760429ULL))), (((/* implicit */unsigned long long int) arr_6 [i_1 + 3] [i_1] [(_Bool)1] [i_1] [i_1 + 3] [10])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((11) / (((/* implicit */int) (short)22639))))) ? (((((/* implicit */_Bool) 3433581847U)) ? (arr_7 [i_0] [i_0] [(_Bool)1] [i_1]) : (((/* implicit */int) (unsigned short)3304)))) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) (signed char)-108)))))));
        arr_13 [(unsigned short)2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 18)) != (arr_2 [i_4] [i_4] [(unsigned short)2])))), (((((/* implicit */unsigned long long int) -14)) & (arr_2 [i_4] [i_4] [i_4])))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) / (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) / (((/* implicit */int) arr_6 [i_4] [3U] [i_4] [3U] [i_4] [i_4])))))))));
    }
}
