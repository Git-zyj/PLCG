/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194227
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
    var_15 = ((/* implicit */int) var_11);
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) + (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_3] [i_3] [i_3] [(short)7] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_4 [i_2 + 1]))) ? (((/* implicit */unsigned long long int) (~(arr_7 [(signed char)2] [i_3] [i_2 - 1] [i_1] [i_1] [(signed char)7])))) : (9878339135710881516ULL)));
                        arr_10 [i_3] [i_1] [i_3] = ((/* implicit */int) max((arr_6 [9] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1] [i_1]))))))))));
                        arr_11 [i_3] [i_1] [i_2 - 1] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) -285293387);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_16 [i_3] = ((arr_12 [i_0] [i_3] [i_3] [i_3] [i_3]) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0))))))));
                            var_17 = ((/* implicit */unsigned short) (_Bool)0);
                        }
                        for (int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_4 [9]);
                            var_18 = ((/* implicit */short) min((((int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [10])) + (((/* implicit */int) var_0))))), (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) 3405672263U)), (var_11)))))));
                            var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((11053939934560537010ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) (signed char)-104))))));
                        }
                    }
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_22 [i_0] [i_1] [i_2 - 2] [i_2 - 2] = ((/* implicit */unsigned long long int) min((var_4), (max((((/* implicit */int) ((short) var_12))), ((-(((/* implicit */int) (signed char)113))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 14; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_14)))))))));
                                arr_29 [i_0] [i_1] [i_2 + 1] [i_6 - 2] [(_Bool)0] = ((/* implicit */int) (+(var_13)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_13)) ? ((-((-(var_14))))) : (((/* implicit */unsigned int) var_9)));
    var_23 = ((/* implicit */int) (signed char)74);
}
