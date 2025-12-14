/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230660
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
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)232))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))), (var_1)));
    var_20 = ((/* implicit */unsigned char) var_11);
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) var_6))), (min((((/* implicit */unsigned long long int) var_18)), (var_3))))))))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 4])) && ((!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                        var_24 += ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_3 [i_1 - 1] [i_1 + 3]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) var_15);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    var_26 -= ((/* implicit */unsigned char) ((arr_14 [i_4] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)8))))));
                    arr_15 [i_0] |= ((/* implicit */long long int) ((unsigned long long int) (!(var_18))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) == ((~(arr_5 [(signed char)4] [i_0] [i_0])))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 3146902235U)))))));
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((signed char) ((var_4) & (var_4))))) : (((/* implicit */int) var_17))));
}
