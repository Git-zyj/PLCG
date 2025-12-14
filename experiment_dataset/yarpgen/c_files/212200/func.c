/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212200
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (short)295))));
        var_19 = ((unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_1 [i_0])) : (-889932539582893357LL)))));
    }
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)170))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_3 - 1]))));
                        arr_15 [i_4] [i_2] [i_3 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (16196936263870211422ULL))) : (((/* implicit */unsigned long long int) ((var_7) * (((/* implicit */int) arr_7 [i_1])))))));
                    }
                    var_20 = ((/* implicit */short) arr_13 [i_1] [i_2] [i_3 - 1] [i_3]);
                    var_21 = ((/* implicit */unsigned char) ((arr_7 [i_1 + 4]) ? (((((/* implicit */int) (signed char)97)) | (1180197561))) : (max((((/* implicit */int) arr_4 [i_1 + 2])), (((((/* implicit */_Bool) 1180197561)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (unsigned char)0))))))));
                    arr_16 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned short) max(((+(((/* implicit */int) (unsigned char)227)))), (((/* implicit */int) (unsigned char)115)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned char) var_4);
}
