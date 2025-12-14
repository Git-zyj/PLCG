/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203518
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)29482)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_3]) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])))))))) ? (((2278372828928843047ULL) ^ (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (short)-23220)) != (((/* implicit */int) arr_1 [i_3]))))))))));
                            var_12 += ((/* implicit */int) ((unsigned short) (+(arr_0 [i_1] [i_0]))));
                            var_13 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) << ((((~(2047U))) - (4294965224U))))) == (((((/* implicit */int) ((_Bool) var_6))) / (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                var_14 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (short)23225)) : (((/* implicit */int) arr_1 [i_0])))) << (((var_7) - (15963035374570669058ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) var_7);
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-23220))));
                }
            }
        } 
    } 
    var_17 = (-(var_3));
    var_18 = var_7;
}
