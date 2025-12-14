/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215617
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
    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((signed char) var_10))), (var_4)));
    var_13 = ((unsigned long long int) max((((/* implicit */unsigned char) var_9)), (max((((/* implicit */unsigned char) var_8)), (var_3)))));
    var_14 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned short) 9223372036854775780LL))) : (var_0))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)34308)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_3 [i_0])))))))));
            var_16 = ((/* implicit */unsigned char) var_6);
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 4) 
        {
            for (int i_3 = 2; i_3 < 19; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) == (12992342805146594320ULL)));
                        arr_13 [9ULL] [i_0] [(unsigned short)19] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13105262057303476685ULL)) || (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_3 + 3] [i_0 + 1])) || (((/* implicit */_Bool) (unsigned short)0))))));
                        var_18 = ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] [i_0]);
                    }
                } 
            } 
        } 
        arr_14 [i_0] [i_0] = var_10;
    }
    for (short i_5 = 3; i_5 < 8; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) max((((unsigned long long int) ((signed char) var_10))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (-734472655047702729LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-36)))))))));
        arr_18 [i_5] = ((/* implicit */unsigned short) var_7);
    }
}
