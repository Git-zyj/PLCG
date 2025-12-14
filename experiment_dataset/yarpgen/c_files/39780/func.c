/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39780
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
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [i_1] [i_1] [21ULL] [13] = ((/* implicit */_Bool) arr_8 [i_0] [i_1]);
                        arr_13 [i_0] [i_0] [i_1] [i_2] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? ((~(((/* implicit */int) arr_5 [i_3])))) : (((/* implicit */int) var_14))));
                        arr_14 [i_0] [i_0] [i_1] [i_3] [i_2] = (+(((/* implicit */int) (unsigned short)49070)));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_17 [i_0 + 1] [i_1] [(signed char)14] [i_1] = ((/* implicit */unsigned int) ((int) (+(arr_6 [i_1]))));
                        var_16 = ((/* implicit */unsigned long long int) ((short) var_7));
                    }
                    /* vectorizable */
                    for (short i_5 = 2; i_5 < 21; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0 - 3]))));
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [11] [i_5] [i_5] [i_0])))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1035629269483508976LL)))))));
                    }
                    arr_20 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) 878425879U)) ? (2723576904106918120LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0 + 1]))))) <= (min((((/* implicit */long long int) arr_1 [i_2])), (-2723576904106918121LL))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) var_2))))))));
}
