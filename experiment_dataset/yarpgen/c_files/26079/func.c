/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26079
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
    var_20 = var_4;
    var_21 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32179)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))) ? (min((var_6), (((/* implicit */long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)76), ((signed char)-66)))))))));
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66)))))))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [i_1]))))), (((((/* implicit */long long int) var_1)) + (var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) * (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)40749), (((/* implicit */unsigned short) (_Bool)1)))))) : (((((/* implicit */_Bool) var_18)) ? (var_7) : (arr_2 [i_1] [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_24 += ((/* implicit */_Bool) var_3);
                            var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-91))))) : (min((var_7), (((/* implicit */long long int) var_18)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_1] [i_1 + 1])))))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 177985419))))), (((arr_8 [i_3] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10)))))) ? (((long long int) ((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_18)), (var_9)))))))))))));
                            var_27 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -177985419)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_10 [i_2] [i_0]))))) : (((/* implicit */int) ((signed char) var_6)))))) != (((((/* implicit */_Bool) max((177985409), (((/* implicit */int) arr_10 [i_2] [i_0]))))) ? (max((var_10), (((/* implicit */unsigned long long int) (signed char)-1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((signed char) (signed char)74))), (max((var_12), (var_6))))), (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_29 &= ((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (((long long int) var_2))))));
    var_30 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */int) var_19)) < (((/* implicit */int) var_2)))) ? (((/* implicit */int) min((var_17), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_4)))));
}
