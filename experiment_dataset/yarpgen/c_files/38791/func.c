/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38791
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((arr_0 [i_1]), (arr_1 [i_0] [i_1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_1])))) : (max((((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 2] [(unsigned char)0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)114)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (6447056664150717713LL)))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)190), (arr_2 [i_0] [i_1] [i_2]))))) : (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)10] [(unsigned char)8] [i_1] [(unsigned char)10])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned char)134))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6447056664150717713LL)) ? (-6447056664150717714LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))) : (((min((var_9), (2265463156U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (unsigned short)27868)) : (((/* implicit */int) arr_7 [i_3] [i_1 + 1] [i_2] [2ULL]))))))))))));
                            var_12 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) (unsigned char)255)), ((+(2029504139U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) << (((((/* implicit */int) ((unsigned char) (unsigned char)156))) - (125))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (short)6242))))));
                var_14 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_1 + 1] [i_1 + 2]);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15123)) ? (var_9) : (3990490825U)))) || (((/* implicit */_Bool) var_0)))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) var_4)), (6949023578916012047LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) var_4))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))));
}
