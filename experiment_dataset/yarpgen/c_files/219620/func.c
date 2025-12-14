/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219620
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((((+(arr_2 [i_0] [i_0]))) - ((+(var_10))))) : ((-2147483647 - 1))));
                arr_8 [i_0] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 + 1] [i_0]) <= (arr_1 [i_1] [i_0]))))) == ((~(((((/* implicit */long long int) arr_5 [i_0] [i_1])) & (arr_4 [i_0]))))));
            }
        } 
    } 
    var_11 |= ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3774236011U)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_5))))) / ((+(3774235993U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1LL)))))));
    var_12 = ((/* implicit */unsigned int) max((0LL), (((/* implicit */long long int) (-(((/* implicit */int) ((24868044) == (((/* implicit */int) (signed char)-127))))))))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 16; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned char)7)), (649560573))))))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max(((((~(var_2))) << ((((~(((/* implicit */int) var_5)))) - (17828))))), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_13 [i_2])))) - (((/* implicit */int) arr_17 [14] [i_5] [i_4] [14]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 15; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            {
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1] = ((/* implicit */_Bool) arr_24 [i_4] [i_3] [i_4]);
                                var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_26 [i_4 + 1])) - (((/* implicit */int) arr_26 [i_4 + 1]))))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_20 [16] [i_3] [16]))))) >> (((((/* implicit */int) ((short) (signed char)-120))) + (132))))) - (((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [14U] [i_3] [i_4]))))) >> (1LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_2] [i_2] = 3774236029U;
    }
}
