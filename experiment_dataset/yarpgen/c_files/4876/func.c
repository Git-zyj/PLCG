/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4876
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
    var_15 *= var_7;
    var_16 *= var_7;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                    arr_7 [i_0] [i_0 - 2] = ((/* implicit */short) (signed char)111);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_1] [i_1 + 2] [i_2] [(signed char)8] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1 + 2] [i_2 + 1]))));
                                var_18 *= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)8] [i_2])) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1] [i_0] [i_4 + 2] [i_0] [i_4])) : (((/* implicit */int) (short)5178))))) ? (((/* implicit */int) (short)5195)) : (((((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] [i_1])) + (((/* implicit */int) var_4)))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min(((short)17128), ((short)-5201))), (min(((short)-24937), (((/* implicit */short) (signed char)-127))))))) || (((/* implicit */_Bool) arr_0 [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min(((short)-5194), ((short)-5178)));
                                var_21 = ((/* implicit */signed char) (short)-5195);
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((+(((/* implicit */int) min((arr_5 [i_0] [i_0] [i_6]), (arr_2 [i_1] [i_2])))))) - (((((((/* implicit */int) (signed char)-51)) == (((/* implicit */int) (signed char)99)))) ? (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_4)))) : ((~(((/* implicit */int) (signed char)-100)))))))))));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)-5196)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (short)5204)))) : (((((/* implicit */int) min((arr_9 [i_0] [i_1] [i_1 - 1] [i_2] [i_5] [i_6]), ((short)(-32767 - 1))))) + (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))));
                                var_24 = ((/* implicit */short) arr_13 [i_5 - 1] [i_2 + 4] [i_1 - 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
