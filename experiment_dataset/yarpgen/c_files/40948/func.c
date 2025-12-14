/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40948
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (min((((/* implicit */long long int) max((var_3), (((int) 1))))), (var_2)))));
        var_13 = ((/* implicit */signed char) min((9815029166217561680ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    }
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) var_1)), (((unsigned int) ((unsigned char) -6912152209139709533LL)))));
    /* LoopSeq 1 */
    for (int i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_15 = ((/* implicit */short) var_5);
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((int) var_2))), (min((max((4173672467950888342LL), (var_10))), (((/* implicit */long long int) ((_Bool) -742792825))))))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((unsigned int) min((min((((/* implicit */int) var_6)), (var_3))), (((/* implicit */int) ((unsigned char) 268435455U))))))));
                    }
                } 
            } 
        }
        arr_19 [i_1] = ((/* implicit */unsigned int) var_1);
        arr_20 [i_1 - 2] = ((/* implicit */int) 3440825681U);
        arr_21 [i_1 + 2] = ((/* implicit */short) min((max((((/* implicit */long long int) 268435455U)), (max((((/* implicit */long long int) (signed char)101)), (var_9))))), (((/* implicit */long long int) ((unsigned int) (signed char)126)))));
    }
}
