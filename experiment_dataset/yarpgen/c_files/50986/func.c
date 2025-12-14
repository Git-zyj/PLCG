/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50986
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (max((16383ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [(_Bool)0] [i_1])) << (((arr_1 [i_1]) - (66866208U)))))) : (min((((((/* implicit */_Bool) var_14)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) (_Bool)1))))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3 + 1]))))), (max((((/* implicit */int) (unsigned short)60484)), ((-2147483647 - 1)))))))));
                            var_17 = ((/* implicit */signed char) (!((_Bool)1)));
                            var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (2979849373920438305ULL) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_3]))))) : (((((/* implicit */unsigned long long int) arr_1 [i_2])) | (288160007407534080ULL))))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) (signed char)99)))))));
                            var_19 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_8 [i_0] [i_3 + 1] [i_3 + 1] [i_3])), (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) -747755071))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] = (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (_Bool)1);
}
