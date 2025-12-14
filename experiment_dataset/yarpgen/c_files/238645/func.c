/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238645
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) + (2147483647))) << (((((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) + (46))) - (2)))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))), (((arr_1 [i_0]) << ((((~(((/* implicit */int) arr_0 [i_0])))) - (24)))))));
        var_18 = ((/* implicit */unsigned char) (-((+(9789021933585106343ULL)))));
        var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((long long int) var_11))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) -1203476541)), (arr_7 [i_0])));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) max((max((arr_4 [14] [(short)0] [i_2]), (arr_4 [i_0] [(_Bool)1] [i_0]))), ((-(arr_4 [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) (short)7279)))))));
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
}
