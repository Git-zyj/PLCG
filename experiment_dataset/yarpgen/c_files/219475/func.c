/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219475
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((var_0), (((/* implicit */long long int) var_15)))))));
    var_21 = var_2;
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_22 -= ((/* implicit */_Bool) 2147483647);
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_8))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (+(min(((-(((/* implicit */int) (signed char)-113)))), (min((-2147483647), (((/* implicit */int) var_18))))))));
    }
    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) (_Bool)1);
        arr_12 [i_3] |= ((/* implicit */unsigned char) var_12);
        arr_13 [11LL] [(_Bool)1] |= ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_0 [i_3 + 1])))), (((/* implicit */int) min((((/* implicit */signed char) var_10)), ((signed char)112))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_25 [i_4] [i_4] [i_6] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */long long int) arr_17 [i_3 - 1] [i_4])), (var_0))));
                                arr_26 [i_3] [i_4 - 2] [i_4 - 2] [i_6] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_19)), (((arr_19 [i_4 + 1] [i_6 - 1] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 3] [i_6 + 1])))))));
                                var_26 ^= ((/* implicit */unsigned char) max(((-(max((var_8), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) ((unsigned char) (_Bool)1))), (var_13))))));
                            }
                        } 
                    } 
                    var_27 -= ((/* implicit */short) var_18);
                    var_28 = ((/* implicit */unsigned int) ((10329168038349840143ULL) % (((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 328746377U)))))))))));
                    arr_27 [i_4] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_4 - 3] [i_4 - 3] [i_3 + 2])) ? (arr_7 [i_4 - 2] [i_4 - 2] [i_3 + 1]) : (((/* implicit */unsigned long long int) 328746390U)))) > (arr_7 [i_4 - 2] [i_4 + 1] [i_3 - 1])));
                }
            } 
        } 
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        arr_30 [i_8 - 1] [i_8] = ((/* implicit */int) var_5);
        var_29 = ((/* implicit */_Bool) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) * (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_19))))))) || (((/* implicit */_Bool) var_8))))));
        arr_31 [i_8 - 1] [i_8 - 1] = ((/* implicit */short) min(((-(((/* implicit */int) arr_16 [(unsigned char)6])))), (((/* implicit */int) var_12))));
        arr_32 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned short) var_5))))), ((-(328746377U))))))));
    }
    var_30 -= ((/* implicit */_Bool) var_17);
}
