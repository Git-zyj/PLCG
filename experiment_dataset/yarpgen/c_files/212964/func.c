/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212964
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
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_7 [3ULL] [i_1] [(unsigned char)9] = ((/* implicit */int) ((((/* implicit */_Bool) 216448279)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 2147483648U)) : (((long long int) -7209641882903496394LL))))) : (arr_4 [i_1] [(signed char)2] [i_0])));
                var_18 *= ((/* implicit */unsigned long long int) var_8);
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 3])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (1468434012919739099LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((4755273773118876781ULL) / (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (var_1) : (((((/* implicit */_Bool) arr_5 [i_0 + 3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [1ULL])))))))));
                arr_8 [i_0] [i_0] |= (short)12420;
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_2))))));
    var_21 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (signed char i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (((min((((/* implicit */long long int) 2147483637U)), (var_12))) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3]))))))))));
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    arr_17 [(signed char)15] [(signed char)15] [(signed char)15] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_3 - 1] [(_Bool)1]))) % (6116368357406874790LL)));
                    var_23 = ((/* implicit */unsigned long long int) arr_14 [i_4 + 3] [i_4] [i_3 - 2] [i_2]);
                }
                var_24 = ((/* implicit */long long int) (unsigned char)41);
                var_25 = ((/* implicit */long long int) max((var_25), (((((long long int) var_0)) | (((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1])) + (29623))))))))));
            }
        } 
    } 
}
