/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241600
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
    var_16 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (short)8351)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) | (min(((+(1731742922))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) max(((short)-8358), ((short)-8)))))));
                    var_19 = (~((-(5054459428755075736LL))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_4 [10U])) < (((/* implicit */int) (((_Bool)1) && (arr_5 [i_1])))))));
        arr_13 [i_1] [i_1] = max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (short)8350)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))), (((long long int) (short)-1)));
        var_21 = ((/* implicit */signed char) ((long long int) max((((/* implicit */short) (unsigned char)49)), ((short)-8357))));
    }
    for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
    {
        var_22 = ((/* implicit */long long int) ((unsigned long long int) max((arr_11 [i_4 - 3] [i_4] [i_4 - 3]), (((/* implicit */unsigned short) arr_15 [i_4] [i_4 - 1])))));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) 134217727ULL))));
    }
}
