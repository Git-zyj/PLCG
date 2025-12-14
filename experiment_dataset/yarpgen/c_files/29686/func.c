/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29686
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))));
                            var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3 + 2])) ? (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (17354823577670417177ULL))) : (((/* implicit */unsigned long long int) 1758470746U)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-20)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (-1922010177999585215LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2] [i_3 + 2])) <= (((/* implicit */int) (unsigned char)78))))))))));
                        }
                    } 
                } 
                var_14 = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1])) ? (max((((/* implicit */int) (unsigned short)57845)), (((var_4) ? (((/* implicit */int) arr_10 [(short)12] [i_0] [i_0] [(unsigned char)11] [i_1 + 1] [i_1])) : (var_0))))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (unsigned short)30158)))));
                var_15 = ((/* implicit */signed char) 1394470192);
                arr_12 [i_0] [i_1] [12LL] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) (unsigned short)12972))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1758470754U)) ? (min((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))))))))));
    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((max((((/* implicit */unsigned int) var_0)), (2002667877U))) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)212)) - (((/* implicit */int) (unsigned char)233))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32752))))))))));
}
