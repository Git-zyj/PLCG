/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210402
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */int) var_1);
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (short)30588))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_3))));
                    var_15 *= ((/* implicit */short) var_7);
                }
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                /* LoopSeq 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [6] |= ((/* implicit */_Bool) min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) arr_1 [10U]))));
                    arr_15 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)26850)) != (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0] [(_Bool)1] [(_Bool)1]))) || ((!(arr_13 [i_0] [i_3]))))))));
                    arr_16 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((0) << (((((/* implicit */int) (unsigned short)58447)) - (58423)))));
                    arr_17 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0] [i_0] [i_1 - 1])) || ((_Bool)1))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (arr_8 [i_3 - 1] [i_3 - 1] [i_1 - 1])))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_20 [i_0] [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [(unsigned char)7] [(_Bool)1]);
                    arr_21 [i_4] [i_4] [i_0] = ((((/* implicit */int) ((_Bool) (unsigned short)11324))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))) == (var_5)))));
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((unsigned char) ((arr_6 [(unsigned short)12] [4U] [i_1 - 1] [(unsigned short)12]) ^ (((/* implicit */int) arr_0 [i_4] [i_1 - 1]))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), ((~(var_2)))))) ? (((/* implicit */int) min((((unsigned short) 3967792167U)), (((unsigned short) -292291656))))) : (((/* implicit */int) var_9))));
}
