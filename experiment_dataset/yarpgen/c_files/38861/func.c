/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38861
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) (_Bool)0);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1175583445)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        arr_4 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((((/* implicit */_Bool) 881789433)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_7 [i_0] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_1 [i_1 + 1] [i_0]))));
            arr_8 [(signed char)8] |= ((/* implicit */unsigned short) (+(0U)));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_5 [(signed char)1] [i_1] [i_1 - 1])));
            arr_10 [i_0] [i_0] = ((/* implicit */signed char) (!(var_4)));
        }
    }
    for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967276U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) && (var_10)))), (var_0)))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_4)) & (((/* implicit */int) arr_12 [i_2] [i_2 - 1])))), (((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))))) : (((unsigned int) max(((unsigned short)57457), (((/* implicit */unsigned short) arr_11 [i_2] [i_4]))))))))));
                    arr_20 [(unsigned short)5] [(unsigned short)5] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_4))))) + (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_14 += ((/* implicit */_Bool) var_8);
                                arr_26 [i_2] [i_2] [i_3] [i_2] [i_4] [(signed char)9] [i_6] = ((((/* implicit */int) max(((unsigned short)29241), (var_2)))) - (((int) var_9)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_2] = ((/* implicit */signed char) max(((unsigned short)33391), (((/* implicit */unsigned short) (signed char)-51))));
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) % (var_1))) & (var_1)));
    }
    var_16 -= (+(2147483647));
    var_17 = ((/* implicit */signed char) min((0U), (((/* implicit */unsigned int) (!((_Bool)1))))));
}
