/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233641
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
    var_18 = ((/* implicit */unsigned char) var_3);
    var_19 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) != (0U))))))));
    var_20 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (arr_4 [i_1]))))))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    arr_8 [i_0] [i_2] [i_2 + 2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */unsigned long long int) arr_5 [(unsigned char)12] [(unsigned short)9] [i_2])) < (0ULL))) || (((/* implicit */_Bool) ((short) arr_5 [i_0] [(_Bool)1] [i_0]))))));
                    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((2628012516U) | (2628012516U)))) & ((~(arr_0 [i_2])))))) ? (((((/* implicit */_Bool) ((4285248737U) & (((/* implicit */unsigned int) -134217728))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) : (max((var_0), (((/* implicit */unsigned long long int) var_17)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) ^ (arr_5 [i_0] [i_2 - 1] [i_2]))))));
                    var_24 = ((/* implicit */long long int) arr_6 [i_2] [i_1 - 2] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 36028796482093056LL)) ? (10792547555114466217ULL) : (16794399681469286179ULL)))) ? (((/* implicit */long long int) (~(arr_6 [i_2] [i_1 + 2] [i_4 - 2])))) : (((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [i_1] [i_0] [i_3]))) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                                arr_14 [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((short) (_Bool)0));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
