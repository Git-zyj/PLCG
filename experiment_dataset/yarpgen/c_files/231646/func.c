/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231646
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
    var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-765))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (20493))) - (21)))))) : (((5302444009162198660ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)748))))))) == (((/* implicit */unsigned long long int) 3360328649U))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + (((/* implicit */int) ((short) min((((/* implicit */unsigned int) (unsigned char)249)), (1160392321U)))))));
                var_13 = ((/* implicit */short) ((signed char) (+(((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) min((var_4), (4610560118520545280ULL)))) ? (((/* implicit */int) (unsigned char)205)) : ((-(((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 2 */
    for (short i_2 = 1; i_2 < 12; i_2 += 4) /* same iter space */
    {
        arr_10 [(unsigned char)2] [i_2 - 1] = ((/* implicit */int) (unsigned short)29188);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -745694647)) ? (((((/* implicit */_Bool) 5223185279352928602ULL)) ? (((/* implicit */int) (unsigned short)0)) : ((-(((/* implicit */int) (short)15443)))))) : (((/* implicit */int) ((signed char) 13836183955189006336ULL)))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 12; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [(unsigned short)5])) > (((/* implicit */int) arr_1 [i_3]))));
        arr_13 [3U] = ((/* implicit */unsigned short) 1739800484U);
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) (short)-32753));
        var_19 = (-(((/* implicit */int) ((((/* implicit */int) (short)20786)) != (((/* implicit */int) (short)-21791))))));
    }
}
