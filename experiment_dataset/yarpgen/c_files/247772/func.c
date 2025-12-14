/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247772
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
    var_19 = ((/* implicit */long long int) var_14);
    var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19275))) <= (var_6)))))))) * (var_13)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_2] |= ((/* implicit */long long int) min(((~((+(((/* implicit */int) var_3)))))), (1911973234)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(arr_11 [i_0] [i_1] [i_4]))), (((((/* implicit */_Bool) (unsigned short)19278)) ? (4294967295U) : (((/* implicit */unsigned int) -1911973235))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) 2147483647)))), (((/* implicit */unsigned int) ((-1911973242) / (((/* implicit */int) var_3)))))))) : (var_6))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (var_9)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_17 [i_0] [13ULL] [i_2] [i_5 - 1] [i_6 - 1] = ((/* implicit */unsigned int) var_6);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), ((-(arr_15 [i_0] [i_5 + 1])))))) ? (var_18) : (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        arr_20 [i_0] [i_0] = (-((-(((/* implicit */int) var_3)))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 14; i_8 += 3) 
                        {
                            arr_23 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) var_9);
                            var_24 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), ((+(arr_22 [i_8 + 1] [i_7] [i_2] [i_1] [i_0])))))));
                            arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) (((-(var_8))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_7 - 1] [i_8])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_7 - 1] [i_7]))))))));
                        }
                        arr_25 [i_0] [7U] [i_0] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((int) arr_6 [i_0] [i_0] [i_0])))))));
                        arr_26 [i_0] [(signed char)0] [i_2] [(signed char)13] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_8 [2U] [10ULL])))) == (((((/* implicit */_Bool) -2055674204)) ? (((/* implicit */unsigned long long int) var_13)) : (var_8))))), (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_0])) ? (2171358428U) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])))))))));
                    }
                }
            } 
        } 
    } 
}
