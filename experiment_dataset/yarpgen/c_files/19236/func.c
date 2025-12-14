/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19236
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
    var_20 = ((/* implicit */int) var_18);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((max((8211407571664687095ULL), (((/* implicit */unsigned long long int) 5234594980835569657LL)))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */signed char) var_14);
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)122))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_23 -= (_Bool)0;
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] |= ((/* implicit */long long int) -319346213);
                                var_24 = ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (arr_6 [i_0 + 1] [12] [i_1] [i_2 + 3])));
                                var_25 = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (-(var_15))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 24; i_5 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                        var_28 = arr_10 [i_0] [i_0] [(signed char)14] [i_0] [(short)8] [i_5];
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)2418)), (795596863)))) ? (((/* implicit */int) ((short) (unsigned char)24))) : (((/* implicit */int) (unsigned short)46283))))) && (((/* implicit */_Bool) min((-7887018753690298347LL), (((/* implicit */long long int) (unsigned char)10)))))));
    }
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_14))));
}
