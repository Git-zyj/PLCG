/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231636
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
    var_13 = ((/* implicit */unsigned int) ((unsigned short) (+(1125899906841600LL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_14 += ((unsigned int) (+(1125899906841608LL)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1125899906841600LL)) ? (2357239180U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52706)))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65511)), (arr_9 [i_3] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 + 3])))) ? (((((/* implicit */_Bool) var_3)) ? (((6050202221148321661LL) >> (((var_11) - (1783862088U))))) : (-1125899906841601LL))) : (((/* implicit */long long int) ((unsigned int) 3613209093U)))))));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_15 [i_0] [i_1] [i_0] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (var_7) : (1125899906841608LL))) : (((/* implicit */long long int) 2840032444U))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15087))) : (3758096384U)))))) : (((arr_11 [i_0]) << (((((arr_10 [i_2] [i_3 + 3] [i_3 - 1] [i_3] [i_3 + 3]) + (5542244177786115497LL))) - (42LL))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] |= (+(min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-124))))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) var_10)) : (arr_15 [i_1] [i_1] [i_2] [i_0] [i_1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (129)))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_20 [i_8] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (9223372036854775807LL)))))) ? ((~(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2629))))))));
                            arr_30 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)122))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */long long int) var_0);
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)128)) < (((/* implicit */int) (signed char)-48)))))));
        }
    }
}
