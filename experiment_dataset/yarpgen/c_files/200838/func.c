/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200838
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
    var_18 = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((_Bool) 0LL))), (min((4355719706229661704LL), (((/* implicit */long long int) 11939398)))))), (((/* implicit */long long int) var_17))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)19] [(signed char)4] [i_0] = ((/* implicit */_Bool) arr_2 [i_1 + 1]);
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((-(arr_4 [i_0] [(unsigned char)16]))) >= (((/* implicit */unsigned long long int) ((unsigned int) var_14))))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [(short)5] = ((/* implicit */int) 1056496143U);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [(signed char)20] [(unsigned char)0] [i_3 - 1] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_7 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (-6987024876696472663LL) : (((/* implicit */long long int) 11939398))))))) ? (((/* implicit */int) ((signed char) (-(-11939398))))) : (((/* implicit */int) (short)-8575))));
                                arr_14 [i_0] [i_1 - 3] [i_2] [i_0] = ((/* implicit */int) arr_10 [i_0] [14LL] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((var_20), (32594709U)));
                                arr_23 [i_0] [i_0] [(_Bool)1] [i_5] [20ULL] [i_0] = (!(((/* implicit */_Bool) 32594709U)));
                            }
                        } 
                    } 
                    arr_24 [20LL] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 536870880))));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -11939399);
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056496143U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18778))) : (32594709U)))) ? (min((((/* implicit */unsigned long long int) arr_15 [(_Bool)1])), (min((((/* implicit */unsigned long long int) var_14)), (var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [14U]), (((/* implicit */int) arr_22 [i_0] [(unsigned short)9] [(unsigned short)9] [i_5]))))) ? (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)14390)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((var_14) > (((/* implicit */int) var_0))))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_11)) : (11680666776286506273ULL))), (((/* implicit */unsigned long long int) min((4262372587U), (((/* implicit */unsigned int) var_2))))))) % (((/* implicit */unsigned long long int) (-(min((var_12), (var_10)))))))))));
}
