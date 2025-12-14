/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54572
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_2 [(_Bool)1])) && (((/* implicit */_Bool) 4294967295U)))))) ? (max((((/* implicit */long long int) (_Bool)0)), (arr_5 [i_0] [i_1 - 2]))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)1536))))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) ? (min((((/* implicit */long long int) 2823433695U)), (arr_1 [i_0] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))), (((/* implicit */long long int) arr_0 [i_0] [i_1 + 1]))));
                var_16 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [4U]))) * (max((((/* implicit */unsigned long long int) (unsigned char)45)), (var_7))))));
                arr_8 [i_0] [i_1] = ((unsigned long long int) ((short) arr_5 [i_1 + 2] [i_1 - 1]));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)28672))))), (min((arr_10 [i_2]), (var_10)))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) ((arr_9 [i_2]) >= (arr_9 [i_2]))))));
    }
    var_18 &= (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) : (min((var_1), (((/* implicit */unsigned long long int) var_3)))))));
    var_19 &= ((/* implicit */unsigned long long int) var_11);
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned short)12846)))), (((/* implicit */int) var_11))))) ? (min((((var_2) << (((var_1) - (305756978573011860ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (var_8)))))) : (var_5))))));
}
