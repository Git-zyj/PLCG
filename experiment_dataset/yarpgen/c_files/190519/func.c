/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190519
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
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_20 -= ((/* implicit */short) (+(min((min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_15))), (((/* implicit */unsigned long long int) max(((unsigned short)28753), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))))));
        arr_4 [(signed char)14] |= ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0])), (var_11)))) & (((/* implicit */int) ((short) 0U)))));
    }
    for (short i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) var_16);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 0U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_19) > (arr_8 [i_1] [i_2] [i_3]))))) : (((((/* implicit */_Bool) max((var_16), (((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_4]))))) ? (arr_14 [i_1 + 2] [i_1] [i_2 - 2]) : (((/* implicit */unsigned long long int) var_3))))));
                        var_22 = ((/* implicit */short) max((((/* implicit */long long int) (+(((/* implicit */int) (short)7371))))), (-2153557327682479720LL)));
                        var_23 = ((/* implicit */_Bool) 67108863);
                    }
                } 
            } 
        } 
    }
    var_24 |= ((((((/* implicit */_Bool) (unsigned short)36773)) ? (4294967295U) : (4294967272U))) << (((4294967289U) - (4294967267U))));
    var_25 = ((/* implicit */signed char) ((unsigned short) var_18));
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) var_16)), (min((((/* implicit */long long int) var_8)), (var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 5408433583225248795LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6526))) : (3217584564U))))));
}
