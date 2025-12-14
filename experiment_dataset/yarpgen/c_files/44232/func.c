/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44232
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) 262112U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 262143ULL)) && (((/* implicit */_Bool) (short)-1060))))) : (((/* implicit */int) (unsigned short)15436))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27))) - (262142ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [10ULL] [i_1]))) + (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                var_11 -= 3571291748U;
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) var_6)), (1050533849)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_3] [i_0] [i_3] [8LL] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned short)53493)) : (((/* implicit */int) (_Bool)0))));
                                var_12 = var_5;
                                arr_17 [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)27442)) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (short)-28)), (-1))), ((~(((/* implicit */int) (short)-30))))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_3 + 2] [i_3] [i_2 + 1])), (((unsigned long long int) (unsigned short)64341))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 -= ((/* implicit */unsigned short) ((unsigned int) -3860534291276713624LL));
    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18446744073709289446ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1599184263)), (614229072U))))))) || (((/* implicit */_Bool) 12U))));
}
