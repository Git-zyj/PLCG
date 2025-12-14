/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247281
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_9 [i_1] [i_2 + 3] [i_3] [i_3]), (((/* implicit */unsigned char) var_3)))))));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 3450200163U))));
                            arr_11 [i_2] [i_2] [i_2] = min(((-(arr_1 [i_0] [i_1]))), (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_3] [i_2 + 2] [i_2 + 3])) != ((+(((/* implicit */int) (unsigned short)4612))))))))));
                        }
                    } 
                } 
                var_22 = arr_1 [i_1] [i_0];
                arr_12 [i_0] [i_1] [i_1] = 0U;
                var_23 = (~(arr_8 [8U] [i_0] [i_0] [i_1]));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (unsigned char)62);
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16777152U)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | ((~(2603060379473378327ULL)))))));
}
