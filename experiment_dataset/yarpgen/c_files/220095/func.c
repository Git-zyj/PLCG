/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220095
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) (~(((/* implicit */int) (!((!(var_0))))))));
                var_12 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_1 - 3]))))));
                var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 2] [(unsigned short)4])))))));
                var_14 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [15LL] [i_0]))) != ((+(var_8))));
                var_15 = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) (-(((((/* implicit */int) (short)28672)) / (((/* implicit */int) (unsigned char)132))))));
        var_18 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_1 [i_2]))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((~(((/* implicit */int) arr_7 [i_2] [i_2]))))))) : (((((/* implicit */_Bool) var_1)) ? (min((var_1), (((/* implicit */long long int) arr_1 [i_2])))) : ((~(var_8)))))));
        var_20 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (-1227636733)))) : (arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((~(((/* implicit */int) var_10))))));
    }
    var_22 = ((/* implicit */_Bool) var_2);
    var_23 = ((/* implicit */long long int) var_4);
}
