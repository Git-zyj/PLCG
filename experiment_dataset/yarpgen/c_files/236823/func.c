/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236823
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
    var_11 = ((/* implicit */long long int) min((var_11), (var_4)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                    arr_11 [i_0] = ((/* implicit */short) (-(min((((/* implicit */unsigned int) max((arr_6 [i_2] [i_1]), ((unsigned short)41482)))), (67108608U)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) var_2)), (arr_14 [i_0] [i_0] [i_1] [i_2] [i_3]))))), (max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_3])), (36028796985409536LL)))));
                        arr_15 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (var_7)))))) && (((arr_10 [i_0] [i_1] [i_1]) > (((((/* implicit */_Bool) 14414030947784557947ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_3]))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) arr_8 [i_3] [i_0] [i_3] [i_3]);
                    }
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (arr_1 [i_2])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)24042)) : (((/* implicit */int) (short)-8252)))) : (((/* implicit */int) (unsigned short)30199))));
                    var_15 = ((/* implicit */unsigned long long int) ((min((arr_1 [i_1]), (arr_1 [i_2]))) * (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-39)) : (var_7))) >= (((/* implicit */int) (signed char)127)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    arr_24 [i_0] [i_5] = ((((((/* implicit */int) arr_13 [i_0] [i_4] [i_5] [i_0])) * (((/* implicit */int) (unsigned short)24047)))) / (((/* implicit */int) max(((unsigned short)4050), (((/* implicit */unsigned short) arr_13 [i_0] [i_4] [i_0] [i_0]))))));
                    var_16 ^= ((/* implicit */short) min((min((((/* implicit */long long int) var_8)), (arr_23 [i_0]))), (((/* implicit */long long int) arr_0 [i_4] [i_5]))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_3 [i_0]))));
                }
            } 
        } 
        arr_25 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (short)0));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)10801), ((unsigned short)41488))))) : (var_4)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (var_4)));
}
