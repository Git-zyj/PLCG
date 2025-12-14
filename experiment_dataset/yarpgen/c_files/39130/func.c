/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39130
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
    var_18 = ((/* implicit */unsigned short) (+(18446744073709551597ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        arr_2 [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37205)) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        arr_3 [i_0] [8] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
        var_19 = (~(arr_1 [i_0 - 2] [i_0 + 1]));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_2] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_4]), (((/* implicit */unsigned short) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) var_12)))))));
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((var_0) - (4045617998U)))))) : (((((/* implicit */_Bool) 14U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11721))) : (26U)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27432)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-66))))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_10)))))));
                                arr_18 [0U] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_1 - 1]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) arr_10 [i_1 + 1]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_1 + 1]))) ^ (arr_11 [i_2] [i_2] [i_2])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_11 [i_2] [i_2] [(signed char)7]))) : (((arr_8 [i_3 - 1] [i_1 - 1]) ? (arr_11 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3])))))));
                    arr_19 [i_1] [i_2] [(_Bool)1] |= ((/* implicit */unsigned char) ((int) var_11));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned char) (+(((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1403225144)) ? (max((((/* implicit */unsigned int) var_12)), (2856989111U))) : (((/* implicit */unsigned int) (~(var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (9223372036854775807LL)));
    var_25 = ((/* implicit */unsigned int) ((unsigned short) (!(((((/* implicit */_Bool) var_5)) && (var_11))))));
}
