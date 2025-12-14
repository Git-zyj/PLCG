/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3423
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (max(((!(((/* implicit */_Bool) var_15)))), (((max((((/* implicit */int) var_13)), (arr_1 [i_3]))) != (((/* implicit */int) min((arr_2 [i_0] [i_0] [i_2]), (((/* implicit */short) (unsigned char)179)))))))))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 - 1])))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned short) var_1);
    }
    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_19 = ((/* implicit */long long int) arr_3 [(_Bool)1] [(_Bool)1]);
            arr_16 [i_4] [i_4] = ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_2))))));
        }
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)77)) / (((/* implicit */int) (unsigned char)103)))))));
        var_21 ^= ((/* implicit */unsigned int) ((3820787167U) == (3820787167U)));
        var_22 |= ((/* implicit */unsigned char) max((((unsigned short) var_2)), (((/* implicit */unsigned short) (unsigned char)211))));
    }
    var_23 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) ((unsigned char) 3820787167U))));
    var_24 = ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (6598956558517114839ULL));
    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4))))))));
}
