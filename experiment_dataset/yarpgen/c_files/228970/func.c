/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228970
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
    var_10 = ((/* implicit */unsigned short) (-(797852117U)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned char)7])) ? ((~(min((10484827415879391642ULL), (10484827415879391617ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -465344797)) < (7961916657830159981ULL))))))))));
                    var_12 = ((/* implicit */unsigned char) arr_4 [0U] [i_0]);
                    arr_7 [i_2] [i_1] [10ULL] = ((/* implicit */int) (+(((((/* implicit */_Bool) 1761799661U)) ? (((((/* implicit */unsigned int) 2147483647)) | (238502315U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2147483647))))))));
                    var_13 -= ((/* implicit */_Bool) (+((-(var_8)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) ((unsigned long long int) 4056464957U));
}
