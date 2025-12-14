/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53839
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) var_4)) ? (2931214934U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) % (((int) (unsigned short)1008)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) arr_5 [i_1]);
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_0), (var_0)))) + (((/* implicit */int) ((_Bool) arr_4 [i_1]))))) > (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) var_7);
                    var_14 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (max(((-(var_7))), (((/* implicit */long long int) ((1ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))))))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-1))))) >= (min((2122703810), (((/* implicit */int) arr_6 [i_1] [i_1] [i_3])))))))) == (arr_7 [i_1])));
                    arr_12 [i_2] [i_1] = ((/* implicit */unsigned char) max((2122703811), (-2122703810)));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_5))));
    var_17 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_8))));
}
