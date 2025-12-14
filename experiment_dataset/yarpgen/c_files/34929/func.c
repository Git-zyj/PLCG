/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34929
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
    var_14 = ((/* implicit */unsigned long long int) min((112185210U), (((/* implicit */unsigned int) (unsigned short)22638))));
    var_15 *= var_9;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) / (((/* implicit */int) (unsigned short)15135))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551615ULL)))));
        var_17 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_0] = ((/* implicit */unsigned int) -421803191);
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)42898);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 340131073071029399ULL)) ? (1086182833U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1862))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        var_18 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 377297053)), (18446744073709551615ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [18U] [i_2] [i_3] [i_4])) % (((/* implicit */int) var_0)))))));
                        var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_4 - 2] [19U])) ? (15358108469264136272ULL) : (((/* implicit */unsigned long long int) arr_6 [i_4 - 2] [i_4 + 1]))))));
                    }
                } 
            } 
        } 
        var_20 -= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)50400)), (((((/* implicit */unsigned int) var_6)) % (arr_13 [i_1] [i_1] [i_1] [i_1])))));
        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) var_11)), (16457800438321111534ULL)))))));
    }
}
