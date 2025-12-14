/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46718
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
    var_13 = min((((var_0) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_2)), (var_11))))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2050)) > (2096640))))) != (var_12)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((((arr_1 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) % (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_3);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_5 [i_1] |= ((/* implicit */unsigned long long int) ((((((var_0) != (var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1]))) : ((~(var_12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) ((var_7) && (((/* implicit */_Bool) -2096658)))))))));
        arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) -2096652))))), (((((((/* implicit */int) (short)-1)) != (((/* implicit */int) arr_4 [i_1])))) ? ((+(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) arr_4 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((((8005167693129894651ULL) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((0) == (((/* implicit */int) arr_4 [i_1]))))), (max((var_0), (((/* implicit */long long int) -2096633))))))) : (((unsigned long long int) (-(((/* implicit */int) var_1)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_16 -= ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
            arr_11 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_9 [i_2]))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
        {
            arr_16 [i_1] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_2)))))));
            arr_17 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_6))));
            arr_18 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) var_0))) == (var_12)));
        }
        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            arr_22 [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2096640)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-5700085291839653537LL)));
            var_18 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
        }
    }
    var_19 = ((/* implicit */_Bool) var_11);
}
