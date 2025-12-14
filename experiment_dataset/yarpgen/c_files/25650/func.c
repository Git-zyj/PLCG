/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25650
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
    var_17 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned int) ((unsigned short) ((int) var_4))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [(_Bool)1] [i_2] [i_2] [i_2] [6LL] |= ((/* implicit */unsigned int) ((short) ((signed char) 6622417763099517109LL)));
                            var_18 = (-(((/* implicit */int) min(((unsigned char)32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0] [i_0])))))))));
                            var_19 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)5)), (3056238456U))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1600234426)), (10979069197789912072ULL)));
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] [i_4 + 4] [i_5] = ((/* implicit */unsigned int) ((unsigned short) (signed char)51));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
                            {
                                var_21 = (~(((/* implicit */int) (_Bool)1)));
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] = ((short) (signed char)-67);
                            }
                            arr_21 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned short) max((max((var_5), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)-51)), ((unsigned short)3))))));
                            arr_22 [i_0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((~(var_9))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 *= ((/* implicit */long long int) ((short) max(((-(((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) var_0)))));
}
