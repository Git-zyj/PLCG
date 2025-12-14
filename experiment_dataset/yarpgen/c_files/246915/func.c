/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246915
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)26771))))), (max((-8780114526307011528LL), (((/* implicit */long long int) (short)-26771))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (short)-26789)), (var_4))) - (-498632142))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-2147483647 - 1)))));
                            arr_9 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(min((((/* implicit */int) var_9)), (0))))))));
                            var_22 = ((/* implicit */_Bool) 1289934141);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((min((((((/* implicit */_Bool) (signed char)46)) ? (1421371243U) : (((/* implicit */unsigned int) -1458703820)))), (((/* implicit */unsigned int) (short)-26772)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-29545))))))))));
    var_24 = ((/* implicit */_Bool) (~((~(612738243)))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_14)) : (612738251)))) * (max((5150911203165975202ULL), (((/* implicit */unsigned long long int) (short)-32048)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * ((+(((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 4; i_4 < 8; i_4 += 3) 
    {
        for (short i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                {
                    arr_18 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_14 [i_4 - 3] [i_5 + 2])))) ? (((((1707585149) == (-2147483641))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_4])))) : (arr_7 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_5 + 3] [i_4 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6629)) ? (((/* implicit */int) (short)-8304)) : (((/* implicit */int) (short)-32006))))) ? (max((var_3), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)14]))))))));
                    arr_19 [i_4] [i_4] [i_4] [i_6] |= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_16 [i_5] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) (_Bool)0)) : (min((((/* implicit */int) arr_5 [i_4] [12LL])), (-1373510375)))))));
                }
            } 
        } 
    } 
}
