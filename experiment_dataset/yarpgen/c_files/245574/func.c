/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245574
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
    var_18 |= ((/* implicit */long long int) (-(max((min((((/* implicit */unsigned long long int) (unsigned short)12552)), (0ULL))), (((/* implicit */unsigned long long int) ((int) (unsigned short)12541)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) arr_10 [4] [(_Bool)1] [22LL] [i_3] [i_3])) : (((1018013660673579011ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52984)))))))));
                                var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (15147652777803113450ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52984)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) >> (((var_11) + (7481230870381429337LL)))))) : (arr_1 [i_0] [i_0 + 1]))) > (((/* implicit */long long int) min((max((arr_4 [i_1] [i_3] [i_1]), (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1])))), ((-(((/* implicit */int) (short)48)))))))));
                                var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_1 [i_0] [i_1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (short)-28950))))) : (((long long int) (signed char)-106))));
                                arr_12 [i_0 - 2] [i_0 - 2] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */int) (+(arr_1 [i_0 - 1] [(unsigned short)9])));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [6LL] = ((/* implicit */unsigned char) 618201873);
                            }
                        } 
                    } 
                    arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_2] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
