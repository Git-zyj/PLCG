/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5192
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (signed char)-100)))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)-60)) > (((/* implicit */int) var_8))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] &= ((/* implicit */long long int) 0U);
        var_10 ^= ((/* implicit */short) arr_6 [i_1]);
        arr_8 [i_1] = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_2))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) << (((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */int) var_3);
        arr_10 [17LL] = ((/* implicit */unsigned char) arr_6 [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_11 ^= ((/* implicit */unsigned char) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)30)), ((unsigned short)36794)));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)30))));
                        }
                    } 
                } 
                arr_20 [i_2] [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_2])) & (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) max((arr_12 [i_2]), (arr_19 [i_2]))))))), (max((((/* implicit */unsigned short) arr_11 [i_2 + 4])), (arr_0 [i_2 + 4])))));
                arr_21 [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) arr_1 [i_2]);
                var_14 += ((/* implicit */_Bool) var_1);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (signed char i_7 = 4; i_7 < 18; i_7 += 2) 
        {
            {
                arr_26 [i_6] [i_7] [i_7 - 2] = ((/* implicit */signed char) arr_12 [i_7 + 1]);
                var_16 = ((/* implicit */short) arr_17 [i_6] [i_7] [i_7] [i_7]);
            }
        } 
    } 
}
