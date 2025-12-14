/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29826
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
    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
    var_12 = ((/* implicit */short) (unsigned char)25);
    var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_10))))) >= (((/* implicit */int) var_4)))))) == (((((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_5)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_2 [i_1] [i_0])))))))) && (((/* implicit */_Bool) var_1))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 16; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)18)))))))));
                    var_16 ^= min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 3]))))), (((unsigned long long int) ((157573808335302356ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    arr_8 [i_0] [i_2] [i_2 - 2] = ((/* implicit */short) arr_4 [17U]);
                }
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_1 + 1] [i_0]))) < (-6033408277125371050LL))))))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_1 - 1])))))));
                }
                arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2128231948U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((int) 157573808335302366ULL))));
            }
        } 
    } 
}
