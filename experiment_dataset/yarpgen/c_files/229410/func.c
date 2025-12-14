/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229410
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = min((((484793366714429053ULL) / (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11252)) | (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) arr_2 [i_0]);
                    var_14 = (signed char)33;
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))), (((16808759503482281596ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34171)))))));
                        arr_13 [i_1 - 2] [i_2] [i_1] = ((/* implicit */long long int) (_Bool)1);
                    }
                    arr_14 [i_1 + 1] [i_1] = 16808759503482281596ULL;
                    arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) 4294967295U);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        arr_20 [(unsigned char)8] &= ((/* implicit */long long int) min((arr_16 [i_4 + 1]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [(unsigned short)2] [(unsigned short)2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (unsigned char)211)))))));
        arr_21 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((16808759503482281568ULL), (16808759503482281560ULL)))) ? (((4797370773619567113ULL) << (((13649373300089984502ULL) - (13649373300089984472ULL))))) : (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4 + 1]))));
    }
}
