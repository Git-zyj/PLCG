/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244526
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL)))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))))) <= (((unsigned long long int) ((var_3) && ((_Bool)1))))));
                var_12 *= ((/* implicit */unsigned char) min((max((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))), (((/* implicit */unsigned long long int) ((((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */int) ((_Bool) 7260379129014988900ULL))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 3])))))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_4 [i_0 + 2]))));
                    var_15 = ((/* implicit */unsigned char) ((arr_6 [i_0 + 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0 + 3]));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_2 [i_0]))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 10511943610403808577ULL)))))));
                    var_18 -= ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_5 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || ((_Bool)1))))));
                }
                for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((signed char) var_5))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))), (arr_6 [i_0]))) : (max(((-(16052428659469736744ULL))), (((unsigned long long int) arr_2 [(_Bool)1]))))));
                    var_20 = ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)5))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (4945979239091574764ULL))))) : (((min((((/* implicit */unsigned long long int) (unsigned char)131)), (var_6))) + (((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
}
