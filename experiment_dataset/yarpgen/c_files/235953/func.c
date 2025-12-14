/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235953
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
    var_11 = ((/* implicit */unsigned long long int) 2347437632718678593LL);
    var_12 -= ((/* implicit */signed char) max((1919031426U), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) ((((/* implicit */_Bool) 5282807499012951290LL)) || (((/* implicit */_Bool) -727865942))))))), (((/* implicit */int) (short)5304))));
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((-5282807499012951291LL) >= (5147981789654371662LL)));
                    var_14 = ((/* implicit */unsigned long long int) (-(1919031426U)));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0] [i_3] [i_1] [i_3] = ((((/* implicit */int) (((-(5282807499012951266LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3])))))) - (((/* implicit */int) min((((/* implicit */short) ((signed char) arr_5 [i_0 - 2] [i_0]))), ((short)-5322)))));
                    arr_13 [i_3] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1]);
                    var_15 ^= ((/* implicit */short) arr_11 [i_1] [i_1] [i_1]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (short i_5 = 4; i_5 < 12; i_5 += 4) 
        {
            {
                var_16 = -727865942;
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5 - 2])) ? (arr_14 [i_5 - 2] [i_5 - 2]) : (arr_14 [i_5 - 2] [i_5 - 2]))));
                            arr_23 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) min((5282807499012951266LL), (((/* implicit */long long int) (signed char)96))));
                            arr_24 [i_6] [i_5] = ((/* implicit */long long int) arr_11 [i_5] [i_5 - 1] [i_5 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
}
