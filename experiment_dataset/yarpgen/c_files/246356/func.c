/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246356
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((arr_1 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) < (arr_1 [i_0])))))))));
        var_20 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) 4294967295U)))));
        var_21 = ((arr_0 [i_0] [i_0]) + (4472564954696617848ULL));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) max((arr_3 [i_1] [i_1]), (var_9)))) > (-8892112896199782197LL))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_1] [i_1]))) && (((/* implicit */_Bool) min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) arr_9 [i_1] [i_1]);
                        var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((18446744073709551615ULL), (arr_8 [i_1])))))) | (max((8892112896199782197LL), (((/* implicit */long long int) 255452435))))));
                        arr_19 [i_1] [i_1] = ((/* implicit */signed char) min((((((unsigned long long int) arr_13 [i_1] [i_2] [i_3] [i_4])) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [i_4] [i_2])))))), (((/* implicit */unsigned long long int) ((short) ((signed char) -255452454))))));
                        var_25 &= ((/* implicit */short) max((((((/* implicit */_Bool) 6174736059376252988ULL)) && (((/* implicit */_Bool) max(((short)25346), ((short)15181)))))), (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_4 [i_3])))) && (((((/* implicit */_Bool) (short)25346)) || (((/* implicit */_Bool) arr_11 [i_4] [i_3] [(short)15] [i_1]))))))));
                    }
                } 
            } 
        } 
        arr_20 [3LL] [i_1] = arr_3 [i_1] [i_1];
    }
    var_26 &= ((/* implicit */short) -1524186963);
    var_27 = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) / (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_2))))))), (((max((var_19), (((/* implicit */unsigned long long int) (signed char)31)))) ^ (((/* implicit */unsigned long long int) ((long long int) 0)))))));
}
