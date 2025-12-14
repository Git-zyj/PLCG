/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27481
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) min((((/* implicit */int) (short)-13)), (-50236873)))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12020083406498023018ULL)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-50236873) : (((/* implicit */int) (short)18364))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-561))) + (var_13)))))));
                var_15 -= ((_Bool) (+(((((/* implicit */_Bool) 361447681U)) ? (((/* implicit */int) (short)18364)) : (((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_11 [(short)8] [(short)8] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)560))) < (-4726247982015326223LL)))) : ((-(((/* implicit */int) (short)560))))))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (!(var_9)))) * ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_17 = ((((/* implicit */_Bool) 2438465019U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((17803630973848665262ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-536))))))) : (var_13));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (((-(361447681U))) / (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
                                var_18 = ((/* implicit */short) (~((((-(var_0))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_5))))))));
                            }
                            var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) 17384518422291708377ULL);
    var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-558))))) | ((~(-4726247982015326223LL))))));
}
