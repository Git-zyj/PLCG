/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202174
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
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned int) arr_0 [i_1 + 1])));
                arr_7 [i_0] [i_1] [i_1] = (signed char)3;
                var_13 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((_Bool) (signed char)3))), ((unsigned char)158)));
                var_14 = ((/* implicit */unsigned int) ((signed char) (_Bool)1));
                var_15 *= var_3;
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 4; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((int) arr_4 [i_2 - 4] [i_3 + 1] [i_3 + 2]));
            var_17 = ((/* implicit */short) 1073610752U);
            var_18 &= ((/* implicit */_Bool) arr_10 [i_3 + 3] [i_2]);
            arr_13 [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned short) ((arr_12 [i_2 + 1] [i_3]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))))));
            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)73))) + (((/* implicit */int) (unsigned char)218))));
        }
        for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            arr_16 [i_2] = (~(arr_14 [i_2 - 2]));
            arr_17 [i_2] [i_4] = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_2)))));
        }
        var_20 |= ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)3)))) || (((/* implicit */_Bool) 2223207469U))));
        arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) (~(arr_10 [i_2 - 2] [i_2 - 2])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_29 [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) arr_20 [i_5] [i_6]);
                    var_21 ^= ((/* implicit */_Bool) (signed char)-3);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) max((arr_28 [i_5] [i_5] [i_5] [i_5]), (arr_28 [i_5] [i_5] [i_5] [i_5])))))))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)5983)) || (((/* implicit */_Bool) (signed char)-3)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) >= (202013947U)))))), (15663625231503813347ULL)));
    }
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (+(var_10)))))));
    var_25 = ((/* implicit */_Bool) var_1);
}
