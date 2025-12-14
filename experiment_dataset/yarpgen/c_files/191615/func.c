/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191615
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((((~(var_10))) ^ (((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */int) var_4))))))) : (max((var_10), (((/* implicit */unsigned long long int) var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) >= (((((/* implicit */int) arr_12 [i_2] [i_4 + 1] [7] [i_4 - 1])) >> (((/* implicit */int) arr_12 [i_2] [i_4 + 1] [i_4] [i_4 - 1]))))));
                                arr_14 [i_2] [i_2] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) max((arr_3 [i_0] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_7))))) ? (((var_7) ? (((/* implicit */int) (!(arr_10 [0ULL] [i_2] [i_1])))) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                                var_14 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_4))) || ((!(var_4)))));
                                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)32767)) + (((/* implicit */int) (short)-15663)))) >= (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_4] [i_4 - 1] [i_4 + 1] [i_0]))));
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0)))))))) % (-5415408815619999843LL));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)65528)), (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) 565205754742888034LL)) ^ (10812357119900638226ULL)))))));
}
