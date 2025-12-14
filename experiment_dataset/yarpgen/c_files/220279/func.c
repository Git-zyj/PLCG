/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220279
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(_Bool)1] [10ULL] [9ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((_Bool) arr_3 [i_0 - 2]))) : (((int) ((var_4) && (((/* implicit */_Bool) 18446744073709551600ULL)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
                    {
                        arr_10 [12ULL] [(unsigned char)5] [i_2] [(unsigned short)9] = (!(arr_5 [i_0 - 2] [i_0 + 1]));
                        arr_11 [i_0] [i_3] = ((/* implicit */short) var_4);
                        var_18 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)40))));
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [6] [i_1] [9]))) & (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_15)))));
                        var_20 = ((/* implicit */unsigned long long int) ((_Bool) (short)-3083));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_13 [6] [i_2]);
                        var_22 = arr_2 [i_4];
                        var_23 ^= ((((/* implicit */_Bool) (unsigned char)40)) && (((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_2] [6ULL] [(_Bool)1])));
                    }
                    arr_14 [i_0] [9] [i_2] |= ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) -1357802118)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (2305842940494217216LL))))));
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) : (((var_11) << (((/* implicit */int) ((_Bool) 13928015347177246608ULL))))));
    var_25 = ((/* implicit */short) var_5);
}
