/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246002
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
    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(var_9))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned short)28709)) : (((/* implicit */int) (signed char)77)))))))) ? (((/* implicit */unsigned int) min((var_2), (((int) (unsigned char)226))))) : (max((((/* implicit */unsigned int) var_0)), ((-(261888U)))))));
                    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)36826))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned long long int) var_7);
                        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) (unsigned short)28709))))) - (arr_6 [i_0] [i_0] [i_2] [i_3])));
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) (unsigned short)38223)));
                    }
                    for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) max((var_0), (max(((unsigned char)39), (((unsigned char) (short)-29647))))));
                        arr_14 [i_0] [i_2] [i_1] [i_0] = ((((/* implicit */unsigned int) 2024118366)) + (4226648639U));
                        arr_15 [(unsigned char)6] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(arr_3 [i_4]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)1] [i_1] [i_1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)36818)) ? (((/* implicit */int) (unsigned short)8191)) : (713601164)))))));
                        var_17 = ((/* implicit */unsigned int) max(((-(14017180710681116407ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 52697455U)) ? (((/* implicit */unsigned int) 13)) : (68318656U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                    }
                }
            } 
        } 
    } 
}
