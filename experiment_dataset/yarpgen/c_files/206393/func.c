/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206393
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_2)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) + (var_6)))) ? (var_9) : (((long long int) var_8)))))))));
    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) 3725378128U)))));
    var_20 = ((/* implicit */unsigned char) (+(var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) arr_8 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]);
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) 1907717135744157852LL)))))));
                                var_24 = ((/* implicit */unsigned short) min(((~(arr_3 [i_4]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((arr_10 [i_0] [17LL] [i_1] [i_2] [i_3] [17LL]), (arr_10 [i_0] [i_0] [i_4] [i_3] [i_1] [i_3])))), (arr_14 [i_4] [i_3] [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) (signed char)14)) ? (1907717135744157842LL) : (1907717135744157842LL))) : (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_8))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) != (arr_12 [i_2] [9LL])))))));
                    var_26 += ((/* implicit */unsigned short) ((unsigned long long int) min(((-(((/* implicit */int) arr_7 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) > (var_2)))))));
                }
            } 
        } 
    } 
}
