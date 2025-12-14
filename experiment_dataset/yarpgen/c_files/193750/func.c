/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193750
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)59053))));
                        arr_11 [i_0] [i_3] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) max((536870908U), (((/* implicit */unsigned int) (unsigned char)45))));
                        arr_12 [i_0] [i_0] [i_3] [(short)1] [(signed char)0] = ((/* implicit */signed char) ((((unsigned int) ((16301116897568264375ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5154)))))) + (max((((/* implicit */unsigned int) ((short) arr_1 [i_0 - 2]))), (((var_6) >> (((/* implicit */int) (unsigned char)7))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (-300939087)));
                        arr_16 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)-2341)) : (((/* implicit */int) var_12))));
                        var_17 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3354523571U)))))));
                        arr_17 [i_4] [i_2] [i_1] [(short)20] = ((/* implicit */signed char) arr_2 [i_1 + 1]);
                        var_18 = ((((/* implicit */int) arr_6 [i_0 + 1])) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (arr_9 [i_0] [i_1 - 1] [i_2] [i_4])))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [17ULL]))));
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0 + 1]))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((arr_4 [i_5]) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_11)))))));
                    }
                    arr_20 [i_0 + 1] [i_0] [i_0 + 1] [i_2] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) (unsigned char)73)), (1803875244U))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_1)));
    var_23 = (+(((unsigned long long int) 1275371174064566937ULL)));
}
