/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50081
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_10 ^= ((/* implicit */unsigned int) arr_3 [i_0] [i_3]);
                                arr_11 [i_4] [i_2 - 1] [i_2 - 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_6 [i_2] [i_2] [i_4]);
                                var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) arr_4 [i_4] [i_3] [i_2] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) 982860432U);
                                arr_16 [i_0] [i_0] [i_2] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1385)) ? (((/* implicit */int) ((short) ((unsigned long long int) 3312106861U)))) : (((/* implicit */int) (signed char)59))));
                                arr_17 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_6] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_5 [i_1] [i_2 - 1] [i_6 + 2])))))) : (((((/* implicit */_Bool) (short)-1402)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))) : (1189942475644383005ULL)))))) ? (((/* implicit */unsigned int) ((int) ((short) 982860432U)))) : (arr_15 [i_6 - 1] [i_5] [i_2] [i_1] [i_0])));
                                var_13 = arr_2 [i_2];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) var_9));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((short) var_0))))) : (var_5)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-1385)))) : (4294967293U)))) ? (-1218835351) : (((/* implicit */int) (short)4170))));
}
