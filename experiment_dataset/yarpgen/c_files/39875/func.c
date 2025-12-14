/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39875
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [7LL] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) 3613462078U)))))) / (((-3868490332466947842LL) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3])))))));
                    var_17 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (short)32759))) ^ (arr_5 [i_1] [i_1] [i_1] [i_1]));
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_3 [i_0]) * (arr_3 [i_2])))))) > (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14156973426806203272ULL)))) ? (14143463116214527696ULL) : ((+(2707237755845889229ULL)))))));
                    var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2707237755845889229ULL)) ? (681505218U) : (arr_3 [i_0])))) ? ((+(arr_2 [(unsigned char)11]))) : (((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_0 - 2] [i_1] [i_2]), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15277773620179951108ULL)) ? (((/* implicit */unsigned int) -1073741824)) : (681505217U))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((unsigned char) var_9))))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)-116))))) * (((int) (signed char)127))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_9))));
}
