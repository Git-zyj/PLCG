/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197164
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (+((-(var_8))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) << (((arr_6 [i_2 + 1] [i_1] [i_1 + 1]) - (3243503464U)))))) ? ((-(arr_6 [i_2 + 1] [i_2 + 1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    var_11 += ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [8])) > (((/* implicit */int) arr_4 [i_1])))))) | (arr_6 [i_0 - 2] [i_1 - 3] [i_0 - 2]))), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((((/* implicit */int) arr_4 [i_1 + 2])) / (((/* implicit */int) arr_0 [i_0]))))))), (var_2)));
                    arr_10 [(signed char)5] [i_0] [(signed char)5] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_8))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_12 ^= ((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) (unsigned char)212))))) == ((~(var_1))));
    var_13 = ((/* implicit */_Bool) (unsigned short)13817);
    var_14 = ((/* implicit */long long int) (short)15074);
}
