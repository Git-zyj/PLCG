/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222892
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
    var_15 = ((((/* implicit */int) (short)-26678)) > ((-(((/* implicit */int) (short)-31899)))));
    var_16 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)32768)))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32797))) - ((-(17745877681360858899ULL))))) - (17745877681360891684ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_4 [i_1] [i_0]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [15U] = ((/* implicit */_Bool) ((((((/* implicit */int) var_1)) | (((/* implicit */int) var_12)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1] [i_2])) + (2147483647))) >> (((var_3) + (8582459450325224527LL)))))))))));
                                arr_13 [i_0] [i_3] [i_2] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */unsigned int) min((3898533192400157769LL), (((/* implicit */long long int) arr_5 [i_1 - 3] [i_3 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
