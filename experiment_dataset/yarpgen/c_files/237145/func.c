/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237145
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
    var_17 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((_Bool) ((long long int) arr_8 [i_0] [i_1] [13U] [i_0])))), (((unsigned char) arr_7 [i_0] [i_1] [i_2] [i_2]))));
                    var_19 -= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2]))))), (2861649008U))), (((/* implicit */unsigned int) (~(((int) var_11)))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    var_20 |= ((/* implicit */signed char) min((((long long int) 4521784029747469892ULL)), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_5 [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((unsigned int) var_10));
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        var_22 = (~(((/* implicit */int) max((((/* implicit */short) (unsigned char)236)), ((short)-1)))));
        var_23 ^= (!(((/* implicit */_Bool) min(((unsigned char)44), ((unsigned char)44)))));
        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        var_25 *= max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)44))))), (((unsigned int) (unsigned char)41)));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            arr_19 [(_Bool)1] [10U] [(_Bool)1] |= ((/* implicit */signed char) (-(((/* implicit */int) max((var_14), (((/* implicit */unsigned short) (unsigned char)207)))))));
            arr_20 [(_Bool)1] [i_4] [(_Bool)1] = max((min((((/* implicit */unsigned int) (unsigned char)49)), (arr_10 [i_5 - 1] [i_5 + 2]))), (((/* implicit */unsigned int) ((short) arr_10 [i_5 + 4] [i_5 + 2]))));
            var_26 -= ((/* implicit */unsigned char) ((long long int) ((unsigned char) var_2)));
            arr_21 [i_4] [i_4] = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned char)198))))));
            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_14 [i_5 - 1] [i_4])))));
        }
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_27 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_17 [i_6]))));
        var_27 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_6] [i_6]))));
    }
}
