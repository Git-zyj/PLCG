/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225899
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
    var_18 = ((/* implicit */long long int) var_15);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) (+(6794951667038356365LL)));
        var_20 = ((/* implicit */unsigned char) -1274239574698998106LL);
    }
    for (long long int i_1 = 4; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)-109)), ((+((~(9618916565985199808ULL)))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((_Bool) 2572300535117013827LL))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1 - 4] [i_1 + 1]))) ? (((/* implicit */int) (unsigned short)0)) : ((+(((/* implicit */int) (unsigned char)39))))));
    }
    for (long long int i_2 = 4; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_6 [i_2 - 2] = ((/* implicit */signed char) (((~(arr_1 [i_2 - 3]))) <= (max((((/* implicit */long long int) arr_3 [i_2])), (((((/* implicit */_Bool) (unsigned short)11922)) ? (((/* implicit */long long int) var_10)) : (var_5)))))));
        var_24 = ((/* implicit */int) max(((short)-32765), ((short)-13766)));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32435))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_3))))) : (arr_0 [i_3] [16])))), (((unsigned long long int) max((((/* implicit */long long int) var_7)), (0LL))))));
                var_26 = ((/* implicit */short) ((unsigned long long int) (unsigned short)65515));
            }
        } 
    } 
}
