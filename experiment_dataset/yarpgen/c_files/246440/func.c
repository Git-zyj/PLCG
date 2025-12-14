/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246440
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */_Bool) -2254440726461672528LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-19865)))) >= (((/* implicit */int) (unsigned char)241)))));
                                var_14 ^= ((/* implicit */long long int) var_0);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)241))))) + (13091644308219939904ULL)));
                                arr_14 [i_1] [i_3] [i_2] [i_1 - 2] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_1] [i_4 + 1])), (var_13)));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (max((((/* implicit */int) var_4)), ((~(((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1 + 2] [i_1 - 1])))))) : (var_7)));
                var_17 = ((/* implicit */unsigned char) 8989607068696576ULL);
                var_18 *= ((/* implicit */unsigned long long int) (unsigned char)241);
                var_19 = ((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) - (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)31)), ((unsigned short)13387)))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_6 [i_0] [i_0] [i_0])))) : (min((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) var_12))))))));
            }
        } 
    } 
    var_20 = max((((/* implicit */unsigned short) var_0)), (var_3));
    var_21 = ((/* implicit */long long int) (~(1420165044)));
}
