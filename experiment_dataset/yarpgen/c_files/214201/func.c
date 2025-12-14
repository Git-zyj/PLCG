/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214201
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))) < (((/* implicit */unsigned long long int) min((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) var_9)))))))), (var_10)));
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_1])), (min((((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_1])), (var_3)))))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [9] [i_1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) (+(min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_3])))), ((~(((/* implicit */int) (_Bool)1))))))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_5))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12527842881858278929ULL)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)24)))))));
                            var_16 += ((/* implicit */int) ((((/* implicit */_Bool) 3339638314U)) ? (955328981U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_8))));
}
