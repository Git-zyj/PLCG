/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232046
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                            arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) var_2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -9062206767607845561LL)) ? (((/* implicit */long long int) 2022552817U)) : (arr_1 [i_0 + 4] [i_4 + 2]))))))));
                            arr_19 [i_4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_4 - 1])), (((((/* implicit */_Bool) (unsigned short)64778)) ? (((/* implicit */unsigned long long int) -882491000)) : (arr_11 [i_0 + 4] [i_0 + 4] [i_1] [i_4] [i_4] [i_5])))))) ? (((var_7) / (((((/* implicit */_Bool) -9154686816823658626LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (8353090766050525684LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2272414479U)) ? (arr_14 [i_4] [i_4 + 3] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                            var_13 = ((/* implicit */unsigned char) (+((~(-4928783465289474643LL)))));
                            arr_20 [i_0] [i_4] [i_4 + 1] = ((/* implicit */_Bool) 1073741823);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            {
                arr_28 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18169554701305418302ULL)) ? (1141833146989622909ULL) : (((/* implicit */unsigned long long int) 1855881470))));
                var_15 -= ((/* implicit */unsigned short) 882491000);
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((signed char) -2627012841021591713LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (int i_9 = 2; i_9 < 19; i_9 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                arr_33 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) arr_31 [i_8] [i_8])) ? (12959304840975317845ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_31 [i_8] [i_8])) < (((/* implicit */int) var_5))))))));
                var_18 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) arr_31 [i_9 + 3] [i_8])), (var_7)))));
            }
        } 
    } 
}
