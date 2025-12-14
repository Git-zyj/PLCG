/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20101
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
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_18))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)-5465)))) > (((/* implicit */int) ((unsigned char) (short)-5440))))))));
                var_22 = ((/* implicit */unsigned short) (short)5440);
                var_23 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) ^ (0ULL))), (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)27508)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 7; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_4] [i_5] [(unsigned short)0] = arr_8 [i_6];
                                var_24 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) >= (18446744073709551606ULL)))) & (((/* implicit */int) ((unsigned char) 16105897988814166857ULL)))))));
                                var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_17 [(unsigned char)2] [i_6 - 1] [i_4] [(unsigned char)2] [i_2] [(signed char)1]), ((short)-5465))))));
                            }
                        } 
                    } 
                } 
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((((((/* implicit */int) (short)-5442)) + (2147483647))) >> (((min((var_13), (((/* implicit */unsigned long long int) var_7)))) - (17793901624694499035ULL))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_3]))))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5440)) ? (((/* implicit */int) (short)-5440)) : (((/* implicit */int) (unsigned short)2047))));
}
