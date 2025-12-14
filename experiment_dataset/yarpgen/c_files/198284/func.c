/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198284
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] |= max((min((min((((/* implicit */unsigned long long int) var_5)), (var_6))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)27))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) max((((/* implicit */signed char) arr_2 [i_1])), ((signed char)-27)))), (var_3)))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(var_9)))))) ? (((long long int) var_14)) : (var_9)));
                                arr_15 [i_0] [i_1 - 1] [19ULL] [i_1 - 1] [i_4] = var_9;
                                var_17 += (-(((arr_6 [0] [0] [i_1 - 1]) << (((arr_6 [17U] [i_0] [i_1 + 1]) - (1529016519U))))));
                                var_18 = ((/* implicit */unsigned char) min((((unsigned long long int) 5048336379585076987LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) ^ (arr_5 [i_1] [i_4])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_8))));
                                arr_22 [i_0] [i_1] [i_2] [12U] [i_6] = ((/* implicit */signed char) ((min((18ULL), (((/* implicit */unsigned long long int) 4294967295U)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_5] [i_1] [i_0])) & (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5])))))));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [20LL] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((arr_9 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [8ULL] [8ULL] [i_2] [i_5] [i_6] [12ULL]), (((/* implicit */signed char) arr_1 [0]))))))));
                                var_20 *= ((/* implicit */unsigned short) arr_18 [i_1 + 1] [15LL] [i_1 + 1]);
                                arr_24 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] [i_5] [i_6] = min((arr_11 [11ULL] [i_1] [i_2] [11U] [i_5] [i_6]), (((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */unsigned long long int) 3182792559U)), (arr_19 [(unsigned short)20] [(unsigned short)20] [i_2] [(unsigned short)20] [i_6]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_21 += ((/* implicit */short) arr_4 [i_7] [i_8] [i_9]);
                    arr_34 [5U] [5U] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29618)) && (((/* implicit */_Bool) (unsigned short)11))));
                }
            } 
        } 
    } 
}
