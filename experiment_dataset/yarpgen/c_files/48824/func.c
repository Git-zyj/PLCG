/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48824
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) var_8);
                arr_5 [i_1] [i_1] = (~(-914214410));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4294967287U)) ? ((((_Bool)1) ? (-3099510900778809242LL) : (((/* implicit */long long int) -914214411)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65530)))))))));
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_6) >= (((/* implicit */int) var_1)))))) * (min((1405359082U), (((/* implicit */unsigned int) 67108863))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) ((long long int) (unsigned short)2638));
    }
    var_11 = ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)9)), ((-(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) (~(min((-9223372036854775796LL), (((/* implicit */long long int) -536870912))))))) : (var_2)));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -536870910)) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49991)))))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */int) (unsigned short)8)) : (536870903)))))) & (((/* implicit */unsigned long long int) -914214410)))))));
                                arr_25 [i_7] [i_3] [i_3] [(signed char)20] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32119))));
                                var_14 -= ((/* implicit */_Bool) (+(min(((-2147483647 - 1)), (((/* implicit */int) (short)-27636))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)15524)))))))));
}
