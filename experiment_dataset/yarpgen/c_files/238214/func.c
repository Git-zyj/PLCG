/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238214
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
    var_13 += ((/* implicit */int) var_2);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) (_Bool)0))))) && (((/* implicit */_Bool) (short)-3740)))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (3446475555U)))) & (((11246255258942453576ULL) / (((/* implicit */unsigned long long int) 1256356203)))))) : (((/* implicit */unsigned long long int) var_10)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_15 = (!(((/* implicit */_Bool) -6981030550404135978LL)));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) 2161727821137838080ULL))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_17 = ((((/* implicit */int) var_11)) & (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_4 [i_0]))))));
                            var_18 = (((~(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((1256356203) > (arr_2 [i_0] [i_0 - 4])))));
                            var_19 = ((/* implicit */unsigned long long int) var_11);
                            var_20 = ((/* implicit */signed char) ((34359737856LL) << (((/* implicit */int) (_Bool)0))));
                        }
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */_Bool) (-(4294967295U)));
        arr_14 [i_0] = ((/* implicit */unsigned long long int) var_1);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */_Bool) arr_15 [i_5]);
        var_23 = ((/* implicit */unsigned char) max((arr_16 [i_5]), (((((/* implicit */_Bool) 221953521)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_16 [i_5])))));
    }
    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)71))) - (((((((/* implicit */_Bool) arr_19 [i_6])) ? (9223372036854775802LL) : (((/* implicit */long long int) var_9)))) - (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), (var_7)))))))));
        var_25 = ((/* implicit */_Bool) var_0);
    }
}
