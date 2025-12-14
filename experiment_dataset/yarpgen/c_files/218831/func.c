/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218831
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_2))))))) >> ((((+(var_9))) - (1395947755U)))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((((/* implicit */int) (_Bool)1)) != (((((/* implicit */int) (unsigned char)100)) >> (((((/* implicit */int) (unsigned char)100)) - (70)))))))));
                    var_18 = ((/* implicit */unsigned int) 287104476244869120LL);
                    arr_11 [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_17);
    var_20 = ((/* implicit */signed char) ((5200447784267297205ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156)))));
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-94))));
}
