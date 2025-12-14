/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50593
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
    var_16 = ((((/* implicit */_Bool) 17350835394419326942ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (max((13330225171878030548ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (4053662003733038256LL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) min((-1148442253892922047LL), (1148442253892922046LL)));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */int) (unsigned char)15)) : (arr_7 [i_1 - 1] [i_1 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) max((983040), (((/* implicit */int) (unsigned char)10))))) : (((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_1])) | (13933527304186065637ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [9] [i_2] [9] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_0 [i_4])) : (5739870734238263792ULL)))))));
                                var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1148442253892922047LL)) ? (((/* implicit */int) (unsigned short)8275)) : (403510821)))) % (var_5))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] = ((((/* implicit */int) (signed char)126)) * (((/* implicit */int) (unsigned char)15)));
                }
            } 
        } 
    } 
}
