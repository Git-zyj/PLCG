/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216255
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
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = var_1;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))) : (18446744073709551614ULL)));
        var_18 = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [4ULL] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 -= ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) -627905975)) ? (-1802932724936929127LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11048)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (short)26169))))) : (min((268435455U), (((/* implicit */unsigned int) (unsigned short)65525)))))))));
        var_21 = ((/* implicit */_Bool) 545657963);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) 1802932724936929143LL);
                        var_23 = ((/* implicit */short) 627905975);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_24 = max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [10U])), (min((((/* implicit */unsigned long long int) arr_14 [i_5] [i_1])), (((((/* implicit */_Bool) -1401467540)) ? (13359084158580192553ULL) : (((/* implicit */unsigned long long int) -490769232)))))));
                        arr_16 [18ULL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_3]), (((/* implicit */int) (unsigned short)55581))))) ? (((/* implicit */int) arr_4 [i_1])) : ((-2147483647 - 1))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                        {
                            arr_21 [i_1] [i_6] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                            arr_22 [6ULL] = ((/* implicit */unsigned int) (unsigned char)43);
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3650)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (signed char)-1))));
                        var_26 = ((/* implicit */long long int) (short)-1);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26170)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-46))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (arr_17 [i_6] [i_2] [i_3] [i_6] [i_1]) : (0ULL)))));
                    }
                    arr_23 [i_1] [i_1] [8LL] [i_3] = ((/* implicit */signed char) arr_18 [i_3]);
                }
            } 
        } 
    }
    var_28 = min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-40291631) : (((/* implicit */int) var_3))))));
}
