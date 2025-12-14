/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191124
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_4 [i_1 - 1])))) - ((+(((/* implicit */int) var_16)))))) / (((/* implicit */int) (short)3380))));
                arr_6 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) ((long long int) (signed char)-41))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1542797155)))) ? (((/* implicit */int) ((unsigned char) arr_10 [i_3] [i_3 + 4] [i_2 - 1]))) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) (short)-3385)) ^ (((/* implicit */int) arr_9 [i_2 - 1])))) : (((/* implicit */int) ((short) arr_11 [i_3 + 1] [i_3 + 1] [i_3]))))))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    arr_14 [i_2 - 1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)105))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned char)105))));
                    var_23 = ((/* implicit */unsigned short) (unsigned char)119);
                }
                arr_15 [i_3 - 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20466)) ? (((/* implicit */int) (short)-16153)) : (((/* implicit */int) (unsigned short)14848))))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) arr_9 [i_3 - 1]))))));
                var_24 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_3 - 2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_2 - 1] [i_3 - 1])))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (signed char)41)) == (((/* implicit */int) arr_9 [i_2])))))))) ? (var_13) : (((((/* implicit */_Bool) (unsigned char)30)) ? (var_2) : (((/* implicit */int) arr_13 [i_2 + 2] [i_3 - 1] [i_3] [i_3]))))));
            }
        } 
    } 
    var_26 = ((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) (signed char)-42)) : (((((((/* implicit */long long int) ((/* implicit */int) var_10))) == (var_18))) ? (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) (signed char)51)) & (((/* implicit */int) (unsigned char)119)))))));
    var_27 |= ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)176)), (var_6)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) + (6430013188487636720ULL))))));
}
