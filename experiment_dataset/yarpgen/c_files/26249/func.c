/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26249
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])) << ((((+(13988301533724607738ULL))) - (13988301533724607719ULL)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63299))) : ((-(4458442539984943901ULL))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_8 [i_1] [i_0] [(unsigned short)0] = ((/* implicit */signed char) (-((~(8829705693361460165LL)))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-9);
                        arr_10 [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_0 [i_0 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((-1713017565), (((/* implicit */int) (short)32767))))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_7))))))), ((+(((/* implicit */int) var_3))))));
    }
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)125)), (8829705693361460165LL)))) ? (((/* implicit */int) (signed char)4)) : ((-((+(((/* implicit */int) var_3))))))));
}
