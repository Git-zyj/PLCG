/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209833
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL)))))) && (((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            var_14 += (+(((/* implicit */int) var_10)));
            arr_5 [i_0] [i_1] &= ((/* implicit */unsigned short) ((((min((18446744073709551608ULL), (((/* implicit */unsigned long long int) 134217600)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_11)))))))) && (((/* implicit */_Bool) arr_3 [i_1]))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (((unsigned long long int) arr_0 [i_1 + 4]))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) arr_1 [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    arr_11 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) min(((+(arr_2 [i_3]))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_2] [i_2])), (arr_8 [i_3] [i_3] [i_0]))))))) ? (((/* implicit */long long int) ((arr_4 [i_2 + 2] [i_0] [i_3]) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_3]))))) : (((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_7 [i_0]))))) * (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1]))))))));
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))))), (((long long int) var_3))));
                }
            } 
        } 
    }
    for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
    {
        var_18 = ((((-1) + (2147483647))) >> ((+(((/* implicit */int) arr_13 [i_4 - 2])))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) (((~(((long long int) 13009504753343630027ULL)))) % (((/* implicit */long long int) ((((((int) var_8)) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 2] [i_6 + 2]))) | (15ULL))) - (15ULL))))))));
                    arr_23 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_19 [i_4] [i_5] [i_4] [i_4])))));
                }
            } 
        } 
    }
    var_20 = ((int) ((unsigned short) min((((/* implicit */unsigned long long int) var_2)), (0ULL))));
    var_21 = ((/* implicit */long long int) var_1);
}
