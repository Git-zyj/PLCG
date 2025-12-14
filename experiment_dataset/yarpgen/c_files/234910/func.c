/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234910
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
    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) var_6)))))) <= (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) - (var_0))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_10))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (arr_3 [i_0] [i_0])));
                arr_4 [i_0 - 1] [(unsigned short)14] |= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_0 [6U] [i_0 + 2])))), (((((/* implicit */_Bool) (short)10028)) ? (((/* implicit */int) arr_0 [4ULL] [i_0 + 2])) : (((/* implicit */int) arr_0 [10ULL] [i_0 + 2]))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) -3815776188618925051LL))) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 2] [i_0])) : (((((/* implicit */int) arr_2 [i_1 + 2] [i_1] [i_0 + 1])) >> (((((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0 + 1])) - (190)))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) max(((unsigned short)22729), (((/* implicit */unsigned short) (short)26654))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_2 + 3]))))) ? (max((((unsigned long long int) arr_0 [i_0] [i_3])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2 + 2])), (max((((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0])), (var_12))))))));
                            arr_11 [i_0] [i_1] [i_3] = arr_7 [i_0];
                            arr_12 [i_0] [i_1 - 2] [i_2] [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) arr_3 [i_0 + 2] [i_1 - 2])))), (((/* implicit */int) max((arr_0 [i_0] [i_1 - 1]), (arr_6 [i_0 - 1] [i_0] [i_2 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = max((max(((-(((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42811)) && (((/* implicit */_Bool) (unsigned short)42811))))));
}
