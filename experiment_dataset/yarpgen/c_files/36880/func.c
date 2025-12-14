/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36880
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 3436618946U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) (-(((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                var_15 = ((/* implicit */short) (+(((/* implicit */int) (short)8192))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)38))) : (var_12))));
                    var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (8374999550941724886LL))));
                    var_18 -= ((/* implicit */unsigned int) (short)-8202);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((+(1384627634U))) : (((/* implicit */unsigned int) (-(1269952840))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)0)))) : (((unsigned long long int) (!(((/* implicit */_Bool) 844970995)))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_16 [i_3] [i_3] [i_4] = min((1721899531U), (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-90)))) / (((((/* implicit */int) (signed char)-49)) - (((/* implicit */int) (_Bool)1))))))));
            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 15032228027959142162ULL))));
        }
        var_21 = ((_Bool) 1756210881U);
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) ((unsigned char) (short)13063))));
    }
}
