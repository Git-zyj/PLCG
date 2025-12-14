/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242715
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_1 + 2]);
                    var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (arr_8 [i_0] [i_2] [i_1 + 2] [i_0]))))))), (min((((/* implicit */unsigned long long int) arr_8 [i_0] [(unsigned short)6] [i_2] [i_2])), (max((((/* implicit */unsigned long long int) arr_7 [i_0 + 2] [i_1] [i_2])), (arr_6 [i_1] [i_2])))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned long long int) ((int) var_6)))));
    }
    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_11 [i_3])) / (((/* implicit */int) ((unsigned char) 580934763)))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_11 [i_3]), (max((((/* implicit */unsigned char) arr_10 [i_3])), ((unsigned char)253)))))) ? (((((/* implicit */_Bool) ((unsigned short) 13558172152710904412ULL))) ? (((/* implicit */int) arr_10 [i_3])) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) (unsigned short)42286)) : (((/* implicit */int) arr_10 [i_3 - 2])))))) : (((/* implicit */int) arr_11 [(_Bool)0]))));
        arr_13 [i_3 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)51103))))) : (((long long int) arr_11 [i_3 + 2]))));
        var_19 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */int) (unsigned short)23238)) / (((/* implicit */int) (signed char)-87))))) ? (((/* implicit */int) arr_10 [i_3 - 2])) : (((/* implicit */int) min((arr_11 [i_3 + 2]), (arr_11 [i_3 + 2]))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 4; i_4 < 21; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)5602))))) ? (((/* implicit */int) arr_14 [21LL])) : (((/* implicit */int) (!(arr_16 [i_4] [i_4]))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_11 [i_4]))))));
    }
    var_20 = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)128))))))), (min(((+(var_8))), ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) 8388096U))))))));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((/* implicit */int) var_2))));
    var_22 = ((/* implicit */signed char) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))), (-449451179274933575LL))))));
}
