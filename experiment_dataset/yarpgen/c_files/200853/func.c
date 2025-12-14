/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200853
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 11089572605218515843ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)27483))) % (var_6)))) - ((+(11089572605218515843ULL))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(7357171468491035772ULL)))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (265805902238354241ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 7221463604131578037ULL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (arr_3 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) min((var_9), ((_Bool)1)))))))));
                var_16 = ((/* implicit */int) min(((((-(7357171468491035772ULL))) - (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [(_Bool)1] [i_0])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [9ULL])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)6963))))) / ((((_Bool)1) ? (((/* implicit */int) (unsigned short)58573)) : (((/* implicit */int) min((((/* implicit */short) var_7)), ((short)27483))))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (var_13)))) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) arr_0 [i_2] [i_0])))))))));
                }
            }
        } 
    } 
    var_19 = var_13;
}
