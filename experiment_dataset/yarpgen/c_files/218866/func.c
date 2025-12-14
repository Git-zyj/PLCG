/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218866
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
    var_13 = var_8;
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_3] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)23)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [10LL] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                                arr_16 [0U] [i_0] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                    arr_17 [7U] [0ULL] [0ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 931910615U)) ? (((/* implicit */int) (unsigned short)17)) : ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) (unsigned short)45121)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)10] [i_2]))) % (13U)))))) ? ((+((+(((/* implicit */int) (unsigned short)6)))))) : (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [(unsigned short)5]))))), (((short) arr_12 [i_0 + 2] [i_1] [(unsigned short)7] [i_0] [i_0])))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)6] [i_0] [i_2]))) : (var_2)))) & (max((((/* implicit */long long int) arr_11 [8U] [8U] [i_1] [i_2])), (-9043798770866931356LL)))))))));
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_11 [i_0 + 1] [4U] [4U] [i_0])))));
                    /* LoopSeq 3 */
                    for (short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned int) arr_11 [i_0] [i_5 - 1] [i_0 - 3] [i_0])), (13U))));
                        var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0])) + (((/* implicit */int) arr_14 [i_0] [i_0])))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_0 [i_0] [i_2]))))))) - ((-(7U))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_19 -= (signed char)6;
                        var_20 = ((/* implicit */signed char) ((var_2) > (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 2267844893U))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20411))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_0 - 3]), ((unsigned short)0))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 1])) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                    }
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((int) arr_10 [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 3]));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (unsigned short)20414))));
                        var_24 = ((/* implicit */unsigned short) var_11);
                    }
                }
            } 
        } 
    } 
}
