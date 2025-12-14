/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212098
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
    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) (unsigned char)15))));
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_7)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39463)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)26))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)0)), (13451685076377132509ULL))) : (arr_2 [i_0])))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) var_6);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) ^ (((((/* implicit */_Bool) (unsigned char)16)) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2 - 3] [i_1] [i_1] [i_3])) / (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_2 + 2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 1508000118899177447LL)))) : (((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16913)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)162)) << (((((/* implicit */int) (signed char)86)) - (73)))))) <= (((((/* implicit */_Bool) 13451685076377132509ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (var_6))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6 - 1])))) + (2147483647))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)122)), (883537231U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) : (arr_2 [i_0]))) - (232ULL)))));
                                var_14 = var_2;
                                var_15 = ((/* implicit */_Bool) (((!(arr_21 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6] [i_6] [i_6 - 1] [i_6 + 1]))) ? (((unsigned int) (~(3657070099U)))) : (((/* implicit */unsigned int) ((int) 3657070099U)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]), ((_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((3750568433246545057LL), (((/* implicit */long long int) ((signed char) (unsigned char)229))))))));
}
