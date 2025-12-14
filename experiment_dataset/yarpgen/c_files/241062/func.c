/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241062
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(9237136725803067044ULL)));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */int) (signed char)60)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) ((8734647U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))))) : ((-(((/* implicit */int) (short)14534))))));
                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned char) (_Bool)1))))) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : ((~(((((/* implicit */_Bool) var_13)) ? (13755485286200335571ULL) : (((/* implicit */unsigned long long int) 8734648U))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) var_16);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)-50)) ? (-2147483628) : (((/* implicit */int) var_9))))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((18243254991774035393ULL) > (((/* implicit */unsigned long long int) 2147483628))))) | (((/* implicit */int) arr_4 [i_2]))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_15 [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(-6551968869423564446LL))))));
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned short) var_15);
        }
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-50)) % (-395148820)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_8 [16U]))))));
        arr_17 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_2]))));
    }
}
