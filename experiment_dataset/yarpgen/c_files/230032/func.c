/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230032
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_19 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)4])) : (((((/* implicit */int) (unsigned char)6)) + (((/* implicit */int) (short)-32763))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_7 [i_0 + 1]))))) : (arr_6 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_20 = (+((~(((/* implicit */int) var_1)))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((-1463139377) | (((/* implicit */int) (signed char)-123)))) + (2147483647))) >> (((((((/* implicit */_Bool) 1704868949)) ? (-7300194047435431593LL) : (((/* implicit */long long int) 177732773)))) + (7300194047435431597LL))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((((_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [i_1] [(unsigned short)22] [i_0] [i_0]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((arr_14 [i_0 - 1] [0ULL] [(short)9] [i_0 - 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)250))))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    var_23 = ((/* implicit */unsigned short) max(((~((+(((/* implicit */int) var_6)))))), (max(((~(((/* implicit */int) var_15)))), ((+(((/* implicit */int) var_8))))))));
}
