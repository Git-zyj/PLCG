/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225125
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
    var_11 = ((/* implicit */unsigned char) ((((int) (!(((/* implicit */_Bool) var_7))))) <= (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned short)65534)))), (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned long long int) max((4294967276U), (((/* implicit */unsigned int) var_2))))) : (max((var_4), (((/* implicit */unsigned long long int) (short)-17654)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16554)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [(signed char)3])))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) var_0);
        var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) var_6)) - (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) ((short) (-(arr_7 [i_1] [i_1] [i_2]))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (signed char)12))));
        }
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_18 = ((/* implicit */_Bool) 1329262461U);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_3])) : ((-(((/* implicit */int) (unsigned char)232))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (signed char)20)))));
                        var_21 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131))) + (((((/* implicit */_Bool) 44U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (1544788944658732144ULL)))));
                    }
                } 
            } 
        } 
        var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)60))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-64)), ((unsigned short)0)))));
    }
}
