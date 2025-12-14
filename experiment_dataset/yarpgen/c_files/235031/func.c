/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235031
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
    var_18 = ((/* implicit */unsigned long long int) (~(var_12)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_19 = var_9;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */long long int) var_10);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) var_10);
                var_22 = ((/* implicit */unsigned long long int) ((-7418854763726417476LL) >= (6540704193789913014LL)));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */int) (unsigned char)105)) << (((3246825935892786309ULL) - (3246825935892786298ULL))))) : (((/* implicit */int) arr_5 [i_0 - 1]))));
                arr_11 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((_Bool) (~(4294967295U))));
                arr_12 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_8 [i_1])) : ((+(((/* implicit */int) (unsigned short)939)))));
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    arr_21 [i_3] [21] [21] [i_5] = ((/* implicit */unsigned short) var_5);
                    var_24 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)228))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4703)) ? ((-(7418854763726417485LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
                    arr_22 [i_4] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((arr_18 [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4703)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_19 [i_3] [17] [i_5] [i_5]), ((unsigned short)60833)))) ? ((-(((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) arr_19 [i_5] [i_4] [i_3] [i_3]))))) : (max((((/* implicit */long long int) (unsigned char)19)), (-3318264084773961795LL))));
                }
            } 
        } 
    } 
}
