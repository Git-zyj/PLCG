/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197087
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
    var_13 = var_8;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_3] = min((((/* implicit */unsigned int) var_5)), (max((var_9), (((/* implicit */unsigned int) (~(var_5)))))));
                            arr_9 [i_0] [0] [i_2] [i_1] [i_1] &= ((/* implicit */int) var_3);
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [8ULL] [i_3])), (arr_4 [i_0] [i_1] [11])))) ? (((((/* implicit */unsigned long long int) var_8)) & (arr_4 [i_0] [i_1] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) > (arr_4 [i_0] [i_1 + 1] [i_2]))))))))));
                            arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) max((max((4611686018427387903ULL), (arr_4 [i_0] [i_1 - 4] [i_1 + 3]))), (max((arr_4 [i_0] [i_1 - 4] [i_1 - 3]), (arr_4 [i_1] [i_1 + 4] [i_1 + 3])))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(4255555042U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) -348846063)), ((-9223372036854775807LL - 1LL))))) : (var_12))) & (((/* implicit */unsigned long long int) -496720734))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1 + 4] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((_Bool) var_1));
    var_16 = ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    for (int i_4 = 1; i_4 < 13; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) var_9);
        var_17 = ((/* implicit */_Bool) var_6);
    }
}
