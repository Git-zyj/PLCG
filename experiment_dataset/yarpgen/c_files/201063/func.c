/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201063
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
    var_17 = ((/* implicit */short) ((max((8365204310387103658LL), (((/* implicit */long long int) max((((/* implicit */int) var_1)), (var_11)))))) == (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_18 *= ((short) arr_6 [i_0] [i_2 + 2] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        var_19 = (-(((/* implicit */int) max(((short)-18880), ((short)-18717)))));
                        var_20 = (short)18722;
                        var_21 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_7 [i_1] [i_1])) || (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_10))))))));
                    }
                    for (short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) (+(var_6)));
                        var_23 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))))));
                    }
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18707)) ? (0) : (((/* implicit */int) (short)-18707))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((~(((/* implicit */int) (short)-28274)))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned short)8)) & (var_11))) : (((/* implicit */int) var_10))))));
}
