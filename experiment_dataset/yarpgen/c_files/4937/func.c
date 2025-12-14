/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4937
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_12)) & (var_7))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)255))))))) : (min(((+(-6601980828946715890LL))), (((/* implicit */long long int) 1383826167U)))))))));
                    arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_2]))))))) > (min(((+(arr_0 [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0)))))))));
                    var_21 += ((/* implicit */long long int) var_19);
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_4] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) ((1671749741U) * (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
                            var_22 = ((/* implicit */signed char) (+(-6601980828946715890LL)));
                        }
                        arr_16 [i_1] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1383826173U)) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))) ? (((/* implicit */unsigned long long int) 2911141148U)) : (0ULL)))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) min((max((((((/* implicit */long long int) ((/* implicit */int) var_18))) % (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) var_2))))))), (((/* implicit */long long int) (!(arr_11 [i_0 + 1] [i_3] [i_2])))))))));
                        var_24 |= ((/* implicit */int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_3 [i_0] [i_0])))) % (((/* implicit */int) arr_12 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1])))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) var_15)) : (6601980828946715890LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_12 [i_0] [(short)18]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    }
                    for (long long int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_5] [i_1] [i_2] [i_1] [i_0] [2ULL] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) + (var_15)));
                            var_25 = ((/* implicit */signed char) arr_13 [10]);
                            arr_22 [i_0] [i_1] [15LL] = ((/* implicit */short) (~(-6601980828946715890LL)));
                        }
                        arr_23 [i_0] [i_0] [i_1] [i_5] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2047LL)) ? (8069600250135523047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))))) ? ((~(max((((/* implicit */unsigned int) var_6)), (2911141148U))))) : (((/* implicit */unsigned int) ((var_15) >> (((((/* implicit */int) max(((unsigned char)251), (var_2)))) - (228))))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) var_8);
    var_27 ^= ((/* implicit */unsigned int) var_18);
}
