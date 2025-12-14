/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211331
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_0 [i_2 + 1] [i_2 - 3])))));
                    var_20 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) ? (((max((var_15), (((/* implicit */unsigned int) (signed char)40)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_2 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 5801731175475420819ULL))))))));
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((1073741823ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_13 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(arr_11 [4U] [4U] [i_1] [i_2 - 3] [i_3] [i_3])));
                        var_22 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 1388397021)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_2 - 1]))));
                        arr_14 [i_0] [i_1] [i_3] |= ((/* implicit */int) ((signed char) arr_9 [i_0] [i_1] [i_2] [i_3]));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) -1247588690574351163LL);
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (short)-7332)) : (((/* implicit */int) (_Bool)1))));
        var_25 = (+(2246052243U));
        var_26 = ((((/* implicit */long long int) ((/* implicit */int) var_17))) & (arr_11 [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1]));
    }
}
