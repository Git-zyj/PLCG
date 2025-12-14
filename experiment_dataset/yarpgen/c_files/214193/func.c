/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214193
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
    var_10 = ((/* implicit */signed char) var_5);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_11 = max((min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2]))), (arr_1 [i_0 - 1]));
        var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_1 [i_0])))) >> (((/* implicit */int) arr_1 [i_0]))))), (max((max((7155730700643359429ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((arr_1 [i_0 + 1]), (var_5))))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) var_4)) ? (11291013373066192186ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */short) arr_1 [i_0]))))))))));
        arr_3 [i_0] [i_0] = min((((/* implicit */long long int) (+(arr_2 [i_0 - 2] [i_0 - 1])))), (1152921504069976064LL));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max(((-(arr_4 [i_1]))), (arr_4 [i_1])));
        var_14 = ((/* implicit */unsigned short) ((signed char) arr_5 [i_1]));
        arr_7 [i_1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
    }
    for (short i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max((min((arr_2 [i_2 + 1] [i_2 - 1]), (arr_2 [i_2 + 1] [i_2 - 1]))), ((~(arr_2 [i_2 + 1] [i_2 - 1]))))))));
        var_16 += (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [7LL])), ((unsigned short)12))))))));
    }
    var_17 += ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */int) min((7155730700643359444ULL), (((/* implicit */unsigned long long int) ((unsigned int) var_8)))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((var_3) & (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_1))))))))))));
}
