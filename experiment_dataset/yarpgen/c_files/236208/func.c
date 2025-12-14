/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236208
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)1023), ((unsigned short)1033)))) / (((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 1] [i_1 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 - 2])) ? (var_11) : (((/* implicit */int) arr_0 [i_0]))))) ? (min((3387270290625807898LL), (-1LL))) : (max((var_12), (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_0]))))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_1 + 2])), (min((arr_3 [8]), (((/* implicit */int) arr_0 [i_0]))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_3 [8]) : (((/* implicit */int) arr_0 [i_0]))))), (-3387270290625807898LL))))))));
                var_20 |= ((/* implicit */long long int) max((min(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))), ((-(arr_3 [(_Bool)1])))));
                arr_4 [i_0] = ((/* implicit */unsigned char) (unsigned short)1038);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18166809494005934563ULL)) ? (((/* implicit */long long int) -473129559)) : (-3387270290625807895LL))), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) ((min((3387270290625807912LL), (((/* implicit */long long int) (unsigned char)61)))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [i_2] [i_2]))) - (-8557028352503208552LL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned char) var_1))))))))));
                arr_13 [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 279934579703617076ULL)) ? (((/* implicit */long long int) ((((((/* implicit */int) var_15)) << (((((var_8) + (7311672393786432920LL))) - (13LL))))) << (((((((/* implicit */int) min((arr_0 [i_2 + 1]), (((/* implicit */short) arr_2 [i_2 + 1] [i_2] [i_3 + 1]))))) + (56))) - (22)))))) : (((long long int) arr_12 [i_2 + 1] [i_3 + 1] [i_3]))));
            }
        } 
    } 
}
