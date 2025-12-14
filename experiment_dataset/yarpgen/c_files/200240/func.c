/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200240
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((-1750306604) | (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2]))))))))));
                            var_12 = ((arr_0 [i_0] [i_0]) != ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3])))));
                        }
                    } 
                } 
                arr_10 [i_1] = ((/* implicit */_Bool) ((arr_2 [i_0 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)30403), (((/* implicit */short) min((arr_6 [i_0] [i_1] [i_1] [i_0 + 1]), (var_8))))))))));
                var_13 = ((/* implicit */unsigned short) ((unsigned int) arr_7 [4] [i_1]));
                arr_11 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) (~(arr_7 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((((var_4) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)105)))) != (((/* implicit */int) var_0)))) ? (((/* implicit */int) ((_Bool) max((var_8), (var_4))))) : (((((_Bool) (signed char)92)) ? (-1750306587) : (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_9)))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? ((((-(var_2))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (var_2)))))));
    var_16 = ((/* implicit */long long int) ((1750306585) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_4))))))))));
}
