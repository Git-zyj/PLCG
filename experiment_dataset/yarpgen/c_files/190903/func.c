/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190903
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
    var_17 = ((((/* implicit */int) var_10)) * (((648445662) & (((/* implicit */int) ((((/* implicit */_Bool) 11858930291792974323ULL)) && ((_Bool)1)))))));
    var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_15))))))) ^ (var_2)));
    var_19 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_3))), (arr_5 [i_0] [i_0] [(unsigned short)10] [13ULL])))) || (((/* implicit */_Bool) ((unsigned short) ((short) arr_5 [i_2] [i_2] [i_1 - 1] [i_0]))))));
                            var_21 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_1 - 1] [0LL] [6LL])) | (arr_5 [i_0] [(short)4] [i_0] [i_3])))) % (((var_5) - (((/* implicit */unsigned long long int) 15U))))))));
                            var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3]))) <= (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (-467178020933637912LL))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((3884273348622915109LL), (-3884273348622915114LL))))));
            }
        } 
    } 
}
