/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48843
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */_Bool) min((-946676845), ((+(((/* implicit */int) arr_1 [i_0 - 3]))))));
                arr_4 [i_0 + 1] [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1937660386U)));
                var_21 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)69))));
                var_22 = ((/* implicit */long long int) max((var_22), (min((((/* implicit */long long int) var_3)), (min((arr_3 [i_0 - 2] [i_0 - 3] [i_1 + 2]), (((/* implicit */long long int) (_Bool)0))))))));
                arr_5 [i_1] = ((unsigned char) (+(((/* implicit */int) var_3))));
            }
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) ((int) ((unsigned char) var_7)));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (int i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3 + 3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 3] [i_3 + 1]))) : (423448234U)))))))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1937660360U)))) ? (((((((/* implicit */int) arr_13 [i_2] [i_3] [i_4])) < (((/* implicit */int) arr_13 [i_2] [i_3 + 1] [i_3 + 1])))) ? (((long long int) var_19)) : (((/* implicit */long long int) 3871519064U)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((unsigned short)49325), (((/* implicit */unsigned short) (short)26333))))), (min((((/* implicit */unsigned int) var_3)), (423448245U))))))));
                    var_26 |= ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) 1937660364U))));
                }
                for (signed char i_5 = 2; i_5 < 15; i_5 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(3871519065U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (2357306909U)));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((423448211U), (((/* implicit */unsigned int) arr_14 [i_3] [i_3])))))));
                    var_29 = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) (+(var_2)))), (arr_11 [i_2] [12LL])))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    arr_18 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) && (((/* implicit */_Bool) min((arr_15 [i_3 + 3] [i_3 + 1] [i_3] [i_3]), (((/* implicit */int) ((423448227U) == (709875786U)))))))));
                    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (unsigned char)178)))));
                }
                var_31 = ((/* implicit */_Bool) var_19);
                arr_19 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (signed char)-127))))))), (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) var_3)), (11451624861658750661ULL))) : (((/* implicit */unsigned long long int) (+(738181131U))))))));
            }
        } 
    } 
}
