/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224064
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))))))));
                                arr_13 [(unsigned short)3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 1] [i_3] [i_3 + 1])) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) ((signed char) arr_2 [i_1])))))), (((unsigned long long int) (-(13073672070327900438ULL))))));
                                arr_14 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_3 [i_4]))))) ? (max((((/* implicit */unsigned int) arr_3 [i_0])), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (arr_6 [i_0]))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_8 [i_3 + 1] [(_Bool)1] [i_3] [i_3 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_14 = max((((/* implicit */unsigned long long int) (!(arr_1 [(unsigned short)6] [i_1])))), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_23 [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned char)0))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_18 [i_5] [i_1] [i_5] [i_6]) : (var_5)))) ? (min((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_5])), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [i_1] [i_5] [i_0]))))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 261632)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (2532768074051583316ULL)));
                        }
                    } 
                } 
                arr_25 [i_0] [i_0] [i_0] = arr_2 [i_1];
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_6))));
    var_16 &= ((/* implicit */unsigned short) max((var_8), (((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)132)))))))));
}
