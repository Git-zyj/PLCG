/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248032
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
    var_16 = ((/* implicit */short) var_13);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1341838065U)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2953129231U)))) >= ((-(1341838078U)))))) : (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((1341838063U), (2953129231U))), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) ((unsigned char) ((-968221876) - (((/* implicit */int) (signed char)-122)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((/* implicit */int) (signed char)0))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((int) ((2953129240U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))));
        var_19 = ((/* implicit */int) (unsigned char)255);
        arr_5 [i_0] = ((/* implicit */signed char) ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) >= ((+(arr_0 [(short)10] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min(((+(var_2))), (((/* implicit */int) ((unsigned char) (unsigned short)19000)))))) - (15819063248735761790ULL)));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    var_21 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-109)), (((unsigned char) var_6))))), (((arr_10 [i_1] [i_2 + 3] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    arr_15 [18] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((signed char) arr_7 [i_1]))) : (arr_13 [i_2 + 2] [i_2 + 3] [1ULL] [i_2 + 2])))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_10 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) min(((signed char)-121), (min(((signed char)97), ((signed char)121)))))) : (((int) arr_12 [i_1] [i_1] [i_1])))))));
    }
}
