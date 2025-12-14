/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32607
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
    var_14 = ((/* implicit */unsigned char) var_6);
    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5))))) : (var_9)))));
    var_16 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned short)24)))))))) ^ (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)19))))), ((-(var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_2 [4ULL] [i_1]) : (arr_2 [i_0] [i_1]))) : (((((/* implicit */unsigned int) -854827511)) | (arr_2 [i_1] [i_1]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) + (((/* implicit */int) (short)-19230)))))))))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) & (arr_4 [i_0] [i_1] [i_0])))) || (((/* implicit */_Bool) ((2525220431165862769LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))))))));
                var_19 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_1 [i_0] [i_0]) + (9223372036854775807LL))) << (((arr_1 [i_0] [i_1]) + (8405655487589316383LL)))))))))) % (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) / (arr_4 [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20632))) <= (140737488355327ULL))))) : ((~(arr_1 [i_1] [(unsigned char)14])))))));
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))))) << (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_0])), (arr_0 [i_1])))) != ((~(arr_1 [i_1] [i_0]))))))));
            }
        } 
    } 
}
