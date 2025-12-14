/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223213
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
    var_10 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_4), (var_4))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_6)) & (((((/* implicit */_Bool) var_9)) ? (var_8) : (var_8)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)22))));
                    var_12 = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)65524)) - (((((/* implicit */_Bool) 1855136262)) ? (((/* implicit */int) var_3)) : (var_8)))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_13 ^= ((/* implicit */signed char) max((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_3] [1U])), ((unsigned short)65534)));
                    arr_11 [(_Bool)0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_3);
                }
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_4] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_4])) : (((/* implicit */int) var_4)))) & (((/* implicit */int) var_5))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(1855136236))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_18 [i_0] [i_1] [i_4] [i_5] [i_5]);
                                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((((-(((/* implicit */int) arr_5 [i_0])))) - (((/* implicit */int) min((arr_2 [i_6] [i_5] [i_1]), (((/* implicit */unsigned short) var_2))))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_4] [i_1])), (arr_2 [i_1] [i_5] [i_4 - 1])))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0])))) : (max((((/* implicit */int) var_0)), (arr_19 [(_Bool)1] [(_Bool)1] [i_4] [i_4]))))))))));
                            }
                        } 
                    } 
                }
                var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_10 [i_1] [i_1] [(signed char)14] [i_0])), (arr_3 [i_0] [i_1])))), (arr_1 [i_0])))) : (((long long int) (-(((/* implicit */int) var_5)))))));
            }
        } 
    } 
}
