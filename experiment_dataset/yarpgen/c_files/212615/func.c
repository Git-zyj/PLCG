/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212615
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
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)113)) / (((/* implicit */int) var_14))))))), (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) var_0))) + (2147483647))) >> (((max((((/* implicit */long long int) -196167387)), (arr_0 [i_0 - 1]))) + (196167413LL)))));
                arr_5 [i_0] = ((/* implicit */_Bool) var_18);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = arr_3 [i_2] [i_1] [i_0];
                    var_21 = ((/* implicit */unsigned short) ((long long int) (~(arr_0 [i_0 - 3]))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)113)))) == (((((/* implicit */int) arr_6 [(unsigned char)7] [i_1] [(unsigned char)7])) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)0)))))))));
                    arr_11 [18LL] [i_1] [i_2] = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (short)11249)))), ((_Bool)0)));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) arr_6 [i_1] [i_3] [i_4]);
                            arr_17 [i_0 - 2] [i_1] [i_0 + 1] [i_3] [i_0 - 1] = ((/* implicit */signed char) ((unsigned short) var_13));
                            var_23 ^= ((/* implicit */_Bool) (~(((2004087273) * (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
                            var_24 = ((/* implicit */signed char) arr_1 [i_0 - 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_17)) >> (((((/* implicit */int) var_7)) + (9544)))))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-5535293509075033965LL))))) : (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) var_10)))))));
    var_26 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) var_3)), (((((/* implicit */int) var_3)) + (((/* implicit */int) var_7))))))));
}
