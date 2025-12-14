/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39973
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
    var_20 -= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (14LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_8)))))) ? (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) % (22LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */int) (unsigned short)2949))))))) : ((-(-14LL)))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_15)), (var_1)))) ? (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_0 - 3])) : (((((/* implicit */_Bool) (unsigned short)62587)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)59507)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)6042)), (34LL)));
                            arr_15 [i_5 - 2] [i_1] [i_1] [(unsigned short)4] [i_1] [i_0 - 4] = (i_1 % 2 == zero) ? (((((((/* implicit */int) arr_13 [i_1] [i_1])) + (2147483647))) >> (max((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_5])) ? (30LL) : (-8793935408294664628LL))), ((~(22LL))))))) : (((((((((/* implicit */int) arr_13 [i_1] [i_1])) - (2147483647))) + (2147483647))) >> (max((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_5])) ? (30LL) : (-8793935408294664628LL))), ((~(22LL)))))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) 14ULL))))))), (min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)62575)))), (((/* implicit */int) (signed char)-119))))));
                        }
                    } 
                } 
                arr_16 [i_1] = (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 4] [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0 - 1])))))));
            }
        } 
    } 
}
