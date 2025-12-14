/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48084
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
    var_14 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-38))));
    var_15 = var_13;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) + (0))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))) - ((-(((/* implicit */int) arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned short)5324);
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)42506)) ^ (((/* implicit */int) (short)14824))));
    }
    for (short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (unsigned int i_4 = 3; i_4 < 13; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_4 - 2]))));
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) ((((/* implicit */int) arr_15 [i_2 - 3] [i_4 - 1])) != (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 3]))))) << (((((/* implicit */int) (signed char)23)) / (2147483647)))))));
                    arr_17 [i_2] [0LL] [i_2] [i_2 + 2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 941816256)), ((-((~(2163758676483134822LL)))))));
                }
            } 
        } 
        arr_18 [i_2] = ((/* implicit */unsigned long long int) (unsigned short)112);
        arr_19 [i_2 - 1] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((-941816244) >= (((/* implicit */int) (unsigned short)25875))))))), (((/* implicit */int) arr_1 [i_2 - 3]))));
    }
}
