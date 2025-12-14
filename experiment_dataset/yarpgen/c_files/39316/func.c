/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39316
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
    var_17 = var_11;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_5 [i_0] [i_1 + 3] [i_1 + 1]), (arr_5 [i_0] [i_1 - 1] [i_1 + 2])))) * (((/* implicit */int) max((arr_5 [i_0] [i_1 + 3] [i_1 - 2]), (arr_5 [i_0] [i_1 + 1] [i_1 + 3])))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) (unsigned short)65526);
                                var_20 *= ((/* implicit */short) ((((((((/* implicit */_Bool) 4651663474966015500LL)) && (var_9))) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)19747)) : ((-2147483647 - 1)))) : (((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)8] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))))) % (((/* implicit */int) (unsigned short)65522))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) % (((((/* implicit */_Bool) arr_4 [(unsigned short)8] [5ULL] [i_1])) ? (3466454443U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_7])) <= (((/* implicit */int) (unsigned short)8)))))));
                                var_22 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (13361126297928256292ULL))), (((/* implicit */unsigned long long int) max((arr_14 [i_0] [i_0] [i_5 + 1] [i_1 + 2] [i_7]), (arr_14 [i_1] [i_0] [i_0] [i_1 + 3] [(_Bool)1]))))));
                                var_23 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13533))))) ? ((+((~(((/* implicit */int) (unsigned short)65521)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -1162311349)), (4294967295U)))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((min((arr_14 [i_1 + 3] [i_1] [(unsigned char)1] [i_1] [i_1 + 1]), (((/* implicit */long long int) 201222159)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3818143436U)) && (((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 + 3])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (+(max((min((var_13), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)132))))))));
}
