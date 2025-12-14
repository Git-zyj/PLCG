/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22330
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_11 [11ULL] [i_1] [i_0] [i_3 + 1] = ((/* implicit */long long int) var_9);
                        var_13 -= ((/* implicit */_Bool) var_1);
                        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [(unsigned char)10] [i_3])) ? (max(((+(1779953301230407736LL))), (arr_5 [i_0] [(signed char)12] [i_2]))) : ((((((-(arr_5 [i_0] [i_0] [i_0]))) + (9223372036854775807LL))) >> ((((+(-4600312367857768398LL))) + (4600312367857768418LL)))))))));
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1)) : (arr_5 [i_2] [i_2] [i_2]))) : (max((((/* implicit */long long int) -744773578)), (arr_0 [i_1] [i_2]))))) : (344246207733646558LL)));
                    }
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (min((((long long int) arr_7 [i_0] [i_0] [i_0] [(signed char)8])), (((/* implicit */long long int) arr_3 [14] [0])))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-19))))))));
                        var_17 -= ((/* implicit */unsigned long long int) arr_7 [14] [(_Bool)1] [14] [(_Bool)1]);
                        var_18 = ((/* implicit */long long int) (-2147483647 - 1));
                    }
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_2] [i_2] [i_5] [i_2]);
                        var_20 ^= ((/* implicit */short) var_7);
                    }
                    var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) -7619409697983865476LL)))))))) ? (((/* implicit */int) var_6)) : (min((((((/* implicit */_Bool) -8859355824390534866LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-99)) + (2147483647))) << (((1982866363U) - (1982866363U)))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((1675469065U) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)21545)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)));
    var_25 &= ((/* implicit */_Bool) ((var_10) ? ((+(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
