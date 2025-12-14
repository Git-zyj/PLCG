/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244829
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
    var_18 = ((/* implicit */int) max(((((((_Bool)1) && (((/* implicit */_Bool) var_5)))) && ((!(var_15))))), ((!((!(var_15)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -770997879)), (min((((/* implicit */unsigned long long int) arr_6 [i_3] [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) ^ (18446744073709551615ULL)))))));
                            arr_10 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (-(min((((/* implicit */int) min(((unsigned short)27829), ((unsigned short)24576)))), (max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)40965))))))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_1 - 1] [i_1]) >> (((((int) arr_2 [i_0] [i_1])) + (16873)))))) ? (max((arr_7 [i_0] [i_1 - 1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32256))) < (arr_1 [i_0])))))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                /* LoopNest 3 */
                for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((int) max((((int) arr_14 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (770997896) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_4] [i_5] [i_6])))))));
                                arr_22 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_4 + 1] [i_5 - 1] [i_4] [i_1 - 1] [i_6])) % (((/* implicit */int) arr_16 [i_4 + 1] [i_5 - 1] [i_4] [i_1 - 1] [i_6])))) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (770997903)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
