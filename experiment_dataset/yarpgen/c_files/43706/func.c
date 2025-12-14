/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43706
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16)))))));
                    arr_7 [i_1] = ((/* implicit */unsigned char) (-((-(max((var_1), (((/* implicit */unsigned int) (signed char)-61))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [(signed char)3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(max((var_0), (((/* implicit */long long int) (signed char)122))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)2))) : (var_6)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-12)), (arr_3 [i_0])))) : (var_0))))));
                        var_11 += ((/* implicit */short) (~(arr_3 [i_3])));
                        arr_12 [i_3] [i_1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) min(((+(min((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_1])))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13152))) : (549621596160ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)113)))))))));
                        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(var_4))), ((-(((/* implicit */int) arr_8 [i_1])))))))));
                    }
                    arr_13 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2490)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (short)0)))) : (((/* implicit */int) (signed char)2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)1862)), (var_2)))) || (((/* implicit */_Bool) ((short) var_9)))))) : (((/* implicit */int) var_7)))))));
}
