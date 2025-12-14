/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233767
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) 1876200126))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        var_13 += ((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [i_0 - 3]), (arr_1 [i_0 - 1])))) ^ ((~(((/* implicit */int) arr_1 [i_0 - 1]))))));
        var_14 = ((/* implicit */unsigned short) arr_0 [(signed char)7] [i_0 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (4187452476U) : (1319678372U)))) || (((/* implicit */_Bool) arr_1 [(unsigned short)11])))) || (((/* implicit */_Bool) var_7))));
                    arr_6 [i_0] [i_2 + 1] = ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_2 + 1] [i_1 + 3] [i_0 - 2]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15755)) || (((/* implicit */_Bool) arr_3 [i_1])))))) ^ (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) -1876200127)));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_9 [i_3] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((var_8), (max((arr_8 [(unsigned char)1]), (var_11)))))), (((unsigned long long int) 1U))));
        arr_10 [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((arr_8 [i_3]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58021))))))) ? (((((/* implicit */_Bool) max((arr_8 [i_3]), (var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (arr_7 [i_3] [i_3]))) : (max((arr_7 [i_3] [i_3]), (((/* implicit */unsigned int) -1876200125)))))) : (min((arr_7 [i_3] [i_3]), (arr_7 [i_3] [i_3])))));
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) ((unsigned int) arr_13 [i_4]))), (max((((/* implicit */long long int) arr_11 [(unsigned short)11] [i_4])), (-512489044623156372LL))))), (((/* implicit */long long int) -1876200120))));
        var_17 -= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4]))))), (arr_14 [i_4] [i_4]))), (((/* implicit */unsigned long long int) var_6))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((max((arr_12 [i_4] [i_4]), (arr_12 [i_4] [i_4]))), (max((arr_12 [i_4] [i_4]), (arr_12 [i_4] [i_4]))))))));
    }
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_3))));
    var_20 = ((/* implicit */unsigned long long int) (unsigned short)28);
}
