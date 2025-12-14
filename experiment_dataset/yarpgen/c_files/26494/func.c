/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26494
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_17 [(unsigned char)8] [i_0] [i_2] [i_3] [i_3 - 2] [i_4] = ((/* implicit */short) min((min((((/* implicit */int) (signed char)127)), (-245640484))), (((((/* implicit */int) (unsigned short)63488)) ^ (245640492)))));
                                arr_18 [i_0 + 3] [i_1] [i_0] [i_3] [i_3] [i_0 + 3] = ((/* implicit */unsigned char) arr_10 [i_4 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_19 [(unsigned short)4] [i_1] [(short)14] [i_3] [i_4] &= ((/* implicit */unsigned char) min((((unsigned short) max((((/* implicit */long long int) 245640455)), (54043195528445952LL)))), (((unsigned short) ((long long int) (signed char)-121)))));
                                arr_20 [8LL] [i_1] [i_0] [i_3] [i_0] |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -176371979)), (arr_8 [i_1] [i_3] [i_2] [i_1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (17LL)))) : (min((((/* implicit */long long int) (short)(-32767 - 1))), (arr_16 [(unsigned short)8] [i_2] [i_3] [i_4]))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_16 [(unsigned short)6] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)(-32767 - 1))))))))), (max((((/* implicit */unsigned long long int) (-(-18LL)))), (((arr_13 [(_Bool)1] [(short)12] [i_1] [i_0]) >> (((((/* implicit */int) (signed char)74)) - (48)))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_18 += ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (signed char)94)), (arr_11 [i_5 + 1] [i_5 + 1] [i_6] [i_6] [i_5] [i_5]))));
                            arr_28 [i_0] = ((/* implicit */short) ((max((arr_7 [i_0] [i_0] [i_0 - 1]), (arr_7 [i_0] [i_0] [i_0 - 2]))) ? (((((/* implicit */_Bool) arr_26 [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-122)), (arr_26 [i_0] [i_0])))))));
                            arr_29 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((962381938591486432LL), (9007199254740864LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_17))))) : (((/* implicit */int) arr_0 [i_5 - 1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_6), (var_17))))) : (((long long int) var_14)))), (var_5)));
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_2)), (13447160061835136620ULL)));
    var_21 -= ((/* implicit */short) 144115188075855744LL);
}
