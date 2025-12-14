/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232651
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (~(((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) arr_9 [i_0] [i_1 - 1] [i_2] [i_3] [(_Bool)1] [i_4]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)53)), (arr_10 [i_0] [i_3] [i_2] [0ULL] [0ULL] [i_4] [(unsigned char)1]))))) ^ (max((8796059467776ULL), (((/* implicit */unsigned long long int) (unsigned char)28))))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_1 + 1] [i_1 + 1]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_1 - 1])) > (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 1])))))));
                                arr_13 [i_0] [i_0] [i_0] [(unsigned short)12] [i_0] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3])), (8796059467777ULL)))))));
                                var_13 = ((/* implicit */_Bool) (short)-17856);
                            }
                        } 
                    } 
                } 
                arr_14 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
                var_14 ^= ((/* implicit */int) (signed char)-4);
                arr_15 [2LL] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */int) (short)-32757)) * (((/* implicit */int) (unsigned char)137)))) % (((int) var_4))))), (((((/* implicit */_Bool) 18446735277650083853ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))));
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 1571522279)), (((unsigned long long int) (-(var_1))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((((((-6670729127182263606LL) + (9223372036854775807LL))) >> (((8796059467762ULL) - (8796059467729ULL))))) | (((/* implicit */long long int) ((/* implicit */int) max(((short)-22217), (((/* implicit */short) (unsigned char)255)))))))), (min((var_2), (((/* implicit */long long int) -1945208694)))))))));
}
