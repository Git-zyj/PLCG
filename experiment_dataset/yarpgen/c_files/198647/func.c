/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198647
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_0) : (2574804803652951872ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) var_2);
            arr_4 [i_0] [i_0] [i_1] &= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) 2464623706U)) : (arr_3 [i_0 - 4] [0ULL] [i_1])))));
            arr_5 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0 - 4] [i_0 - 4]);
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) var_13);
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_5) + (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3]))) : (3898557349U)))) : (15871939270056599744ULL)));
                arr_20 [i_0] [i_3] [i_2] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_3))))));
                var_23 -= ((/* implicit */unsigned char) var_16);
            }
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */signed char) ((unsigned char) ((unsigned char) arr_13 [i_0] [i_0])));
                var_25 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_21 [i_6] [i_2])))) | ((+(((/* implicit */int) (unsigned char)127))))));
            }
            var_26 = ((/* implicit */short) ((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_3)) ? (15871939270056599729ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2])))))));
            var_27 = ((/* implicit */short) ((arr_21 [i_0 - 4] [i_0 - 4]) || (((/* implicit */_Bool) (unsigned short)16))));
        }
        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3898557349U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))));
    }
}
