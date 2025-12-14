/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192227
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
    var_10 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))) ? ((~(((/* implicit */int) ((_Bool) 929679191079382908ULL))))) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) 929679191079382908ULL);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_11 = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2558))) : (17517064882630168693ULL));
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) var_6);
                        arr_14 [i_1] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) var_9);
                    }
                    var_12 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)33815)), ((~(929679191079382921ULL)))))));
                }
            } 
        } 
    } 
}
