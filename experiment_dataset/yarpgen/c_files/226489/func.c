/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226489
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
    var_11 = ((/* implicit */_Bool) (-(var_9)));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [(_Bool)1] [i_1] [(short)0] [(unsigned char)12])))))))))))));
                        var_14 = (+(((/* implicit */int) ((arr_7 [i_0] [i_1] [i_3] [i_3]) <= (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3] [i_2 + 2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_9 [16] [18LL] [i_4 + 1] [i_4] [i_4 + 1]))));
            var_16 = min(((-((~(((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */int) arr_2 [(short)14] [(short)14])) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [3ULL] [i_4]))))))));
            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_4 - 1]))))))))));
        }
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_0]))))))))))));
    }
}
