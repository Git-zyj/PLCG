/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36531
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) -7531707927589997575LL))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1408467469) & (-1408467469)))) ? (arr_0 [i_0]) : (((long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) (unsigned short)54460))))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54460))) ^ (arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) max((((1408467465) | (((/* implicit */int) var_0)))), ((~(((/* implicit */int) (signed char)0)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))), (max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            {
                var_16 = ((/* implicit */signed char) (!(var_8)));
                /* LoopNest 3 */
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                arr_16 [i_3] [3LL] [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_13);
                                var_17 ^= ((/* implicit */unsigned char) max((((((arr_6 [i_1]) + (((/* implicit */unsigned long long int) -5213394383467359254LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_3] [i_4] [i_5]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_1 + 2] [i_2 + 3] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
