/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231165
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
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = max(((-(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_0 - 4])), (arr_3 [i_1] [i_2 - 2] [i_1])))));
                    var_20 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (1954066661) : (((/* implicit */int) (unsigned short)0))))) ? (max((var_15), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 2] [i_1])) ? (1954066636) : (arr_1 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 1; i_3 < 7; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (unsigned short)0);
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
                    var_23 = ((((/* implicit */_Bool) max((((unsigned long long int) arr_0 [i_4])), (((/* implicit */unsigned long long int) var_17))))) ? (-1954066657) : (((/* implicit */int) var_5)));
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) var_8);
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_3] [i_3] [i_3])))) > (arr_0 [i_3]))) ? (((/* implicit */unsigned long long int) -171707242)) : ((-(max((((/* implicit */unsigned long long int) arr_1 [i_3] [12])), (var_16))))))))));
    }
    for (signed char i_6 = 4; i_6 < 14; i_6 += 3) 
    {
        var_26 -= (-((+(((/* implicit */int) (signed char)107)))));
        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-107)) ? (3313560096199522454ULL) : (((/* implicit */unsigned long long int) 57845944))))))));
    }
    var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -57845945))))) : ((+(((/* implicit */int) (unsigned char)251))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), ((unsigned short)1079))))))) : (((((/* implicit */_Bool) var_9)) ? (var_7) : (max((var_7), (((/* implicit */long long int) var_6))))))));
}
