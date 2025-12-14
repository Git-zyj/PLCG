/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209996
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-248755825) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((signed char) (short)17665)))));
                arr_8 [i_0] = ((/* implicit */unsigned char) (-(1246296048)));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)25869))) - (-22LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) 756851220))))))) + (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_10 [i_2] [i_2] [i_2] [i_0]))) + (((var_8) + (33554430)))))))))));
                    var_22 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (signed char)102))))))) == (((unsigned long long int) ((((/* implicit */long long int) var_11)) / (arr_6 [i_1] [i_1] [i_2]))))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [i_3] [i_3] &= ((/* implicit */long long int) max((((((((/* implicit */int) arr_3 [i_0])) > (var_7))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((+(((/* implicit */int) arr_0 [i_3])))))), (((((/* implicit */_Bool) max((17873988861842104981ULL), (((/* implicit */unsigned long long int) var_18))))) ? (((0) | (((/* implicit */int) (_Bool)0)))) : (arr_5 [i_1] [i_3])))));
                    var_23 *= ((/* implicit */unsigned short) 1613450011U);
                    var_24 = ((/* implicit */signed char) (unsigned short)31849);
                    var_25 = ((/* implicit */unsigned long long int) min((((long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -9050638092574046589LL))))), (((/* implicit */long long int) ((((/* implicit */int) ((short) arr_0 [i_0]))) < (((/* implicit */int) min((arr_9 [i_1]), (((/* implicit */unsigned char) var_0))))))))));
                }
                for (short i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    arr_18 [i_0] [i_4] [i_4] &= ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) var_11)) + (max((arr_7 [i_4]), (((/* implicit */long long int) -1011818973)))))));
                    var_26 &= ((/* implicit */unsigned short) (-(((((/* implicit */int) min((arr_12 [i_4]), (((/* implicit */unsigned short) arr_11 [i_4] [i_1] [i_4]))))) + (((/* implicit */int) arr_11 [i_4] [i_1] [i_1]))))));
                    var_27 &= ((/* implicit */short) ((unsigned char) (_Bool)1));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_28 += ((/* implicit */unsigned char) (-(((((17046630676850232780ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_12)))) : (((/* implicit */int) var_19))))));
                    var_29 = ((/* implicit */signed char) var_14);
                }
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)64351)), (3312226289U)));
    var_31 *= ((/* implicit */signed char) var_2);
}
