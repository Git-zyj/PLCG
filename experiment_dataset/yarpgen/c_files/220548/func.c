/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220548
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
    var_18 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) 12861563931734389057ULL));
                            var_19 = ((/* implicit */int) max((((unsigned long long int) max(((signed char)48), ((signed char)-40)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_1] [i_0] [i_0])) ? (arr_3 [i_0] [i_0] [i_0]) : (var_0))))))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(unsigned short)4] [i_1] [i_1] [i_1]);
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((int) arr_7 [i_0] [7ULL] [8U] [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 16502889413266012121ULL);
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((((((/* implicit */_Bool) ((2604298857U) / (arr_3 [(short)3] [i_4] [i_4])))) && ((!(((/* implicit */_Bool) 4803849916201754082ULL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (((/* implicit */int) ((((/* implicit */_Bool) 2271989450U)) || (((/* implicit */_Bool) (signed char)59)))))))) : (((max((371822704U), (((/* implicit */unsigned int) (signed char)55)))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))))));
        var_23 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned short)20822)) : (((/* implicit */int) (unsigned char)61))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_6 [i_4])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)175)) / (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)47)))) : (((unsigned long long int) var_11))))))));
        arr_16 [i_4] = (-((-((~(((/* implicit */int) (unsigned char)45)))))));
    }
    for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)10724)) & (((/* implicit */int) ((short) (unsigned char)14)))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) arr_19 [i_5])) & (7133606485428144874ULL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_1) | (arr_19 [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48888)) - (((/* implicit */int) (signed char)90)))))))) : (arr_17 [(unsigned short)10])));
    }
}
