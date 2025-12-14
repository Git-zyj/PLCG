/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207494
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
    var_13 = ((/* implicit */long long int) ((unsigned short) -1213750054630024119LL));
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_2)) | (max((((((/* implicit */int) (short)1549)) << (((var_12) - (4245751536U))))), ((+(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = (unsigned short)43124;
                var_16 = ((/* implicit */int) ((((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)11004))))) == ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((1213750054630024117LL) ^ (((/* implicit */long long int) -344666632)))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */short) (signed char)-15))))))));
                var_17 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)28137)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))), (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [i_2] [i_0]))))))) ? (1421479233) : (((/* implicit */int) arr_2 [i_0] [i_2]))));
                            arr_8 [i_0] [i_2] [i_1] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_3] [i_3]))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_3 [i_0]))))))));
                            arr_9 [i_3] [i_0] [i_3] = min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_6 [i_0] [i_2] [i_3 + 1] [i_3] [i_1])) << (((((/* implicit */int) arr_6 [i_0] [i_1] [i_3 + 1] [i_3] [i_2])) - (41518))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_1);
}
