/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221363
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
    var_17 = ((/* implicit */short) 2ULL);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [23ULL] [i_3]))) % (((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)7853)), (230708308U))))));
                        arr_13 [i_0] = ((/* implicit */unsigned short) max((arr_0 [i_1] [i_3]), (((/* implicit */short) min(((_Bool)1), ((_Bool)1))))));
                        var_19 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)24107))))))) : ((+(((/* implicit */int) (short)25963))))));
        arr_14 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 8656784812455241094ULL))));
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-121)), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1]))) : (7152250106781376860LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_4] [20])) << (((((/* implicit */int) (signed char)127)) - (117)))))) : (max((435481258U), (((/* implicit */unsigned int) arr_12 [20ULL]))))))));
    }
}
