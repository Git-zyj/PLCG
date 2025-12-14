/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248843
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18776)) ? (((/* implicit */unsigned int) 1631082830)) : (565925794U)))) ? ((+((+(11663126214049952378ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11663126214049952378ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (5049070166241105LL))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [(unsigned char)4] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)33222)));
            var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (6783617859659599238ULL))) >= (var_1)));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_18 |= ((/* implicit */int) (-(var_2)));
            arr_10 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_19 = (-9223372036854775807LL - 1LL);
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_2 [i_3]))));
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        {
                            arr_23 [i_0] [i_6] [i_3] [i_6] [i_0] &= ((/* implicit */unsigned short) 11663126214049952378ULL);
                            var_21 = ((/* implicit */int) min((max((arr_8 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_21 [i_0 + 1] [i_0] [i_3])))), (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_21 [i_0 + 1] [i_0 - 1] [i_3])))))));
                            var_22 |= ((/* implicit */signed char) (-(11663126214049952378ULL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 3; i_8 < 18; i_8 += 2) 
                {
                    {
                        var_23 -= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_16)), (11663126214049952378ULL))) != (((/* implicit */unsigned long long int) -1424052921))))), ((+((-(arr_31 [i_0 - 1] [i_0 + 1] [i_0 + 1])))))));
                        arr_32 [i_0] [i_3] [(short)19] [i_3] = ((/* implicit */int) ((long long int) var_10));
                        arr_33 [i_0] [i_3] [(signed char)6] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((((((/* implicit */_Bool) 134217728U)) ? (((/* implicit */long long int) 3314934771U)) : (var_8))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 6783617859659599238ULL)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)33222)))))));
                        var_24 &= ((/* implicit */int) (-((~(max((((/* implicit */unsigned long long int) -1449903852717524249LL)), (0ULL)))))));
                    }
                } 
            } 
        }
    }
    var_25 = ((int) var_13);
}
