/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25814
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_13))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((11760618595923828707ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned short) var_17);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)38687)))) / (((/* implicit */int) (unsigned short)38687))))) - (((unsigned long long int) ((long long int) (_Bool)0))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_10 [i_2] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)16)) * (min((((((/* implicit */_Bool) 2771889643793119339LL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (unsigned short)26851)))), (((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)38685))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                {
                    var_22 = ((long long int) 3422824554U);
                    arr_16 [i_3] [i_3] [i_2] = ((/* implicit */int) ((unsigned short) ((unsigned int) (_Bool)1)));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (short)-11608))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((long long int) ((long long int) (unsigned short)59867))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((-1585344528) & (((/* implicit */int) var_8)))));
}
