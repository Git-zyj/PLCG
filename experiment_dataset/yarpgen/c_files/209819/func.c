/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209819
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
    var_13 += (short)5639;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5639)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((/* implicit */int) max(((short)-5621), ((short)(-32767 - 1)))))))) ? (((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)24206)))) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)5639)) || ((_Bool)1)));
                                arr_16 [i_3] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-5639)) ? (444176479) : (((/* implicit */int) (short)-5644))))));
                            arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) >> (((((/* implicit */int) (unsigned short)26696)) - (26673))))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])))))))) ? ((-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_6 [i_1 - 1] [i_0]))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_1] [i_5] [i_1 - 1] [i_1 - 1] [i_1])), (arr_11 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */short) arr_9 [i_6] [i_5 - 2] [i_1 - 1] [i_1] [i_0] [i_0])), (arr_7 [i_0] [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)5609))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_10))));
}
