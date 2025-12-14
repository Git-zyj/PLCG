/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203580
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
    var_17 = ((/* implicit */unsigned char) ((int) var_9));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) | (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) - (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                    var_19 = (i_1 % 2 == 0) ? (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (arr_1 [5U])))) ^ (min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_0])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_5)) << (((arr_5 [i_0] [i_1]) - (1025051953U))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) > (arr_6 [i_0] [(_Bool)1] [i_2])))))))))) : (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (arr_1 [5U])))) ^ (min((var_4), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [i_0])))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_5)) << (((((arr_5 [i_0] [i_1]) - (1025051953U))) - (1623590786U))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_1]))) > (arr_6 [i_0] [(_Bool)1] [i_2]))))))))));
                }
                for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    arr_10 [i_0] [i_0] [(_Bool)1] [10LL] |= ((/* implicit */unsigned short) (signed char)-50);
                    var_20 = ((/* implicit */long long int) arr_5 [i_0 + 1] [i_1]);
                }
                for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    arr_14 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1859051894))));
                    arr_15 [i_1] [i_1] = ((/* implicit */int) ((var_12) ? (arr_5 [5LL] [i_1]) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_0 - 1] [i_1] [i_1])), (9223372036854775794LL)))) ? (min((((/* implicit */unsigned int) (unsigned short)51440)), (arr_11 [i_4] [i_4] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                    var_21 = ((/* implicit */unsigned char) 1859051891);
                }
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */int) (_Bool)0)) % (var_13)))))));
    var_23 = ((/* implicit */unsigned int) ((unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (4095ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) % (2719414998356074784LL)))))));
}
