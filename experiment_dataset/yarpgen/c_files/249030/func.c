/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249030
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [14]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) * (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (137438953471LL) : (((/* implicit */long long int) 2274657754U)))) == (((/* implicit */long long int) 4181138996U)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [(unsigned short)0] [i_2] [i_2] [(unsigned char)6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (max((-904847774), (((/* implicit */int) (unsigned char)255)))) : (max((var_6), (((/* implicit */int) (_Bool)1)))))) * (min((((((/* implicit */int) var_5)) / (var_3))), (((/* implicit */int) (_Bool)1))))));
                                var_18 = var_1;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] = arr_3 [(signed char)12];
                                var_19 = ((/* implicit */signed char) (_Bool)1);
                                arr_21 [(_Bool)1] [(unsigned char)10] [(unsigned char)10] [i_2] [i_5] [9] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) min(((signed char)-13), (((signed char) var_16)))))));
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)21)) / (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)12)))))), (var_3)));
                }
                arr_22 [(unsigned char)11] [i_0] = ((/* implicit */int) (unsigned char)6);
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((min((((/* implicit */int) arr_11 [i_0] [i_1])), (arr_17 [(_Bool)1]))) / (((/* implicit */int) min((arr_11 [i_1] [i_0]), (arr_11 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_22 = (+(((/* implicit */int) min((((unsigned short) (signed char)-10)), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)4)) <= (((/* implicit */int) (_Bool)1)))))))));
}
