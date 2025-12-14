/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50778
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
    var_17 += ((/* implicit */unsigned int) ((var_3) <= (min((((unsigned int) 3905923958U)), (((/* implicit */unsigned int) var_6))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) arr_3 [(unsigned short)17]);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) (unsigned short)22816))))) ? (((/* implicit */int) ((2043852360U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0])), ((unsigned short)42731)))) : (((-1722474327) - (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0 - 1] [(unsigned char)6]))));
        }
    }
    for (int i_2 = 2; i_2 < 17; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2 - 2])) >> ((((+(((/* implicit */int) (unsigned short)4038)))) - (4023)))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */short) ((3408751745577001228LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) 3114550540U)) ? (389043338U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42711))))))));
                                var_22 = ((/* implicit */int) arr_10 [i_5] [i_4]);
                                arr_19 [i_2] [i_2] [4U] [i_2] [(signed char)0] |= ((/* implicit */unsigned char) 3879785621U);
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 1241519835U))) ? ((+(((/* implicit */int) arr_7 [i_2 - 1])))) : (((/* implicit */int) max(((signed char)-50), (arr_12 [i_6] [i_6 + 2] [i_6 + 2] [i_2 - 2]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                    arr_20 [i_2] [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4]))) : (max((389043337U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) + (((/* implicit */int) arr_18 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 2]))))))));
                }
            } 
        } 
        var_25 = max((((/* implicit */unsigned long long int) ((signed char) (unsigned char)52))), (min((((/* implicit */unsigned long long int) max((var_1), (var_11)))), (((unsigned long long int) 0ULL)))));
        arr_21 [(signed char)15] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 956583431)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)4036)))) || (((/* implicit */_Bool) (unsigned short)42711))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-99)))))));
    }
}
