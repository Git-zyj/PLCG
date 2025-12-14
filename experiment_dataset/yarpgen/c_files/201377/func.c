/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201377
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1]))))), (arr_4 [i_1] [i_0] [i_0]))), (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */int) arr_1 [i_1]))))) : (min((14473896648478449119ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))))))));
                var_12 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) max(((short)-4868), ((short)4867)))) ? (min((((/* implicit */unsigned long long int) arr_0 [(signed char)5])), (14473896648478449100ULL))) : (((/* implicit */unsigned long long int) ((int) (signed char)109))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (signed char)-95))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) var_8))))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_7))))), (((unsigned char) var_5))))))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))), ((+(var_6)))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4865))) + (3972847425231102520ULL))), (3009580963710390244ULL)))) ? (max((arr_0 [i_2]), (((/* implicit */long long int) ((unsigned int) arr_5 [i_2]))))) : (((((/* implicit */_Bool) max((arr_8 [i_2]), (arr_8 [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)0))))) : (arr_7 [i_2]))))))));
        var_16 &= ((/* implicit */short) (-(arr_2 [i_2])));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4860)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4834736571872498477LL)));
    }
    var_17 = ((/* implicit */unsigned int) (+(var_4)));
}
