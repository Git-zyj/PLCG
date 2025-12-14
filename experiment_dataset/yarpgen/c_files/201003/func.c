/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201003
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)511)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_3)), (arr_3 [i_0])))) : (((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4] [i_3])) && (arr_2 [i_0]))))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [(unsigned short)2] [(short)12]))))))), (((((/* implicit */_Bool) (short)20170)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27825))) : (arr_10 [(short)9] [i_1 + 1] [i_2]))))))))));
                            }
                        } 
                    } 
                    arr_13 [13ULL] [i_0] = ((/* implicit */_Bool) (short)-27825);
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned int) var_12);
    var_20 = ((/* implicit */unsigned char) (short)-512);
}
