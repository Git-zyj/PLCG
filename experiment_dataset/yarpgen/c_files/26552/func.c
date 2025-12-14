/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26552
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min(((unsigned short)4), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) > (113807515U)))))))));
        var_17 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((arr_3 [i_1]) ? (-8887140998324792592LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_1]);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16320)) ? (((((/* implicit */_Bool) (unsigned short)16320)) ? (-8595121387579695457LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(_Bool)1] [i_1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 636959668U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (636959671U))))));
}
