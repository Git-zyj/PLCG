/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214775
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [i_0])))) % (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)12), (arr_3 [i_1] [i_0])))) >= ((~(((/* implicit */int) arr_0 [i_0]))))))))))));
                var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_0] [5])) ? (((/* implicit */int) ((arr_1 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_4 [i_0] [(signed char)4]))))))));
                var_18 = ((/* implicit */unsigned char) ((min((min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_1])))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_0])) != (((/* implicit */int) (unsigned char)255))))))) == (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) != (((/* implicit */int) (short)7003))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) 3491704577U)), (((min((((/* implicit */long long int) arr_2 [i_1])), (arr_1 [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_0 [i_1]))))))))));
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_8)))))));
}
