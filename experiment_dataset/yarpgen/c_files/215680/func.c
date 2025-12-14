/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215680
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
    var_11 = ((/* implicit */signed char) ((var_8) ? ((-(5036894178229271161ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)115)), (141113362605117602LL))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) -141113362605117579LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (((unsigned int) (!(((/* implicit */_Bool) (unsigned char)142))))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 + 1])) << (((((/* implicit */int) arr_11 [i_2 - 1])) - (58710))))))));
                                var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44150))) : (-141113362605117602LL)));
                                arr_12 [i_3] [i_3] [i_2 - 1] [i_1] [i_1] [i_1] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) & (1123932419527147966ULL)));
                                var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_5 [(unsigned short)12] [i_2 - 1] [i_2 - 2] [i_3])) - (((/* implicit */int) arr_5 [i_0] [i_2 - 1] [i_2] [i_3]))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) var_5))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) -141113362605117603LL)))));
    var_18 = ((/* implicit */int) min((var_1), (((/* implicit */unsigned long long int) var_8))));
}
