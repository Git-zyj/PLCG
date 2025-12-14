/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219881
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
    var_10 = ((/* implicit */long long int) max((var_10), (((-2526330136321583106LL) | (((/* implicit */long long int) var_6))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 -= ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) 131071U);
                    arr_6 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (_Bool)1))))) / (var_5)))) ? (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (2526330136321583105LL))) ? ((((_Bool)1) ? (-2489864773918855921LL) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
                    var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))) && (((arr_5 [i_0] [i_1] [(signed char)5]) && (arr_5 [i_0] [i_0] [i_2])))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)13))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) % (var_9))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)39)))))))) && (((((arr_9 [i_3] [i_3]) << (((arr_8 [i_3]) - (797534362))))) >= (((/* implicit */long long int) ((3597583109U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))))))))));
        arr_11 [i_3] = arr_10 [i_3];
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_15 |= ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (max((3597583108U), (((/* implicit */unsigned int) -1))))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            arr_17 [i_4] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) min(((signed char)-3), ((signed char)-78)))) >= (min((((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])))), (((/* implicit */int) ((var_6) != (((/* implicit */int) arr_16 [i_4] [i_5])))))))));
            var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_5])) ? (634198915) : (((/* implicit */int) (_Bool)0)))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_5]))) : (var_5))) - (121LL)))));
        }
        arr_18 [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1])) > (2147483647))))) - (9158288035925771036LL)));
    }
}
