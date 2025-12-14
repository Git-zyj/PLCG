/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217799
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (signed char)-85)))) >= (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (signed char)-1)))))))) % (((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [11] [(_Bool)1])), (arr_5 [i_1])))) + (max((arr_9 [i_2] [12U] [(short)15]), (((/* implicit */unsigned long long int) var_4))))))));
                    var_21 = ((/* implicit */_Bool) max((max(((+(13968800921797257799ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-22746))))), (((((/* implicit */_Bool) arr_4 [(unsigned short)5] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) 1267466811U)) : (arr_7 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_2])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) min(((unsigned char)141), (((/* implicit */unsigned char) var_14))))))) ? (var_17) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 4503599358935040ULL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) (unsigned char)198)))))))))));
    var_23 = ((/* implicit */long long int) var_14);
}
