/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20416
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */_Bool) 1119784819U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29084))) : (4828121446995229414LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? ((~(((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) ((_Bool) var_3)))));
                        arr_13 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3175182486U)))) : (2ULL)));
                        var_16 = ((/* implicit */int) (~((~(804042347U)))));
                        arr_14 [i_0] [i_1] [i_1] [12ULL] &= ((/* implicit */signed char) ((long long int) ((unsigned short) 15506731189080337431ULL)));
                    }
                } 
            } 
            arr_15 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1]))));
            var_17 = arr_8 [i_0] [i_0] [i_0];
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (2147483647) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))));
        }
    }
    var_18 |= ((/* implicit */unsigned char) var_11);
}
