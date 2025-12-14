/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207675
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(max((var_1), (var_1)))))) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((((/* implicit */int) (signed char)-127)) | (((/* implicit */int) (signed char)-124)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (+(min((min((((/* implicit */unsigned long long int) arr_6 [i_0])), (var_5))), (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_0]))))))));
                    arr_11 [i_0] [15] [i_1] [i_0] = ((unsigned short) ((((/* implicit */unsigned long long int) ((int) arr_3 [i_0] [i_1]))) < (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [1ULL] [i_0])))));
                    var_13 = ((/* implicit */int) ((arr_9 [(_Bool)1] [i_2]) == ((~(((/* implicit */int) ((_Bool) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
