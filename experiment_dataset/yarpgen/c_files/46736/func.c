/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46736
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) ((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1))))) : (((/* implicit */int) var_13))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_19 -= ((/* implicit */unsigned long long int) (~(((arr_0 [i_0] [i_0 - 1]) + (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_7)))))))));
        arr_2 [i_0 - 3] [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((5980225563192971954ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_1))))), ((~(-6299405928332470412LL)))));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_20 *= ((/* implicit */int) ((min((((((/* implicit */int) (unsigned char)66)) % (((/* implicit */int) (unsigned char)46)))), (((/* implicit */int) var_12)))) >= (min(((-(((/* implicit */int) arr_3 [i_0] [i_0 + 1])))), (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_7 [i_2 + 1])))) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_0 - 1])) : (((int) (unsigned char)13))));
            var_21 ^= ((/* implicit */unsigned short) ((((arr_0 [i_0 + 1] [i_0]) ^ (((/* implicit */long long int) min((arr_8 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_2 + 1]))))))) | (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        }
        for (unsigned char i_3 = 1; i_3 < 7; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (long long int i_5 = 2; i_5 < 7; i_5 += 2) 
                {
                    for (unsigned int i_6 = 3; i_6 < 8; i_6 += 4) 
                    {
                        {
                            arr_20 [i_6 + 1] [i_3] [i_4] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
                            arr_21 [i_0] [i_3] [i_3] [i_4] [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((long long int) -2650099993375107802LL));
                            arr_22 [i_0] [i_3] = ((((/* implicit */long long int) ((unsigned int) arr_16 [i_3] [i_3] [i_0] [i_3]))) - (2650099993375107798LL));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */int) ((long long int) min((arr_15 [i_0] [i_0 + 2]), (arr_1 [i_0 - 2]))));
            arr_23 [(unsigned char)8] [(unsigned char)8] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [(short)2] [(short)2] [(short)2]))))) : (4294967289U)))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)12847))) % (-2650099993375107794LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 + 2])) ? (128849018880LL) : (((/* implicit */long long int) 1999722024U))))))))));
            arr_24 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_3 + 2])) ? (((/* implicit */int) min((arr_15 [i_0 - 3] [i_3 + 3]), (arr_15 [i_0 - 1] [i_3 + 2])))) : ((~(((/* implicit */int) arr_15 [i_0 - 2] [i_3 + 1]))))));
            var_23 *= ((/* implicit */int) (_Bool)1);
        }
    }
}
