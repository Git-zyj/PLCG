/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235531
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned int) 1119823027243266108ULL)) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 + 3] [i_2 + 2] [i_2 + 3])) : (var_4))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)24)))))));
                    var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) ? (724050574991577407ULL) : (((/* implicit */unsigned long long int) -828908210))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [i_2 - 2])) ? (arr_4 [i_1] [i_2 + 2] [i_2 - 1]) : (arr_4 [i_2] [i_2 + 3] [i_2 - 1])))) : ((~(1119823027243266108ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 &= ((/* implicit */short) (unsigned short)61065);
                                var_16 *= arr_8 [i_1] [i_1] [i_1] [i_2];
                                arr_16 [i_0] [i_0] [i_2 - 2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4]))))) * (((/* implicit */int) ((var_2) <= (((/* implicit */long long int) 2450599096U))))));
                                var_17 ^= ((/* implicit */_Bool) arr_3 [i_1] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 3482735888U)), (5638699397335780142ULL)));
    var_19 ^= ((/* implicit */_Bool) var_0);
}
