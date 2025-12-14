/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52638
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
    var_15 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) (+(1057296976182223524LL)));
        var_16 = min((((/* implicit */long long int) var_10)), (-7771578381110379692LL));
        var_17 = ((/* implicit */_Bool) (-((~((~(arr_0 [i_0 - 1] [i_0 - 1])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1]))) | (min((((/* implicit */unsigned long long int) 2059450763U)), (17872112039752458671ULL)))))) ? ((~(-2024928411448857370LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) || (((/* implicit */_Bool) arr_1 [i_1 + 1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_0 [i_1] [i_1]))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))))) | (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (short)25524)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 - 1] [i_3] [i_3]))))));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_2))))))));
                        arr_14 [i_4] [i_4] &= ((/* implicit */long long int) arr_10 [i_1 + 1] [i_4] [i_1 + 1]);
                        var_20 = ((/* implicit */unsigned short) 7177585457104565369ULL);
                        arr_15 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_1])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_1] [i_1 + 1] [i_1])))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) var_13))));
    var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) var_3)), ((~(((/* implicit */int) ((-7771578381110379718LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))))))));
}
