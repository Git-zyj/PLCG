/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53594
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
    var_17 = ((/* implicit */short) max((var_17), (((short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)48755)) : (((/* implicit */int) (signed char)-25)))))));
    var_18 *= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((((/* implicit */unsigned long long int) -1689130770)) & (var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_9))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        arr_12 [(signed char)3] [i_2] [i_1] [i_1] [i_2 - 1] [i_3] = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_0)) << (((arr_8 [i_2] [i_2] [i_0] [i_2]) - (1153386564))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)16781))))))) ? (1584582983552089726ULL) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_2]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (11144011580828009737ULL)))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) var_0)) << (((((arr_8 [i_2] [i_2] [i_0] [i_2]) - (1153386564))) + (1687745795))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)16781))))))) ? (1584582983552089726ULL) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_2]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (11144011580828009737ULL))))))));
                        var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 511)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0]))))), (min((((/* implicit */unsigned long long int) 2147483647)), (17136490170227041703ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_3])) : (((/* implicit */int) (signed char)-31))))) | (min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_8)));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_15 [i_4] [i_1] [i_2 - 1] [i_1]))));
                        arr_18 [i_4] [13ULL] [(_Bool)1] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_0] [1] [1] [i_2 - 1] [(_Bool)1]))));
                        var_23 = arr_0 [i_0];
                    }
                }
            } 
        } 
    } 
}
