/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50636
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) 6672870583235260563LL);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (-6672870583235260554LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-3))))) : (((((/* implicit */_Bool) (signed char)-4)) ? (-6672870583235260564LL) : (6672870583235260547LL)))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) 7751269417979071995LL);
        arr_7 [i_1] = ((/* implicit */_Bool) (signed char)90);
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) (~(-6672870583235260538LL)));
        arr_10 [5] = ((/* implicit */short) 6672870583235260547LL);
        var_13 = ((/* implicit */_Bool) (signed char)-18);
        arr_11 [7U] = ((/* implicit */short) (unsigned short)3);
    }
    var_14 = ((/* implicit */signed char) (~(1544637632721325271ULL)));
}
