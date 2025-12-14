/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223946
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((((/* implicit */int) min((((signed char) 18446744073709551615ULL)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))))), (-1105452968))))));
                        var_17 &= ((/* implicit */unsigned char) ((((0) << (((8158676606103078985ULL) - (8158676606103078964ULL))))) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */int) (((~(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_1))))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)62)))))));
        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_18 = ((/* implicit */long long int) (-(arr_7 [i_0] [i_0] [i_0] [i_0] [8] [i_0])));
        var_19 -= ((/* implicit */unsigned long long int) (unsigned char)55);
    }
    var_20 = var_2;
    var_21 = ((/* implicit */_Bool) (~(var_15)));
    var_22 = var_3;
    var_23 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (short)1678))));
}
