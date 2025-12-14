/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206266
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_7)), (((long long int) (_Bool)1)))), (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    var_16 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -1292727085893681233LL)) ? (max((((/* implicit */long long int) (unsigned short)64714)), (1292727085893681232LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                            {
                                arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_3)) ? (1292727085893681233LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))) != (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)822))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : ((-(3896711072114427133LL)))));
                                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (unsigned short)64713)))));
                            }
                            var_18 ^= ((/* implicit */unsigned char) ((int) (~((~(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned short)822)))), (((/* implicit */int) (unsigned short)830))));
                arr_19 [i_0] = ((/* implicit */unsigned char) var_10);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 4; i_5 < 19; i_5 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 3]))) / (arr_20 [i_5 + 3])))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (arr_21 [i_5 - 4] [i_5])))))))));
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 16814819686510363130ULL))))) << (((var_8) + (195542602164727943LL)))))) ? (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (short)9284)))))) : (((-490171103433202607LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-32760)))))));
    }
}
