/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205958
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned long long int) var_1);
                arr_6 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_1 [i_0 + 2])))) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (unsigned char)225))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned long long int) (~(arr_9 [i_2] [i_3])))))));
                    var_22 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), ((unsigned short)6)))) ? ((-(9223372036854775807LL))) : ((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3] [i_4] [i_2])))))))), (3674576468194855990ULL));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_0), ((((!(((/* implicit */_Bool) 3674576468194855990ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16171560597323066608ULL)) ? (-4611686018427387904LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) 2305843009213693952ULL)) ? (((/* implicit */unsigned long long int) 2716505772U)) : (var_0)))))));
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) var_6);
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? ((+(((/* implicit */int) (unsigned short)6)))) : (((/* implicit */int) var_9))));
    }
}
