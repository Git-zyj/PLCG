/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33190
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */unsigned short) ((min((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */int) (unsigned char)233)) * (((/* implicit */int) arr_1 [14LL])))))) >> (max((((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((min((min((var_8), (((/* implicit */int) (unsigned char)21)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) >= (3632054905100944443ULL)))))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) var_8)) + (arr_3 [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)233), ((unsigned char)0)))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_1)), (13753405389614149173ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1962)) && (((/* implicit */_Bool) (unsigned short)34482))))))))), (max((max((((/* implicit */int) (unsigned char)29)), (5))), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_6)))))))))));
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_10))))), (max((var_8), (((/* implicit */int) var_1)))))) + (max((((((/* implicit */int) var_2)) * (((/* implicit */int) var_6)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)5)))))))))));
}
