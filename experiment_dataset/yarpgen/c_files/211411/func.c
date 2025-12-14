/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211411
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_0))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32767)) | (-1179367653)));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0 - 3])))) << (((/* implicit */int) ((360992706480760790LL) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2])))))))))));
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_1])), (3267434873U)))))) || (((/* implicit */_Bool) arr_1 [i_1] [i_0]))));
        }
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) min((((((9007199254740991ULL) ^ (((/* implicit */unsigned long long int) 2546099095526841591LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65509)))))), (var_4)));
        var_15 -= ((/* implicit */long long int) (unsigned short)65493);
        var_16 *= ((/* implicit */unsigned char) ((unsigned long long int) (short)-1));
    }
    var_17 = ((/* implicit */short) var_0);
}
