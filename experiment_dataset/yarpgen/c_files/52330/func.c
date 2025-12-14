/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52330
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
    var_12 = ((/* implicit */long long int) (-(2856878304U)));
    var_13 = var_1;
    var_14 ^= ((/* implicit */unsigned char) max((1438088991U), (2856878304U)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) -4551485250877002672LL)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28746)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) : (1940273501U)))))))));
        var_15 = ((/* implicit */_Bool) max((4198384286693176689LL), (((/* implicit */long long int) (_Bool)1))));
        var_16 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)114)) ? (-1012725779) : (((/* implicit */int) (short)2124))))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)21208)) ? (3551634365U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))));
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)22117))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18169)) == ((+((-(((/* implicit */int) (unsigned char)245))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (arr_10 [i_3]) : (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_9))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_19 [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (2059455597250763919LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44628))))) / (((/* implicit */long long int) max((-50075899), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)187)), ((unsigned short)2187)))))))));
                }
            } 
        } 
    } 
}
