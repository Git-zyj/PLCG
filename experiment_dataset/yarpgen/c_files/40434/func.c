/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40434
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -6890322481359768204LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24243))) : (491520U)))) + (max((6724684301531874621LL), (((/* implicit */long long int) (_Bool)0))))));
    var_19 = ((/* implicit */signed char) ((unsigned char) (((_Bool)1) ? (((491514U) << (((2147483647) - (2147483629))))) : (((/* implicit */unsigned int) (~(var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((((-4323961401558821078LL) / (((/* implicit */long long int) 2147483647)))), (((/* implicit */long long int) 4294475784U))));
                    var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)24242))))) ? (max((0U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294475775U))))))) : (491514U));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30799)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) ? (max((4294475775U), (491529U))) : (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? (((/* implicit */int) (short)-24243)) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4])) % (((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 2] [8LL] [i_4] [i_4])))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)23)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] = ((/* implicit */_Bool) ((((_Bool) arr_11 [i_0] [i_2 + 2] [(unsigned short)12] [i_2 - 3])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) ((arr_10 [i_0] [i_0] [(_Bool)1] [i_2] [(signed char)18]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                }
            } 
        } 
    } 
}
