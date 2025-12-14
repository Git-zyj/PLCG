/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248440
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_12 += min((min((((/* implicit */unsigned long long int) (unsigned char)250)), (12399115182990377370ULL))), (((/* implicit */unsigned long long int) (unsigned char)250)));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((15062062433254414191ULL), (224ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551391ULL)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (unsigned short)65535))))))))));
                    var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) (unsigned char)5)))));
                    var_14 |= ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61341))) | (2476030092782084161ULL))) | (min((18446744073709551391ULL), (((/* implicit */unsigned long long int) (unsigned char)146)))))), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (unsigned char)89))))))));
                    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((unsigned char)252), (((/* implicit */unsigned char) (signed char)-1))))), (min((((/* implicit */long long int) (signed char)122)), (8075073569739550096LL)))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_16 = ((/* implicit */signed char) (unsigned char)89);
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((unsigned short) 1073741824U)), (((/* implicit */unsigned short) (unsigned char)158)))))));
    }
    var_18 = ((/* implicit */unsigned int) ((long long int) 144115188075855871LL));
}
