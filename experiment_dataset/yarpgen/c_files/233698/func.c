/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233698
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
    var_15 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] = (_Bool)1;
            var_16 = ((signed char) var_14);
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (1349832522U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56253)))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((long long int) (unsigned char)251)))))));
        }
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                {
                    arr_13 [i_0] = ((/* implicit */unsigned char) ((((max((2945134774U), (var_5))) >> (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)(-127 - 1))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((max((1349832510U), (((/* implicit */unsigned int) (signed char)58)))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))))))));
                    arr_14 [i_2] [i_0] [i_0] = ((/* implicit */long long int) min((1349832512U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)66)) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)16553)) : (-893370503))) - (16544))))))));
                    arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) var_6)) % ((+(((/* implicit */int) arr_0 [(signed char)9]))))))) ? ((((~(((/* implicit */int) (signed char)-47)))) - (((((/* implicit */int) (unsigned char)233)) & (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19332))) == (366632723U))))) >= (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_4)), ((+(var_2))))))));
}
