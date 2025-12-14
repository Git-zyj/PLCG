/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242548
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-756921491)));
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((756921491) >> (((((/* implicit */int) (unsigned short)18096)) - (18065)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)72)) != (((/* implicit */int) var_6))))) + (((/* implicit */int) min(((unsigned short)18096), ((unsigned short)18099))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)3374)) >= (((/* implicit */int) var_3)))))));
        var_13 -= ((/* implicit */long long int) 3532873779U);
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1 - 2] [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 2147483647)), (min((17785721935963163967ULL), (((/* implicit */unsigned long long int) 756921491)))))) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 756921491))))), (((((/* implicit */_Bool) -1216324301)) ? (0U) : (var_1))))))));
        var_14 = ((/* implicit */unsigned short) (+(((min((3575418439U), (var_1))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))));
        arr_6 [(signed char)5] [i_1] = ((/* implicit */int) (unsigned char)194);
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (((var_7) ? (0U) : (((/* implicit */unsigned int) 756921482))))));
        arr_8 [5U] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)87), (((/* implicit */unsigned char) (signed char)-1)))))) / (max((var_5), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)25088)), (var_1))))))));
    }
    for (unsigned int i_2 = 3; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((unsigned int) var_0)) > (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) >> (((((/* implicit */int) (unsigned short)18099)) - (18080))))))));
        arr_11 [i_2 - 2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) (short)6549)) : ((~(1216324301))))) - (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
        {
            var_16 *= ((/* implicit */unsigned char) ((((unsigned long long int) ((_Bool) 2934182475U))) <= (4140814510114893211ULL)));
            arr_16 [(signed char)15] [i_3] [15] = ((/* implicit */_Bool) min((min((((/* implicit */int) ((unsigned char) var_0))), (((((/* implicit */int) (unsigned short)18099)) ^ (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2371112118U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)32404)))))))));
            arr_17 [i_2 - 2] [i_3] [i_2 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */unsigned int) -577742199)) : (var_1)))) && (((/* implicit */_Bool) ((short) 802828469U))))) ? (((/* implicit */unsigned long long int) (~(max((3575418439U), (((/* implicit */unsigned int) var_6))))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
        }
    }
    var_17 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))), (min((7850018695280635069ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) var_7)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
}
