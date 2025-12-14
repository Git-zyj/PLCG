/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246300
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [(unsigned char)0] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [2U]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((arr_0 [i_0] [i_2]), (((/* implicit */signed char) arr_1 [i_1]))))))) : (min((var_8), (((/* implicit */unsigned long long int) var_7))))));
                                var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_3] [i_2])))) || (((/* implicit */_Bool) min((arr_3 [i_3] [i_4]), (((/* implicit */unsigned long long int) var_6)))))));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned long long int) var_16)))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                            {
                                arr_16 [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)23860)), (arr_4 [9U] [i_3] [(unsigned char)9])))) * ((((_Bool)0) ? (3328251929U) : (3739425808U)))))));
                                var_19 *= ((/* implicit */short) ((signed char) arr_8 [i_5] [i_3] [i_5] [i_5] [i_1] [i_0]));
                                arr_17 [i_0] [(unsigned short)7] [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)960)) * (((/* implicit */int) min((((/* implicit */signed char) var_15)), ((signed char)79))))))));
                            }
                            arr_18 [3] [i_1] [3] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [4ULL] [i_1] [i_2] [i_2] [i_3]))))), (((var_2) - (((/* implicit */long long int) var_3))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_3])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-49))))) : (15408791743309964095ULL)))));
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_20 |= ((/* implicit */_Bool) arr_4 [5U] [(_Bool)1] [i_3]);
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) / (8817898761933817471ULL))))))));
                            }
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min(((+(max((((/* implicit */unsigned long long int) var_16)), (var_5))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) var_12))), ((-(var_2)))))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2147483647) : (arr_7 [i_0] [i_0] [i_1] [i_0] [i_0])))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [(signed char)10] [i_1] [(short)4] [i_2] [i_3])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_3)), (arr_15 [(unsigned char)8] [i_0] [i_0] [(short)2] [6])))));
            }
        } 
    } 
    var_25 = ((_Bool) (-(((/* implicit */int) (short)-24474))));
}
