/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212881
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            var_16 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (var_4)))) ? (max((var_1), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-3015804098363166459LL) : (-9223372036854775784LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-3015804098363166481LL)))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (3015804098363166458LL)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((((/* implicit */_Bool) 2097151)) ? (var_3) : (((/* implicit */unsigned long long int) -2737108198068982031LL)))) : (((/* implicit */unsigned long long int) 3015804098363166468LL)))))))));
            arr_7 [i_1] [i_0] [i_0] = var_7;
        }
        arr_8 [i_0] = ((/* implicit */long long int) var_15);
        arr_9 [i_0] = ((/* implicit */_Bool) var_5);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                {
                    arr_16 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 646830027))));
                    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (var_2))) : (((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */int) arr_14 [i_0] [i_2] [i_3])))))) <= (((/* implicit */int) ((arr_2 [i_3 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_0] [i_3]))))))) ? (min((((/* implicit */long long int) var_1)), (arr_6 [i_3 - 1] [i_2 + 3] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -173668041)) ? (var_0) : (((/* implicit */long long int) (-2147483647 - 1)))))) ? ((~(-2456943605896587439LL))) : (((((/* implicit */_Bool) 13029269765509059676ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41381))) : (-3015804098363166477LL)))))));
                    arr_17 [i_0] [i_3] [i_3] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_12)) : (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0])))))))) ? (arr_3 [i_3]) : (((((/* implicit */int) (!(arr_4 [i_0])))) | ((+(((/* implicit */int) var_13)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_22 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) -9044026284487825942LL))));
        var_20 *= ((/* implicit */unsigned char) arr_21 [i_4]);
    }
    var_21 = max((min((((/* implicit */long long int) var_15)), (var_10))), (((/* implicit */long long int) ((((((var_2) / (((/* implicit */int) var_8)))) + (2147483647))) << (((((var_1) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (1095719918U)))))));
}
