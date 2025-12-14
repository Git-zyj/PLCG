/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38374
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [8ULL])))) <= (((/* implicit */int) ((max((((/* implicit */long long int) arr_1 [i_0] [(unsigned short)6])), (arr_0 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (arr_0 [i_0]))))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max(((~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) % (arr_0 [(_Bool)1]))))), (((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [i_0] [(signed char)1])))), (((/* implicit */int) arr_1 [(_Bool)1] [1LL]))))))))));
    }
    var_17 = var_6;
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            {
                arr_8 [i_2] = ((/* implicit */long long int) arr_4 [i_1]);
                arr_9 [i_1] [i_1] [i_1] = ((min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 + 1])) ^ (((/* implicit */int) arr_5 [i_2]))))), (max((((/* implicit */long long int) arr_5 [i_1])), (arr_6 [i_1] [i_1] [i_1]))))) > ((((-(arr_3 [5LL]))) % (((arr_6 [i_1] [i_1] [i_1]) & (arr_3 [(unsigned short)1]))))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((-(min((((/* implicit */long long int) arr_7 [i_2] [i_2 + 2] [i_1])), (arr_3 [i_2]))))) + (max((min((arr_3 [i_1]), (arr_3 [i_1]))), (arr_6 [i_1] [i_1] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(((((((/* implicit */int) min((((/* implicit */short) var_15)), (var_14)))) + (2147483647))) << (((((/* implicit */int) var_8)) & (((/* implicit */int) var_1))))))));
}
