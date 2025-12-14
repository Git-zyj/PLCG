/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38604
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
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 790503818327641250ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((min((((/* implicit */unsigned long long int) (unsigned short)63208)), (var_6))) + (((/* implicit */unsigned long long int) 2147483647U))))));
                            var_21 = ((/* implicit */long long int) min((((unsigned long long int) (+(var_2)))), (((((/* implicit */unsigned long long int) arr_4 [i_1 + 1])) & (max((((/* implicit */unsigned long long int) (short)-26686)), (4273320885884775673ULL)))))));
                            var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) (unsigned short)35850))))) || (((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (short)26686))))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1 + 1])))) ^ ((~(arr_1 [i_2 + 1])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_0])) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35829)) && (var_7)))) : (((/* implicit */int) ((signed char) min((arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_0]), (((/* implicit */int) var_14))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (unsigned short)65522);
                            var_26 |= ((/* implicit */unsigned short) (~(arr_15 [i_1 + 2] [i_1 + 1] [i_4 + 1] [i_5])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1 - 1] [i_6 + 2] [i_6 + 2]) - (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_0] [i_6 - 3] [(unsigned short)4]), (arr_7 [i_0] [i_1] [i_6 + 2] [i_7])))) : (var_0)));
                            var_28 = ((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6 - 3] [i_6 + 1] [i_6 + 2])) ? (arr_7 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 3]) : (arr_7 [i_6 - 3] [i_6 - 4] [i_6 + 1] [i_6 - 4])));
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) ((long long int) -6733975830249629388LL)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) (short)-26682)) : (((/* implicit */int) arr_20 [i_0] [i_0] [2LL]))))) ? (max((-278932447235118223LL), (((/* implicit */long long int) arr_9 [i_1 + 2] [i_0])))) : (((/* implicit */long long int) (+(arr_15 [i_0] [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (2147483647)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_14))))) : (var_6)));
}
