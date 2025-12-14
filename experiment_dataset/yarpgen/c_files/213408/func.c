/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213408
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) - (((/* implicit */int) var_10)))) >> (((((unsigned long long int) var_13)) - (13333608263814919657ULL)))))) && (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_12))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_17)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) max((((unsigned int) ((unsigned short) arr_0 [i_0]))), (((/* implicit */unsigned int) (!(((_Bool) arr_1 [i_0])))))));
                var_21 = ((/* implicit */short) var_9);
                var_22 = ((/* implicit */long long int) (!((((~(arr_1 [i_0]))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (1189680621944366577ULL)))))));
                var_23 = ((/* implicit */int) min((var_23), ((~(((((/* implicit */_Bool) 2745194468243711213ULL)) ? (((/* implicit */int) (unsigned short)32196)) : (1046528)))))));
                arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46222))) ^ (arr_3 [i_1] [i_1])))) ? ((-((+(((/* implicit */int) (short)31629)))))) : (1046528));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (+(var_16)))))));
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) var_17);
        var_26 = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned int) arr_0 [i_2])), (var_6))), (((/* implicit */unsigned int) ((var_9) > (((/* implicit */unsigned long long int) var_3))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2]))) <= (var_11)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2])))))))))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_3]) : (((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_3] [i_3]))) ? (((unsigned long long int) (unsigned short)11296)) : (((var_11) / (16087114109466896114ULL)))))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 8284286861700421208LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (min((((/* implicit */unsigned long long int) arr_0 [i_3])), (var_9))))))));
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2429570284U)) && (((/* implicit */_Bool) 1189680621944366553ULL))));
        var_29 = ((/* implicit */unsigned char) ((_Bool) ((signed char) ((_Bool) var_7))));
        var_30 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (unsigned short)41098)) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))))));
    }
}
