/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245920
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
    var_17 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) var_6);
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 1073610752U))))) + (((/* implicit */int) (signed char)122)))) >= (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)-89)))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)9))))) ? ((-(arr_7 [i_3] [i_3] [i_3 + 1] [i_3]))) : (((((/* implicit */int) (short)9)) << (((6138440277738855478LL) - (6138440277738855474LL)))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3]))) < ((((_Bool)1) ? (((/* implicit */long long int) ((var_11) / (((/* implicit */int) (short)-9))))) : (5028031430875759748LL)))));
                    }
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) & (min((((((/* implicit */int) var_3)) - (((/* implicit */int) (short)1674)))), (((/* implicit */int) var_8))))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) + (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), ((short)18091))))) + (((arr_4 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */int) min(((-(2873231904001169569ULL))), (((/* implicit */unsigned long long int) (signed char)52))));
                    }
                    var_22 = ((/* implicit */long long int) min((arr_3 [i_0] [i_0]), (((/* implicit */short) ((unsigned char) ((((/* implicit */int) (short)32751)) | (((/* implicit */int) (signed char)55))))))));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_6);
                    var_23 = ((signed char) max((((/* implicit */unsigned long long int) (signed char)-31)), (12283512066395889326ULL)));
                }
                var_24 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))), (((/* implicit */unsigned long long int) 1920124064U))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % ((+(3123258470676215555ULL))))))))));
    var_26 *= ((/* implicit */unsigned int) var_8);
}
