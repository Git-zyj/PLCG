/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196799
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((arr_13 [i_2] [i_4 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                            arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) << (((((/* implicit */int) arr_9 [i_1 - 1] [i_4 - 3] [i_4 + 2] [i_1])) - (113)))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_2] &= ((/* implicit */unsigned long long int) ((long long int) ((arr_11 [i_5] [i_2] [i_3] [(short)4] [i_2] [i_0]) <= (((/* implicit */unsigned long long int) 7306025916258181613LL)))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-73))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_3] [i_0])))))));
                            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1 + 2] [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            arr_20 [i_0] [i_0] [i_2] [(signed char)18] [i_0] |= ((/* implicit */signed char) (_Bool)1);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1 - 1] [19ULL] [i_1] [(signed char)10] [i_6] = ((/* implicit */unsigned int) ((short) arr_1 [i_1 - 1] [(short)16]));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_21 [i_1] [i_1 + 2] [i_1] [i_2] [(short)0])))))));
                            var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 1])) || (((/* implicit */_Bool) var_2))));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) arr_10 [i_7] [i_3] [i_2] [i_1]);
                            var_20 *= ((/* implicit */unsigned long long int) var_14);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_7])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)12878)) : (((/* implicit */int) (unsigned short)32704))))) : (arr_3 [i_1] [i_1 - 1])));
                        }
                        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */signed char) (_Bool)0);
                        var_24 *= var_5;
                        var_25 *= ((((/* implicit */int) arr_27 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] [i_2])) == (((/* implicit */int) var_1)));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) var_10);
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32754)) << (((/* implicit */int) (_Bool)0))))) ? (((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)69))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (985800049522149916ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (((var_14) >> (((/* implicit */int) var_0)))) : (3994537041U))))));
}
