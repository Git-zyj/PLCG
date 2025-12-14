/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20868
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-118)) <= (((/* implicit */int) (signed char)117))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)5)))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((unsigned short) ((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (signed char)-108)))) > (((/* implicit */unsigned long long int) arr_1 [i_0] [(signed char)20]))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_2 [i_0 + 2])))))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)105)), ((unsigned char)124)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] [i_4] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_8 [i_3 - 2] [i_4 - 2])))), (((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_4 + 3])) : (((/* implicit */int) (signed char)4))))));
                    arr_16 [i_4] [i_4] [i_4] = ((/* implicit */short) arr_5 [i_2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) var_13))));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) (signed char)-16))))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-118)))))))));
    var_19 = ((/* implicit */unsigned short) var_12);
}
