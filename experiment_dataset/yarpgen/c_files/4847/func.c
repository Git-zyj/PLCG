/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4847
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
    var_12 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) ((short) (signed char)-41))) : (((var_4) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) arr_1 [(_Bool)1]))))))) * (arr_5 [(short)0] [(signed char)2] [i_1])));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_17 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((((_Bool) (signed char)40)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] [i_0 + 3] [i_2])))) : (((/* implicit */int) arr_15 [i_2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_4 + 1] [i_4 + 2] [i_4]))))) * (max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (-8818737393873562530LL)))))));
                                var_14 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-41)) / (arr_10 [i_2]))))), (((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) arr_16 [i_2] [18ULL] [(signed char)2])) ? (((/* implicit */int) (signed char)31)) : (arr_8 [i_2] [i_2] [i_0])))))));
                                arr_18 [i_4 - 2] [i_3 - 1] [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) (signed char)40))), (max((((/* implicit */unsigned long long int) (signed char)35)), (max((14757586417936733815ULL), (3689157655772817771ULL)))))));
                                var_15 = ((/* implicit */_Bool) max((max((-8818737393873562544LL), (((/* implicit */long long int) arr_11 [i_2] [i_1] [i_2])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_2])))))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14757586417936733815ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (8818737393873562543LL)));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_4))) <= (((/* implicit */int) var_11))));
}
