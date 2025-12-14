/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197464
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
    var_19 -= ((/* implicit */unsigned char) (short)4095);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) max((-4563145920500829229LL), (((/* implicit */long long int) -1113132926))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                            {
                                arr_14 [i_3] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_12);
                                var_21 = ((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */int) (unsigned short)55928)) : (((/* implicit */int) (unsigned char)1)));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (unsigned char)119))));
                                var_23 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [0ULL] [i_1 - 2] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [0ULL] [i_4] [i_4]))) * (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4085))))));
                            }
                            for (short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */signed char) var_5);
                                var_25 = ((/* implicit */long long int) ((max((arr_15 [i_3] [i_2 + 1] [i_2 - 1] [i_2 + 2]), (((/* implicit */unsigned int) max((var_5), (((/* implicit */int) (signed char)0))))))) + (((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [17LL]), (((/* implicit */unsigned int) var_15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)13] [i_3] [(unsigned char)13] [(_Bool)1])))))) : ((~(var_10)))))));
                                var_26 *= ((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)208)), ((short)4095)));
                            }
                            arr_19 [i_3] [(signed char)5] [(unsigned short)20] = ((/* implicit */int) (+(max((((/* implicit */unsigned int) (short)-4105)), (472862403U)))));
                            arr_20 [i_3] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_2 [i_1 - 1])), ((-(((unsigned int) var_14))))));
                        }
                    } 
                } 
                arr_21 [i_0] [13ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (433854963737690417ULL)));
                var_27 &= ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) (short)4116)))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_16);
    var_29 = ((/* implicit */signed char) var_3);
    var_30 = ((/* implicit */signed char) max((262143U), (((/* implicit */unsigned int) (unsigned short)65515))));
}
