/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47664
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
    var_14 = ((/* implicit */_Bool) max((((((((((/* implicit */_Bool) var_4)) ? (-346460227) : (((/* implicit */int) var_8)))) + (2147483647))) >> (((((var_8) ? (var_10) : (((/* implicit */unsigned int) var_11)))) - (4235718747U))))), (max((((/* implicit */int) var_12)), (min((((/* implicit */int) var_5)), (var_4)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) 1293906295U);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = ((unsigned long long int) arr_1 [i_2 + 2]);
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (max((min((12277117338871553945ULL), (((/* implicit */unsigned long long int) (short)7168)))), (((((/* implicit */unsigned long long int) (~(var_7)))) + (max((((/* implicit */unsigned long long int) 1133970548)), (var_1)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((0U), (3008049342U))) : (((((/* implicit */_Bool) ((var_9) ? (1286917952U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2] [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((14734622548900487401ULL) >= (((/* implicit */unsigned long long int) var_3)))))) : (max((((/* implicit */unsigned int) var_4)), (arr_4 [i_0] [16] [i_0])))))));
                        arr_16 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */int) 11457722638556800026ULL);
                    }
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((23ULL), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_1] [i_2 + 4]))))) : (((((/* implicit */_Bool) 20U)) ? (max((((/* implicit */unsigned int) 2147483647)), (var_10))) : (max((arr_6 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned int) (_Bool)0))))))));
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+(var_10))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_9 [14ULL] [14ULL] [i_8 - 1] [i_7 - 1] [i_7] [i_7 - 2]);
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((4294967292U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114))))))));
                arr_26 [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) 1863621357)), (31U)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_1);
}
