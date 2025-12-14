/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240711
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
    var_14 = ((/* implicit */_Bool) max((var_14), (var_2)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(8886911617795559821ULL))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((short) max((min(((short)-1), (arr_0 [i_0]))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)23770)) && (((/* implicit */_Bool) (unsigned short)41756)))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)57)) & (((/* implicit */int) (unsigned short)41766))))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)57))));
                    var_18 &= ((/* implicit */short) (unsigned char)75);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)75)) ? (10176889957737661050ULL) : (arr_4 [i_1] [i_2])))))) ? (4486542461277295359ULL) : (arr_3 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    }
}
