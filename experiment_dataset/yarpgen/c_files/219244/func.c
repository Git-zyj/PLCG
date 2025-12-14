/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219244
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_3 [i_0])))))))) * (var_5)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_10 = ((/* implicit */int) (+(((((/* implicit */_Bool) 11632728254662365558ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6814015819047186067ULL)))));
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (~(28479720964623022ULL))))));
                    arr_7 [i_1] [i_1] |= ((/* implicit */signed char) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
                }
                var_12 = 3397655354344512520ULL;
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((6814015819047186080ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (15049088719365039095ULL)))))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)206)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [6] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)50)) || (((/* implicit */_Bool) (unsigned short)41785)))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)23757)) : (((/* implicit */int) var_0))))))) : (arr_2 [i_5])));
                    var_16 = ((/* implicit */unsigned int) ((var_9) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_6 [i_4] [i_4] [i_4]))))));
                    arr_17 [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_8)), (((((((/* implicit */_Bool) 15049088719365039097ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) : (1610869059U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                }
            } 
        } 
    }
    var_17 = var_6;
}
