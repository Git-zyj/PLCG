/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228607
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
    var_15 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_6)))) + (min((1623365470), (1623365474)))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_9)))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-32763))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [i_0] [i_4]), (((/* implicit */short) var_11)))))))) : (min((arr_4 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_3])) : (-1))))))));
                                arr_15 [(unsigned short)0] [i_0] [i_0] [i_0] [(unsigned short)6] [(unsigned short)0] = ((/* implicit */short) (+(((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 + 4] [i_0 - 1] [i_0] [i_0])) * (((/* implicit */int) (!((_Bool)1))))))));
                                var_17 += ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) -25)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))) != (arr_3 [i_0] [i_1])));
                                var_18 = ((/* implicit */unsigned long long int) min((1381771324U), (((/* implicit */unsigned int) -1298328257))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) arr_8 [i_0] [7U] [(signed char)3] [11] [i_1] [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_5] [(unsigned char)10] = ((/* implicit */int) arr_6 [i_6] [i_0] [i_0]);
                            arr_22 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_13 [(signed char)6] [i_0] [i_0 + 3] [i_0] [i_0 + 3])), (((((/* implicit */int) arr_13 [i_1] [i_0] [i_0] [i_0] [i_0 + 2])) + (((/* implicit */int) var_1))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((min((((/* implicit */long long int) arr_17 [i_0 - 1] [i_1] [i_5])), (-6862025506421792742LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) ((((/* implicit */int) arr_0 [i_6] [i_6])) != (((/* implicit */int) var_0)))))))))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_3), (((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_1] [i_1] [i_6])))), (((/* implicit */unsigned short) min((arr_10 [i_6]), (arr_0 [i_6] [2LL]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
