/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36828
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] [i_0 + 4] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_13 = ((/* implicit */_Bool) (short)0);
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 20; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_8))), ((~(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [i_4 - 1] [12LL] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_9))) - ((~(((/* implicit */int) arr_8 [i_1]))))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) arr_5 [i_1 - 1]))))));
                                var_15 = ((/* implicit */long long int) arr_13 [i_1] [i_2]);
                                arr_16 [i_1] = min((((/* implicit */long long int) arr_12 [(_Bool)1] [i_2] [(_Bool)1] [i_4] [i_5] [(unsigned short)10])), ((~(var_4))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1])) || (((/* implicit */_Bool) (short)11))))) : (((/* implicit */int) arr_6 [i_1])))))));
                }
            } 
        } 
    } 
}
