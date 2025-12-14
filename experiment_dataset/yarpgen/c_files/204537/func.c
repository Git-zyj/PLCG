/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204537
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((3511905601U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) ((((/* implicit */int) (short)7676)) >= (((/* implicit */int) (short)-7670)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */_Bool) -286867428);
                        arr_12 [i_3] [i_1] [i_1] [i_3] [i_2] = ((/* implicit */short) ((((776497588U) | (((((/* implicit */_Bool) (short)-7677)) ? (4294967295U) : (2473094326U))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 9485632023517657236ULL)) ? (((/* implicit */int) (short)-7670)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)7696)) ? (-1147005349) : (((/* implicit */int) (unsigned char)50)))))))));
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))))) : (-7303473845369373713LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9ULL))))) != ((+(((/* implicit */int) (short)7676)))))))))))));
                    }
                }
            } 
        } 
    }
    var_13 += ((/* implicit */unsigned int) 0ULL);
}
