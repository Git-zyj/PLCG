/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25479
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
    var_10 = max((((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned char)194), ((unsigned char)194))))))), (((((/* implicit */_Bool) 1305077968U)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)50)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [(unsigned short)5] [(unsigned short)5] [(unsigned short)5] [i_0 + 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned short) var_6))) ? (arr_3 [i_0] [3U]) : (((/* implicit */int) ((unsigned short) arr_10 [i_3 - 1] [i_1] [i_2] [i_2] [4U]))))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) ((short) arr_5 [i_2] [i_2]))))))));
                                var_11 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1870896087)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)18))))) < (min((var_1), (arr_11 [i_2] [4LL] [i_4 + 1])))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_11 [i_2] [i_1] [i_2])) : (max((((/* implicit */long long int) var_8)), (arr_0 [i_4])))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [(_Bool)1] [i_2] = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) arr_9 [i_2] [(unsigned char)1] [(unsigned char)1] [(signed char)6] [i_2])), (max((((/* implicit */unsigned int) var_4)), (var_2))))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0] [2U] [i_2]))));
                }
            } 
        } 
    } 
}
