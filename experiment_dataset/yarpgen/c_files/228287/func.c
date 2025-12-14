/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228287
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
    var_20 = ((/* implicit */short) (signed char)-100);
    var_21 = max((((/* implicit */unsigned int) var_17)), (524288U));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32271)) * (((/* implicit */int) (unsigned char)140))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) (short)-26602)) * (((/* implicit */int) (short)-3775))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1]))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_3 [i_1 - 2]))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned short) ((2097151U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                            var_26 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)94)))) * (((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */int) (!(((10515576820411761644ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31826)))))));
                            var_28 = ((/* implicit */unsigned int) arr_2 [i_1]);
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned short) ((short) (-(2296835809958952960ULL))));
            var_30 ^= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_8 [i_5]))))));
            var_31 ^= ((/* implicit */unsigned char) (short)-26602);
        }
    }
    var_32 = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) 12284385249884476717ULL)) ? (((/* implicit */unsigned long long int) var_16)) : (15146508053794820766ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-3775)) % (((((/* implicit */_Bool) 1565268630U)) ? (((/* implicit */int) (short)26599)) : (((/* implicit */int) (signed char)-101)))))))));
    var_33 = ((/* implicit */unsigned int) (_Bool)0);
}
