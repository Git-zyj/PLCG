/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23246
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [4] [i_1] [i_2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_2]))))), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_8)))), (((short) var_10)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_15 *= ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (min((((/* implicit */unsigned short) (signed char)54)), (min((((/* implicit */unsigned short) (signed char)40)), (var_1)))))));
                        arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((min((((arr_8 [i_3] [i_3] [i_0]) ? (((/* implicit */long long int) arr_6 [i_0] [8ULL])) : (var_6))), (((/* implicit */long long int) var_13)))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29134)) ? (((/* implicit */int) (signed char)-54)) : ((+(((/* implicit */int) (signed char)54)))))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (arr_9 [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1 - 1])))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((2231232197U), (((/* implicit */unsigned int) (signed char)0)))))));
                        var_18 = ((/* implicit */unsigned short) ((unsigned char) ((min((2231232197U), (((/* implicit */unsigned int) var_9)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_1 - 1] [i_0]))))));
                    }
                    for (long long int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [(signed char)4] |= ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (short)25059)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned char)246)))), (((((/* implicit */_Bool) (short)25067)) ? (((/* implicit */int) (unsigned short)10949)) : (var_5))))) >> (((min((((((/* implicit */_Bool) arr_7 [i_0] [6LL] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))))), (arr_6 [11LL] [i_1 - 1]))) - (1795227313U)))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(unsigned short)8])))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((-636650375) <= (((/* implicit */int) (signed char)3)))))))) ? (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_1] [i_0]) ? (((/* implicit */int) (signed char)-46)) : (var_5)))) : (min((17836884035023257767ULL), (((/* implicit */unsigned long long int) (unsigned short)63))))));
                        arr_18 [i_5 - 1] [i_0] [i_1 - 1] = ((/* implicit */unsigned int) arr_13 [i_5] [2LL] [i_0] [i_1] [i_0]);
                        arr_19 [i_0] [2LL] [i_0] = ((int) ((_Bool) -1380289608));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)15))))), (var_8))));
}
