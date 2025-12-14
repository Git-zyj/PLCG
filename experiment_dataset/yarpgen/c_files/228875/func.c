/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228875
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */int) var_4);
                    var_17 = ((/* implicit */short) max((min((((((/* implicit */_Bool) var_6)) ? (var_15) : (var_2))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)-75)), (arr_6 [i_0] [i_1] [i_1] [i_1])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (unsigned short)22))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
    {
        var_19 = ((arr_8 [i_3 - 2] [7U]) && (((((/* implicit */_Bool) (unsigned short)22)) && (max(((_Bool)1), ((_Bool)1))))));
        var_20 -= ((/* implicit */signed char) ((int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1]))) : (max((((/* implicit */long long int) var_6)), (var_1))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 20; i_4 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 2] [i_4]))) - (var_6)));
        var_22 += ((/* implicit */_Bool) -1LL);
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (short i_7 = 2; i_7 < 18; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((arr_17 [i_7 - 1]) % (arr_17 [i_7 + 1])));
                        var_24 = ((var_2) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_19 [i_7] [i_5] [i_5])))))));
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)22)) ? (arr_16 [i_8 + 1] [i_8 - 2]) : (arr_16 [i_8 - 2] [i_8 + 1]))) + ((-(arr_16 [i_8 - 2] [i_8 - 2])))));
        var_26 = ((/* implicit */unsigned long long int) arr_19 [2] [i_8] [2]);
    }
}
