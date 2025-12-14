/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40219
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1])) < (((/* implicit */int) arr_0 [i_1 + 2] [16LL]))))) % (((((/* implicit */int) (unsigned char)219)) % (((/* implicit */int) arr_0 [i_1 + 3] [i_1]))))));
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) arr_0 [17] [i_1 + 3])) ? (((((/* implicit */_Bool) ((-2861596019671748697LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) : (((-2861596019671748713LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-5688))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((-2861596019671748697LL), (((/* implicit */long long int) var_12))))) || (((((/* implicit */int) arr_0 [i_0] [i_1 - 2])) < (-442926566))))))));
                var_20 = ((/* implicit */signed char) var_18);
                var_21 = ((/* implicit */signed char) (-((-(((/* implicit */int) ((signed char) var_18)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) 11469677316907271344ULL);
    var_23 = ((/* implicit */long long int) max((((/* implicit */int) max(((unsigned short)15422), ((unsigned short)60535)))), ((~(max((var_0), (var_11)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_24 &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (max((((/* implicit */unsigned long long int) -5100914893608624194LL)), (11469677316907271346ULL))))) ? (max((((/* implicit */unsigned long long int) 5010748431599941840LL)), (11469677316907271344ULL))) : (((/* implicit */unsigned long long int) ((4613023512739013451LL) ^ (max((var_8), (var_5))))))));
                                arr_17 [i_5] [i_3 + 2] [i_4] = ((/* implicit */int) 3543366350392459719ULL);
                            }
                        } 
                    } 
                } 
                var_25 &= ((/* implicit */int) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)12), (((/* implicit */unsigned char) var_13)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (var_8))))), (max((((/* implicit */long long int) max((var_13), ((signed char)86)))), (((((/* implicit */_Bool) 375142471248375167LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_5)))))));
                var_26 = -3919084324058242078LL;
                arr_18 [i_2] [i_2] [(short)1] = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [i_3])) - (((/* implicit */int) arr_11 [18] [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) -9146517759015254089LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))) : (-375142471248375161LL))))) - (max((((((/* implicit */_Bool) arr_9 [i_2] [i_3 + 3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_19))), (-7257389170853281111LL)))));
            }
        } 
    } 
}
