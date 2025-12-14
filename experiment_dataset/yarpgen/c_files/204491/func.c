/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204491
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(4246829185U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1])), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_6))))))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)8293)), (min((arr_7 [i_2 - 1] [i_2 - 3] [i_2 + 1]), (((/* implicit */unsigned int) var_0))))));
                        arr_15 [(signed char)2] [i_1] [(_Bool)1] [18] &= ((/* implicit */unsigned int) min((max((((/* implicit */int) (signed char)91)), (max((((/* implicit */int) var_8)), (1252364501))))), (((((((/* implicit */int) (signed char)91)) ^ (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (signed char)-92))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) min((((/* implicit */short) (signed char)-89)), (var_8))))));
                        var_13 = ((/* implicit */unsigned char) min((((arr_4 [i_0]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8293)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4)))))), (((/* implicit */unsigned long long int) (~((+(1628644650U))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */int) max((1048591290469752908ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) var_8);
                            var_17 ^= ((/* implicit */unsigned int) var_7);
                            arr_24 [20U] [i_1 - 1] [i_2] [i_4] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                            var_18 = ((/* implicit */unsigned char) (~(min((max((var_2), (((/* implicit */unsigned int) var_1)))), ((~(var_4)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_19 -= ((/* implicit */int) ((unsigned int) var_5));
                            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) 2047U)), (0ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8293))) : (((((((/* implicit */unsigned int) var_1)) / (var_4))) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(0U))))));
                            var_22 = ((/* implicit */unsigned char) max((max((((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4))))), ((short)-11328))), (((/* implicit */short) (_Bool)0))));
                            var_23 = ((unsigned short) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_9))));
                            var_25 = ((/* implicit */_Bool) (short)-11342);
                        }
                    }
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((max((min((var_4), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) + (((unsigned int) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_2] [18U] [i_9] [i_9])))))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) max((1358899066U), (((/* implicit */unsigned int) var_0)))))));
                    }
                    arr_32 [i_0] [i_0] = max((((/* implicit */unsigned int) arr_23 [21U] [21U] [i_1] [i_0] [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned int) var_6)), (var_2))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (296983721U)))))));
                }
            }
        } 
    } 
}
