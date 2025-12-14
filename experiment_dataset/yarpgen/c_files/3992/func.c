/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3992
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
    var_11 = ((/* implicit */signed char) max((((unsigned long long int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)123)))), (((/* implicit */unsigned long long int) var_7))));
    var_12 = ((/* implicit */unsigned short) ((unsigned long long int) var_3));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned long long int) var_10);
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 + 1])))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) / (var_6))) : (var_8))), (((/* implicit */int) ((unsigned short) var_1)))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) ((var_1) == (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */int) var_3);
                        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1])) * (var_6))) : ((-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 + 2]))))));
                        var_18 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) (unsigned short)58075)), (var_0)))));
                    }
                } 
            } 
            arr_16 [i_1] = ((/* implicit */unsigned long long int) 1994352286);
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((18446744073709551612ULL) < (((/* implicit */unsigned long long int) var_7))));
            arr_19 [i_1] = ((/* implicit */long long int) 16987813814415605738ULL);
        }
        var_20 = var_2;
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4ULL) != (((/* implicit */unsigned long long int) -9223372036854775805LL)))))) / (((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6])) ? (1458930259293945877ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
        var_21 = ((/* implicit */unsigned long long int) 0U);
    }
}
