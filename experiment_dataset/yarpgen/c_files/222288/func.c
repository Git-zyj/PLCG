/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222288
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_12 = ((((/* implicit */_Bool) (unsigned short)7936)) ? (((/* implicit */int) (unsigned short)55758)) : (((/* implicit */int) (unsigned short)7936)));
                        arr_11 [i_0] [i_1] [(short)4] [(unsigned char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_2)))) ? (((/* implicit */int) max(((unsigned short)57623), (((/* implicit */unsigned short) var_10))))) : (((((/* implicit */int) (unsigned short)17)) % (((/* implicit */int) (short)21464))))))) ? (((/* implicit */int) ((unsigned short) 6366300189397496975LL))) : (((/* implicit */int) ((_Bool) max(((signed char)1), (((/* implicit */signed char) (_Bool)1))))))));
                        var_13 = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 3968U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7936)))) : (1096838391));
                        arr_12 [i_0] [7U] [4U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (var_4)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_0)))))))));
                    }
                    var_14 = ((/* implicit */unsigned int) var_0);
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65518))));
                    arr_14 [i_2] [i_2 - 1] [(short)9] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned short)61402)))) < ((-(((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (var_11)));
}
