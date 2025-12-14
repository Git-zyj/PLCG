/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42141
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_1 [i_0 + 1] [i_1 + 2])))), (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1] [i_1 - 1]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min(((+(var_1))), (((/* implicit */unsigned int) var_12))));
                                arr_14 [i_0] [i_1] [i_2] [0] [i_4] [i_3] [i_1] = ((/* implicit */unsigned short) (-((~(((((/* implicit */_Bool) arr_12 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21893))) : (var_1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (short i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)8)) != (((/* implicit */int) (signed char)-64)))))));
                            arr_24 [i_5] [13ULL] [i_5] [i_8] = ((/* implicit */short) ((_Bool) -4301584760763289559LL));
                            var_22 = ((/* implicit */signed char) arr_18 [i_5]);
                            arr_25 [(signed char)1] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(var_1)))))) ? ((-(-4301584760763289559LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_21 [i_5] [11ULL] [i_7] [i_8]) : (((/* implicit */unsigned int) arr_15 [i_8])))))))));
                        }
                    } 
                } 
                arr_26 [i_5] = max((((/* implicit */unsigned long long int) (_Bool)1)), (15477747621101761096ULL));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned char) 0U)))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) 12311797423945607878ULL);
}
