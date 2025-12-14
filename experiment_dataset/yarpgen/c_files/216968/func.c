/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216968
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned short)56022);
        arr_4 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9489))));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) -215116642))));
        arr_5 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)3))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_16), (arr_7 [i_1])))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_7 [i_1]) : (((/* implicit */int) (signed char)-36))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 24; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_2 - 1] [i_3] [i_2] = ((/* implicit */int) max(((signed char)36), ((signed char)-1)));
                        arr_17 [i_2] [i_3] [i_2 - 1] [i_2] [i_2] = ((((unsigned long long int) arr_12 [i_2])) == (((/* implicit */unsigned long long int) (-(arr_12 [i_2])))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5]))))) : (((/* implicit */int) (signed char)-36))))));
        var_23 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55998)) << (((arr_9 [i_5] [(signed char)18]) - (12084497378630571577ULL)))))) > ((+(arr_2 [i_5]))))))));
    }
}
