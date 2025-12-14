/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209073
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5206))) - (min((373787160177259581ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65532)))), (((((/* implicit */_Bool) (unsigned short)65532)) ? (var_3) : (((/* implicit */unsigned int) var_12)))))) : (((/* implicit */unsigned int) min((((int) 2038516955U)), (((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1139631908)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */short) var_1);
        var_17 = ((/* implicit */unsigned char) ((-1139631909) > (((/* implicit */int) arr_0 [i_0 - 3] [i_0]))));
        arr_3 [i_0] = (!(((/* implicit */_Bool) 0ULL)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = (short)(-32767 - 1);
                    arr_10 [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1139631902)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0]))) : (18446744073709551605ULL)))));
                    var_19 = ((/* implicit */long long int) (short)8800);
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)212)) ? (4U) : (((/* implicit */unsigned int) 1139631916)))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))))));
                    arr_11 [(signed char)10] [i_0] = ((/* implicit */signed char) ((_Bool) arr_9 [i_0 - 2] [i_1] [i_2] [i_0 - 3]));
                }
            } 
        } 
    }
}
